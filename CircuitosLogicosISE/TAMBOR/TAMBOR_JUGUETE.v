`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
module TAMBOR_JUGUETE(
    input	CLK,						//Reloj FPGA 50MHz
	 input	n_reset,					//Reset
	 input 	PIEZO,					//Sensor piezoelectrico
	 input 	UP_DOWN,					//Boton para selector ascedente o descendente
    output 	reg [15:0] 	SIETE_SEG,	//Senal para display de 7 segmentos de dos digitos (para la AMIBA2 necesitamos una seal de 8 digitos)
    output 	reg [7:0]	LEDS_R,		//Senal para 8 LEDS RGB
    output 	reg [7:0] 	LEDS_G,
    output 	reg [7:0] 	LEDS_B,
    output  reg 			BUZZER	//Buzzer pasivo
    );

	reg UP_OR_DOWN = 0;
	reg BOTON_PRES = 0;
	reg PIEZO_PRES = 0;
	reg [3:0] CONTADOR;
	reg CONT_R;
//REGISTROS ANTI-REBOTES
	parameter N = 11 ;								// (2^ (21-1) )/ 38 MHz = 32 ms debounce time
	reg  [N-1 : 0]	q_reg;							// registros de tiempo boton
	reg  [N-1 : 0]	q_next;
	reg  [N-1 : 0]	q_reg_p;							// registros de tiempo piezo
	reg  [N-1 : 0]	q_next_p;
	reg  DFF1, DFF2;									// flip-flops input para el boton
	reg  DFF3, DFF4;									// flip-flops input para el piezo
	wire q_add;											//	banderas de control
	wire q_reset;
	wire q_add_p;											//	banderas de control
	wire q_reset_p;
////contenious assignment for counter control
	assign q_reset = (DFF1 ^ DFF2);			// xor input flip flops to look for level change to reset counter
	assign q_add = ~(q_reg[N-1]);				// add to counter when q_reg msb is equal to 0
	assign q_reset_p = (DFF3 ^ DFF4);			// xor input flip flops to look for level change to reset counter
	assign q_add_p = ~(q_reg[N-1]);				// add to counter when q_reg msb is equal to 0
//// combo counter to manage q_next	boton
	always @ ( q_reset, q_add, q_reg ) 
		begin
			case( {q_reset , q_add})
				2'b00 :
						q_next <= q_reg;
				2'b01 :
						q_next <= q_reg + 1;
				default :
						q_next <= { N {1'b0} };
			endcase 	
		end
//// combo counter to manage q_next	piezo
	always @ ( q_reset_p, q_add_p, q_reg_p ) 
		begin
			case( {q_reset_p , q_add_p})
				2'b00 :
						q_next_p <= q_reg_p;
				2'b01 :
						q_next_p <= q_reg_p + 1;
				default :
						q_next_p <= { N {1'b0} };
			endcase 	
		end
	//// Flip flop inputs and q_reg update
	always @ ( posedge CLK )
		begin
			if(n_reset ==  1'b0)
				begin
					DFF1 <= 1'b0;
					DFF2 <= 1'b0;
					q_reg <= { N {1'b0} };
					DFF3 <= 1'b0;
					DFF4 <= 1'b0;
					q_reg_p <= { N {1'b0} };
				end
			else
				begin
					DFF1 <= UP_DOWN;
					DFF2 <= DFF1;
					q_reg <= q_next;
					DFF3 <= PIEZO;
					DFF4 <= DFF3;
					q_reg_p <= q_next_p;
				end
		end
	//// counter control boton
	always @ ( posedge CLK )
		begin
			if(q_reg[N-1] == 1'b1)
					BOTON_PRES <= DFF2;
			else
					BOTON_PRES <= BOTON_PRES;
		end
	//// counter control piezo
	always @ ( posedge CLK )
		begin
			if(q_reg_p[N-1] == 1'b1)
					PIEZO_PRES <= DFF4;
			else
					PIEZO_PRES <= PIEZO_PRES;
		end
	wire ENABLE;
	assign ENABLE = BOTON_PRES;
	always @(posedge CLK)
		if (ENABLE)
			UP_OR_DOWN <= ~(UP_OR_DOWN);
	//Cada que se presiona el piezo se incrementa o decrementa el contador
	always @ ( posedge PIEZO_PRES, posedge CONT_R) 
		begin
			if( CONT_R == 1 ) CONTADOR <= 0;
			else if( UP_OR_DOWN == 0 ) CONTADOR <= CONTADOR + 1'b1;
			else CONTADOR <= CONTADOR - 1'b1;
		end
		
	always @ ( CONTADOR )
		begin
			if( CONTADOR == 4'b1010 ) CONT_R = 1;
			else CONT_R = 0;
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
	
	//// Manipulacion del buzzer, cada que haya un cambio en el contador
	//// o se presione el piezo se manda un tono de la nota LA
	reg DELAY_1SEG = 0;
	reg [24:0] CONT_DELAY = 0;
	always @ ( LA, PIEZO_PRES )
		begin
			if( PIEZO_PRES == 1 ) DELAY_1SEG = 1;
			else DELAY_1SEG = 0;
		end
	
	always @ ( posedge DELAY_1SEG )
		begin
			if( CONT_DELAY == 25'd25_000_000 ) begin
				CONT_DELAY = 25'd0;
				BUZZER = 0;
			end
			else begin 
				CONT_DELAY = CONT_DELAY + 1'b1;
				BUZZER = LA;
			end
		end
	
	//// Manipulacion de los leds, display
	always @ ( CLK, CONTADOR, CONTADOR_DISP )
		begin
			case( CONTADOR )
			4'b0000 : begin //CASO 01
				if ( CONTADOR_DISP == 0) SIETE_SEG = {8'b11111111 , 8'b01111111};	//Asignacion primer digito display
				else begin
					SIETE_SEG = {8'b1001111 , 8'b10111111};								//Asignacion segundo digito display
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
					SIETE_SEG = {8'b00011101 , 8'b10111111};								//Asignacion segundo digito display
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
					SIETE_SEG = {8'b11111111 , 8'b10111111};								//Asignacion segundo digito display
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
