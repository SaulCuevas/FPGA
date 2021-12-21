`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
module SEMAFOROS(
    input			CLK,
	 input  			FOTORES,
	 output reg [7:0] 	LED_COLS,		//Matriz de leds para el paso peatonal NS
    output reg [7:0] 	LED_FILS,		//
    output reg [2:0] 	SEMAFORO_EO,
    output reg [2:0] 	SEMAFORO_NS,
    output reg				BUZZER,			//Buzzer del paso peatonal NS
	 output reg				V_CC				//Pin Vcc de la matriz de leds
    );

	// Detector de noche usando la fotorresistencia
	reg NOCHE = 0;
always @ ( posedge CLK )
	begin
		if( FOTORES == 1 ) NOCHE = 1;
		else NOCHE = 0;
	end
	
	// Reloj de 1Hz en caso de no contar con uno externo
	reg FREC_1HZ;
	reg [24:0] CONT_FREC_1HZ; 	//Necesitamos compararlo con 25_000_000 ciclos de reloj
										//25_000_000*20ns = la mitad del periodo de una frecuencia de 1Hz
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_1HZ == 25'd25_000_000 ) begin
				CONT_FREC_1HZ = 25'd0;
				FREC_1HZ = ~(FREC_1HZ);
			end
			else CONT_FREC_1HZ = CONT_FREC_1HZ + 1'b1;
		end
	
	// Generador de senal de 2Hz = 0.5s
	reg FREC_2HZ;
	reg [23:0] CONT_FREC_2HZ; 	//Necesitamos compararlo con 12_500_000 ciclos de reloj
										//12_500_000*20ns = la mitad del periodo de una frecuencia de 2Hz
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_2HZ == 24'd12_500_000 ) begin
				CONT_FREC_2HZ = 24'd0;
				FREC_2HZ = ~(FREC_2HZ);
			end
			else CONT_FREC_2HZ = CONT_FREC_2HZ + 1'b1;
		end
		
	// Generador de senal de 4Hz = 0.25s
	reg FREC_4HZ;
	reg [22:0] CONT_FREC_4HZ; 	//Necesitamos compararlo con 6_250_000 ciclos de reloj
										//6_250_000*20ns = la mitad del periodo de una frecuencia de 4Hz
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_4HZ == 23'd6_250_000 ) begin
				CONT_FREC_4HZ = 23'd0;
				FREC_4HZ = ~(FREC_4HZ);
			end
			else CONT_FREC_4HZ = CONT_FREC_4HZ + 1'b1;
		end
		
	// Generador de senal de 8Hz = 0.125s
	reg FREC_8HZ;
	reg [21:0] CONT_FREC_8HZ; 	//Necesitamos compararlo con 3_125_000 ciclos de reloj
										//3_125_000*20ns = la mitad del periodo de una frecuencia de 8Hz
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_8HZ == 22'd3_125_000 ) begin
				CONT_FREC_8HZ = 22'd0;
				FREC_8HZ = ~(FREC_8HZ);
			end
			else CONT_FREC_8HZ = CONT_FREC_8HZ + 1'b1;
		end
	
	// Generador de senal de 440Hz = 2.2727ms para una nota de LA para el indicador de velocidad
	reg LA;
	reg [15:0] CONT_FREC_440; 	//Necesitamos compararlo con 56_818 ciclos de reloj
										//56_818*20ns = la mitad del periodo de una frecuencia de 440Hz
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_440 == 16'd56_818 ) begin
				CONT_FREC_440 = 16'd0;
				LA = ~(LA);
			end
			else CONT_FREC_440 = CONT_FREC_440 + 1'b1;
		end
	
	// CONTADOR 
	always @ ( CONTADOR )
		begin
			if( CONTADOR == 5'b10111 ) CONTADOR_RESET = 1;
			else CONTADOR_RESET = 0;
		end
		
	reg CONTADOR_RESET = 0;
	reg [4:0] CONTADOR = 0;
	always @ ( posedge FREC_1HZ )
		begin
			if( CONTADOR_RESET == 1 ) CONTADOR = 0;
			else CONTADOR = CONTADOR + 1'b1;
		end

	reg [1:0] VELOCIDAD_NS = 0;		//Velocidad del buzzer NS
	//este registro no se usa porque no se cuenta con 2 buzzers
	//reg [1:0] VELOCIDAD_EO = 0;		//Velocidad del buzzer EO
	always @ ( CONTADOR, NOCHE )
		begin
			if( NOCHE == 0 ) begin
				case( CONTADOR )
				5'b00000 : begin SEMAFORO_EO = 3'b100; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b01; end
				5'b00001 : begin SEMAFORO_EO = 3'b100; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b01; end
				5'b00010 : begin SEMAFORO_EO = 3'b100; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b01; end
				5'b00011 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b01; end
				5'b00100 : begin SEMAFORO_EO = 3'b100; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b01; end
				5'b00101 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b10; end
				5'b00110 : begin SEMAFORO_EO = 3'b100; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b10; end
				5'b00111 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b10; end
				5'b01000 : begin SEMAFORO_EO = 3'b100; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b11; end
				5'b01001 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b11; end
				5'b01010 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b11; end
				5'b01011 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b01100 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b100; VELOCIDAD_NS = 2'b00; end
				5'b01101 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b100; VELOCIDAD_NS = 2'b00; end
				5'b01110 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b100; VELOCIDAD_NS = 2'b00; end
				5'b01111 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b10000 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b100; VELOCIDAD_NS = 2'b00; end
				5'b10001 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b10010 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b100; VELOCIDAD_NS = 2'b00; end
				5'b10011 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b10100 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b100; VELOCIDAD_NS = 2'b00; end
				5'b10101 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b010; VELOCIDAD_NS = 2'b00; end
				5'b10110 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b010; VELOCIDAD_NS = 2'b00; end
				5'b10111 : begin SEMAFORO_EO = 3'b001; SEMAFORO_NS = 3'b010; VELOCIDAD_NS = 2'b00; end
				default : begin SEMAFORO_EO = 3'b111; SEMAFORO_NS = 3'b111; VELOCIDAD_NS = 2'b00; end
				endcase
			end
			else begin
				case( CONTADOR )
				5'b00000 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b00001 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b00010 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b00011 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b00100 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b00101 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b00110 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b00111 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b01000 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b01001 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b01010 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b01011 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b01100 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b01101 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b01110 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b01111 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b10000 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b10001 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b10010 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b10011 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b10100 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b10101 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				5'b10110 : begin SEMAFORO_EO = 3'b010; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				5'b10111 : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b001; VELOCIDAD_NS = 2'b00; end
				default : begin SEMAFORO_EO = 3'b000; SEMAFORO_NS = 3'b000; VELOCIDAD_NS = 2'b00; end
				endcase
			end
		end
	
	// Buzzer
	reg VEL_DISP = 0; //Velocidad del contador del display
	always @ ( posedge CLK )
		begin
			case( VELOCIDAD_NS )
			2'b00 : begin BUZZER = 0; VEL_DISP = FREC_8HZ; end
			2'b01 : begin BUZZER = (LA & FREC_2HZ); VEL_DISP = FREC_2HZ; end
			2'b10 : begin BUZZER = (LA & FREC_4HZ); VEL_DISP = FREC_4HZ; end
			2'b11 : begin BUZZER = (LA & FREC_8HZ); VEL_DISP = FREC_8HZ; end
			default : begin BUZZER = 0; VEL_DISP = 0; end
			endcase
		end
	
	// Contador del display 
	reg [2:0] CONTADOR_DISP = 0;
	reg [2:0] CONTADOR_COLS = 0;
		always @ ( posedge VEL_DISP )
		begin
			if( VELOCIDAD_NS == 2'b00 ) CONTADOR_DISP = 3'b000;
			else if( CONTADOR_DISP == 3'b111 ) CONTADOR_DISP = 3'b000;
			else CONTADOR_DISP = CONTADOR_DISP + 1'b1;
		end
		
		always @ ( posedge LA ) //Cada fila se refresca cada 440Hz/8 = 55Hz
		begin
			if( CONTADOR_COLS == 3'b111 ) CONTADOR_COLS = 0;
			else CONTADOR_COLS = CONTADOR_COLS + 1'b1;
		end

	// Animacion de LEDs
	always @ ( posedge CLK ) V_CC = LED_FILS[7];
	always @ ( posedge CLK )
		begin
			case( CONTADOR_DISP )
			3'b000 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b00111000; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b00111000; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b00010000; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b01111100; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b00010000; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b00111000; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b00101000; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b00101000; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			3'b001 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b00011100; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b00011100; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b00001000; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b00111110; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b00101000; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b00001110; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b00001010; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b00001010; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			3'b010 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b00001110; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b00001110; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b00000100; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b00011111; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b00000100; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b00001110; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b00001010; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b00001010; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			3'b011 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b00000111; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b00000111; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b00000010; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b10001111; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b00001010; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b10000011; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b10000010; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b10000010; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			3'b100 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b10000011; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b10000011; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b00000001; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b11000111; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b00000001; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b10000011; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b10000010; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b10000010; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			3'b101 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b11000001; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b11000001; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b10000000; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b11100011; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b10000010; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b11100000; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b10100000; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b10100000; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			3'b110 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b11100000; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b11100000; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b01000000; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b11110001; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b01000000; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b11100000; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b10100000; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b10100000; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			3'b111 : begin
				case( CONTADOR_COLS )
				3'b000 : begin LED_COLS = ~8'b01110000; LED_FILS = ~8'b10000000; end
				3'b001 : begin LED_COLS = ~8'b01110000; LED_FILS = ~8'b01000000; end
				3'b010 : begin LED_COLS = ~8'b00100000; LED_FILS = ~8'b00100000; end
				3'b011 : begin LED_COLS = ~8'b11111000; LED_FILS = ~8'b00010000; end
				3'b100 : begin LED_COLS = ~8'b10100000; LED_FILS = ~8'b00001000; end
				3'b101 : begin LED_COLS = ~8'b00111000; LED_FILS = ~8'b00000100; end
				3'b110 : begin LED_COLS = ~8'b00101000; LED_FILS = ~8'b00000010; end
				3'b111 : begin LED_COLS = ~8'b00101000; LED_FILS = ~8'b00000001; end
				default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
				endcase
			end
			default : begin LED_COLS = ~8'b00000000; LED_FILS = ~8'b00000000; end
			endcase
		end
	
endmodule
