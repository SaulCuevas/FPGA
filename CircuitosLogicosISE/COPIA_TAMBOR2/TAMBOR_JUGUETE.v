`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
module TAMBOR_JUGUETE(
    input	CLK,						//Reloj FPGA 50MHz
	 input 	PIEZO,					//Sensor piezoelectrico
	 input 	UP_DOWN,					//Boton para selector ascedente o descendente
    output 	reg [15:0] 	SIETE_SEG,	//Senal para display de 7 segmentos de dos digitos (para la AMIBA2 necesitamos una seal de 8 digitos)
    output 	reg [7:0]	LEDS_R,		//Senal para 8 LEDS RGB
    output 	reg [7:0] 	LEDS_G,
    output 	reg [7:0] 	LEDS_B,
    output  reg 			BUZZER	//Buzzer pasivo
    );

	reg UP_OR_DOWN = 0;				//Registro de la direccion del contador
	reg BOTON_PRES = 0;				//Registro para el boton (anti-rebotes)
	reg PIEZO_PRES = 0;				//Registro para el piezo (anti-rebotes)
	reg [3:0] CONTADOR;
	reg CONT_R = 0;
	reg [21:0] sclk = 0;
	reg sampled_BOTON_PRES = 0;
	reg sampled_PIEZO_PRES = 0;
		
	always @(posedge CLK)
		begin
			sampled_BOTON_PRES <= UP_DOWN;
			sampled_PIEZO_PRES <= PIEZO;
			// clock es dividido
			// se muestrea cada 25ms para verificar que la entrada es la misma que la
			// muestra, si la senal es estable, se saca la senal
			if(sclk == 22'd2_500_000)
				begin
					if(sampled_BOTON_PRES == UP_DOWN)
						begin
							BOTON_PRES <= UP_DOWN;
						end
					if(sampled_PIEZO_PRES == PIEZO)
						begin
							PIEZO_PRES <= PIEZO;
						end
					sclk <= 22'd0;
				end
			else
				begin
					sclk <= sclk + 1'b1;
				end
		end
	//Cada que se presiona el boton se cambia la direccion UP_OR_DOWN
	always @ ( posedge BOTON_PRES )
		begin
			UP_OR_DOWN = ~(UP_OR_DOWN);
		end
	//Cada que se presiona el piezo se incrementa o decrementa el contador
	//Contador
	always @ ( posedge PIEZO_PRES ) 
		begin
			if( UP_OR_DOWN == 1 ) begin				//Si es descendente
				if( CONT_R == 1 ) CONTADOR = 4'b1001;
				else CONTADOR = CONTADOR - 1'b1;
			end
			else begin
				if( CONT_R == 1 ) CONTADOR = 4'b0000;
				else CONTADOR = CONTADOR + 1'b1;
			end
		end
	//Reset del contador
	always @ ( CONTADOR, CLK, UP_OR_DOWN )
		begin
			if( CLK == 1 ) begin
				if( CONTADOR == 4'b1001 & UP_OR_DOWN == 0 ) CONT_R = 1;			//Si es ascendente
				else if( CONTADOR == 4'b0000 & UP_OR_DOWN == 1 ) CONT_R = 1; 	//Si es descendente
				else CONT_R = 0;
			end
		end
		
		
	//// Generador de senal de 120Hz [2 digitos a 60Hz = 120Hz] = 8.3333ms
	reg [17:0] CONT_FREC_120; 	//Necesitamos compararlo con 208_334 ciclos de reloj
										//208_334*20ns = la mitad del periodo de una frecuencia de 120Hz
	reg CONTADOR_DISP;
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_120 == 18'd208_334 ) begin
				CONT_FREC_120 = 18'd0;
				CONTADOR_DISP = ~(CONTADOR_DISP);
			end
			else CONT_FREC_120 = CONT_FREC_120 + 1'b1;
		end
	
	//// Generador de senal de 440Hz = 2.2727ms para una nota de LA para el buzzer
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
		
	//// Generador de senal de 261.63 Hz = 3.82219ms para una nota de DO para el buzzer
	reg DO;
	reg [16:0] CONT_FREC_262; 	//Necesitamos compararlo con 95_555 ciclos de reloj
										//95_555*20ns = la mitad del periodo de una frecuencia de 261.63Hz
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_262 == 17'd95_555 ) begin
				CONT_FREC_262 = 17'd0;
				DO = ~(DO);
			end
			else CONT_FREC_262 = CONT_FREC_262 + 1'b1;
		end
	
	//// Manipulacion del buzzer, cada que haya un cambio en el contador
	//// o se presione el piezo se manda un tono de la nota LA
	reg DELAY_1SEG = 0;
	reg DELAY_RESET = 0;
	reg [23:0] CONT_DELAY = 0;
	always @ ( posedge CLK )
		begin
			if( DELAY_RESET == 1 ) DELAY_1SEG = 0;
			else if( PIEZO_PRES == 1 ) DELAY_1SEG = 1;
			else DELAY_1SEG = DELAY_1SEG; 
		end
	
	always @ ( posedge CLK )
		begin
			if( DELAY_1SEG == 1 ) begin
				if( CONT_DELAY == 24'd12_500_000 ) begin
					DELAY_RESET = 1;
					CONT_DELAY = 24'd0;
				end
				else begin 
					CONT_DELAY = CONT_DELAY + 1'b1;
					if( UP_OR_DOWN == 0 ) BUZZER = LA;
					else BUZZER = DO;
				end
			end
			else begin
				BUZZER = 0;
				DELAY_RESET = 0;
			end
		end
	
	//// Manipulacion de los leds, display
	always @ ( CLK, CONTADOR, CONTADOR_DISP )
		begin
			case( CONTADOR )
			4'b0000 : begin //CASO 01
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b10011111 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b11111111; LEDS_G = 8'b11111111; LEDS_B = 8'b11111111; //Asignacion de colores de los leds
				end
			end
				
			4'b0001 : begin //CASO 02
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b00100101 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b11111111; LEDS_G = 8'b11111111; LEDS_B = 8'b00000000; //Asignacion de colores de los leds
				end
			end
				
			4'b0010 : begin //CASO 03
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b00001101 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b11111111; LEDS_G = 8'b00000000; LEDS_B = 8'b11111111; //Asignacion de colores de los leds
				end
			end
			
			4'b0011 : begin //CASO 04
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b10011001 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b11111111;; LEDS_G = 8'b00000000; LEDS_B = 8'b00000000; //Asignacion de colores de los leds
				end
			end
			
			4'b0100 : begin //CASO 05
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b01001001 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b00000000; LEDS_G = 8'b11111111; LEDS_B = 8'b11111111; //Asignacion de colores de los leds
				end
			end
			
			4'b0101 : begin //CASO 06
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b01000001 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b00000000; LEDS_G = 8'b11111111; LEDS_B = 8'b00000000; //Asignacion de colores de los leds
				end
			end
			
			4'b0110 : begin //CASO 07
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b00011111 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b00000000; LEDS_G = 8'b00000000; LEDS_B = 8'b11111111; //Asignacion de colores de los leds
				end
			end
			
			4'b0111 : begin //CASO 08
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b00000001 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b00000000; LEDS_G = 8'b11111111; LEDS_B = 8'b11111111; //Asignacion de colores de los leds
				end
			end
			
			4'b1000 : begin //CASO 09
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b00001001 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b11111111; LEDS_G = 8'b00000000; LEDS_B = 8'b11111111; //Asignacion de colores de los leds
				end
			end
			
			4'b1001 : begin //CASO 10
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b10011111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b00000011 , 8'b10111111};								//Asignacion segundo digito display
					LEDS_R = 8'b11111111; LEDS_G = 8'b11111111; LEDS_B = 8'b00000000; //Asignacion de colores de los leds
				end
			end
				
			default : begin 
				SIETE_SEG = {8'b11111111 , 8'b11111111};
				LEDS_R = 8'b00000000; LEDS_G = 8'b00000000; LEDS_B = 8'b00000000;
			end
			
			endcase
		end
		
endmodule
