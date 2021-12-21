`timescale 1ns / 1ps
// INSTITUTO POLITECNICO NACIONAL
// 				UPIITA
// AUTORES: SAUL CUEVAS MORALES
// 			ALEXIS GONZALEZ ZUNIGA
// MODULO OPERACION MULTIPLICACION / DIVISION POR MEDIO DE SHIFT REGISTER
//////////////////////////////////////////////////////////////////////////////////
module MULTI_DIV_SHIFT(
    input						CLK,			//Reloj de 50MHz
	 input 			[7:0]		ENCODER,		//Entrada para realizar la operacion
    input 			[3:0]		BOTON,		//Selector 1 = 2x, 2 = 4x, 3 = 2/, 4 = 4/
    output 	reg 	[7:0]		LEDS_R,		//LEDs RGB que muestran la salida del encoder
    output 	reg 	[7:0]		LEDS_G,
    output 	reg 	[7:0]		LEDS_B,
    output 	reg 	[15:0]	DISPLAY=8'h0F	//Display de 7 segmentos de 8 digitos
    );
	// ________________________________________________________________________________
	// Asignacion de leds, registro universal y anti-rebotes para los botones
	
	reg [1:0] SHIFT = 0;		//registro que determina que tanto se desplazara el registro universal
	reg [7:0] REG_UNIV = 0;	//registro universal
	reg [3:0] sampled_BOTON;//registro que samplea a los botones externos
	reg [3:0] BOTON_PRES;	//registro con la salida anti-rebotes de los botones
	reg [21:0] sclk = 0;		//registro para el contador de 25ms
	always @ ( posedge CLK )
		begin
			REG_UNIV <= ENCODER;
			LEDS_R 	<= ENCODER;
			LEDS_G 	<= ENCODER;
			LEDS_B 	<= ENCODER;
			sampled_BOTON <= BOTON;
			// clock es dividido
			// se muestrea cada 25ms para verificar que la entrada es la misma que la
			// muestra, si la senal es estable, se saca la senal
			if(sclk == 22'd2_500_000) begin
				if(sampled_BOTON == BOTON) BOTON_PRES <= BOTON;
				sclk <= 22'd0;
			end
			else sclk <= sclk + 1'b1;
		end
	
	// ________________________________________________________________________________
	// Generador de senal de 300Hz => 300/4 = 75Hz para cada digito (solo se usan 3 maximo)
	// 300^-1 = 3.3333ms
	
	reg [1:0] CONTADOR_DISP;
	reg [16:0] CONT_FREC_300; 	//Necesitamos compararlo con 83_333 ciclos de reloj
										//83_333*20ns = la mitad del periodo de una frecuencia de 300Hz
	reg FREC_300;
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_300 == 17'd83_333 ) begin
				CONT_FREC_300 = 17'd0;
				FREC_300 = ~(FREC_300);
			end
			else CONT_FREC_300 = CONT_FREC_300 + 1'b1;
		end
		
	always @ ( posedge FREC_300 )
		begin
			if( CONTADOR_DISP ==  2'b11) CONTADOR_DISP = 0;
			else CONTADOR_DISP = CONTADOR_DISP + 1'b1;
		end
		
	// ________________________________________________________________________________
	// Asignacion del valor de salida segun la operacion deseada
	
	reg [9:0] REG_UNIV_SHIFTED; //Registro universal de 10 bits para almacenar los valores al hacer shift
	always @ ( BOTON_PRES, CONTADOR_DISP, REG_UNIV )
	begin
		case( BOTON_PRES )
		4'b0001 : REG_UNIV_SHIFTED = { 1'b0, REG_UNIV, 1'b0 }; // "Multiplica x2" shiftea 1 a la izquierda
		4'b0010 : REG_UNIV_SHIFTED = { REG_UNIV, 1'b0, 1'b0 }; // "Multiplica x4" shiftea 2 a la izquierda
		4'b0100 : REG_UNIV_SHIFTED = { 3'b000, REG_UNIV[7:1] }; // "Divide /2" shiftea 1 a la derecha
		4'b1000 : REG_UNIV_SHIFTED = { 4'b0000, REG_UNIV[7:2] }; // "Divide /2" shiftea 1 a la derecha
		default : REG_UNIV_SHIFTED = { 10'b1111111111 }; // Caso especial cuando se presiona mas de un boton o ninguno
		endcase
	end
	
	// ________________________________________________________________________________
	// Se convierte el valor binario a decimal separados en digitos
	
	reg [7:0] DIGIT_1_DISP = 8'h03; //Digito unidades
	reg [7:0] DIGIT_2_DISP = 8'h03; //Digito decenas
	reg [7:0] DIGIT_3_DISP = 8'h03; //Digito centenas
	reg [7:0] DIGIT_4_DISP = 8'h03; //Digito millares
	always @ ( posedge CLK )
	begin
		if( REG_UNIV_SHIFTED ==  10'b1111111111 ) begin
			case( REG_UNIV )
			8'd0		:	begin DIGIT_1_DISP = 8'h03; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd1		:	begin DIGIT_1_DISP = 8'h9F; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd2		:	begin DIGIT_1_DISP = 8'h25; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd4		:	begin DIGIT_1_DISP = 8'h99; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd8		:	begin DIGIT_1_DISP = 8'h01; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd16		:	begin DIGIT_1_DISP = 8'h41; DIGIT_2_DISP = 8'h9F; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd32		:	begin DIGIT_1_DISP = 8'h25; DIGIT_2_DISP = 8'h0D; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd64		:	begin DIGIT_1_DISP = 8'h99; DIGIT_2_DISP = 8'h41; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			8'd128	:	begin DIGIT_1_DISP = 8'h01; DIGIT_2_DISP = 8'h25; DIGIT_3_DISP = 8'h9F; DIGIT_4_DISP = 8'h03; end
			default 	: begin DIGIT_1_DISP = 8'hFF; DIGIT_2_DISP = 8'hFF; DIGIT_3_DISP = 8'hFF; DIGIT_4_DISP = 8'hFF; end
			endcase
		end
		else begin
			case( REG_UNIV_SHIFTED )
			10'd0		:	begin DIGIT_1_DISP = 8'h03; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd1		:	begin DIGIT_1_DISP = 8'h9F; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd2		:	begin DIGIT_1_DISP = 8'h25; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd4		:	begin DIGIT_1_DISP = 8'h99; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd8		:	begin DIGIT_1_DISP = 8'h01; DIGIT_2_DISP = 8'h03; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd16	:	begin DIGIT_1_DISP = 8'h41; DIGIT_2_DISP = 8'h9F; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd32	:	begin DIGIT_1_DISP = 8'h25; DIGIT_2_DISP = 8'h0D; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd64	:	begin DIGIT_1_DISP = 8'h99; DIGIT_2_DISP = 8'h41; DIGIT_3_DISP = 8'h03; DIGIT_4_DISP = 8'h03; end
			10'd128	:	begin DIGIT_1_DISP = 8'h01; DIGIT_2_DISP = 8'h25; DIGIT_3_DISP = 8'h9F; DIGIT_4_DISP = 8'h03; end
			10'd256	:	begin DIGIT_1_DISP = 8'h41; DIGIT_2_DISP = 8'h49; DIGIT_3_DISP = 8'h25; DIGIT_4_DISP = 8'h03; end
			10'd512	:	begin DIGIT_1_DISP = 8'h25; DIGIT_2_DISP = 8'h9F; DIGIT_3_DISP = 8'h49; DIGIT_4_DISP = 8'h03; end
			default 	: begin DIGIT_1_DISP = 8'hFF; DIGIT_2_DISP = 8'hFF; DIGIT_3_DISP = 8'hFF; DIGIT_4_DISP = 8'hFF; end
			endcase
		end
	end
	always @ ( posedge FREC_300 )
	begin
		case( CONTADOR_DISP ) 
		2'b00 : DISPLAY = { DIGIT_4_DISP , 8'b01111111 };
		2'b01 : DISPLAY = { DIGIT_3_DISP , 8'b10111111 };
		2'b10 : DISPLAY = { DIGIT_2_DISP , 8'b11011111 };
		2'b11 : DISPLAY = { DIGIT_1_DISP , 8'b11101111 };
		default : DISPLAY = { 8'b11111111 , 8'b11111111 };
		endcase
	end
	
	// ________________________________________________________________________________
endmodule
