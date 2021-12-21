`timescale 1ns / 1ps
// INSTITUTO POLITECNICO NACIONAL
// 				UPIITA
// AUTORES: SAUL CUEVAS MORALES
// 			ALEXIS GONZALEZ ZUNIGA
// MODULO OPERACION MULTIPLICACION / DIVISION POR MEDIO DE SHIFT REGISTER
//////////////////////////////////////////////////////////////////////////////////
module MULTI_DIV_SHIFT(
    input						CLK,			//Reloj de 50MHz
	 input			[1:0] 	ENCODER,		//Salidas del encoder
    input 			[3:0]		BOTON,		//Selector 1 = 2x, 2 = 4x, 3 = 2/, 4 = 4/
    output 	reg 	[7:0]		LEDS_R,		//LEDs RGB que muestran la salida del encoder
    output 	reg 	[7:0]		LEDS_G,
    output 	reg 	[7:0]		LEDS_B,
    output 	reg 	[15:0]	DISPLAY		//Display de 7 segmentos de 8 digitos
    );
	 
	// ________________________________________________________________________________
	// Deteccion del sentido del encoder
	reg [3:0] datos = 0; // Este se usa para saber la posicin anterior y la actual
	reg [16:0] timer = 0; // timer de 80us para evitar el rebote del encoder
	
	always@(posedge CLK)
		begin
			if(timer == 17'd80_000) begin // Cuando se cumplen los 160us, se va a analizar si se mueve en sentido
													//de las manecillas del reloj o en contra, el encoder tiene rebote, por
													//lo que, si no estuviera este timer, los leds de direccin cambiaran
													//entre uno y otro
				case(ENCODER)
					2'b00: datos = 4'b1000;
					2'b01: datos[2] = 1'b1;
					2'b11: datos = 4'b0010;
					2'b10: datos[0] = 1'b1;
					default: datos = 4'b0000;
				endcase
				if(datos == 4'b1001 || datos == 4'b0110) begin // Indica el sentido horario.
					REG_UNIV = REG_UNIV + 1'b1; //Cada que gire a la derecha se le suma 1.
					datos = 4'd0;
				end
				if(datos == 4'b1100 || datos == 4'b0011) begin // Indica el sentido anti-horario.
					REG_UNIV = REG_UNIV - 1'b1; //Cada que gire a la izquierda se le resta 1.
					datos = 4'd0;
				end
				timer = 0; //se reinicia el timer para los 160us y evitar el rebote
			end
			else timer = timer + 1'b1;
		end
		
	// ________________________________________________________________________________
	// Asignacion de leds, registro universal y anti-rebotes para los botones
	reg [1:0] SHIFT = 0;		//registro que determina que tanto se desplazara el registro universal
	reg [7:0] REG_UNIV;		//registro universal
	reg [3:0] sampled_BOTON;//registro que samplea a los botones externos
	reg [3:0] BOTON_PRES;	//registro con la salida anti-rebotes de los botones
	reg [21:0] sclk = 0;		//registro para el contador de 25ms
	
	always @ ( posedge CLK )
		begin
			LEDS_R 	<= REG_UNIV;
			LEDS_G 	<= REG_UNIV;
			LEDS_B 	<= REG_UNIV;
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
		4'b0010 : REG_UNIV_SHIFTED = { REG_UNIV, 2'b00 }; // "Multiplica x4" shiftea 2 a la izquierda
		4'b0100 : REG_UNIV_SHIFTED = { 3'b000, REG_UNIV[7:1] }; // "Divide /2" shiftea 1 a la derecha
		4'b1000 : REG_UNIV_SHIFTED = { 4'b0000, REG_UNIV[7:2] }; // "Divide /2" shiftea 1 a la derecha
		default : REG_UNIV_SHIFTED = { 2'd0, REG_UNIV }; // Caso especial cuando se presiona mas de un boton o ninguno
		endcase
	end
	
	// ________________________________________________________________________________
	// Se convierte el valor binario a decimal separados en digitos

	reg [3:0] UNID;
	reg [3:0] DECE;
	reg [3:0] CENT;
	reg [3:0] MILL;
	integer i;
	
	always @ ( REG_UNIV_SHIFTED )
	begin
		MILL = 4'd0;
		CENT = 4'd0;
		DECE = 4'd0;
		UNID = 4'd0;
		for( i=9; i>=0; i=i-1 )
		begin
			//anadir 3 a las columnas
			if( MILL >= 4'd5 ) MILL = MILL + 4'd3;
			if( CENT >= 4'd5 ) CENT = CENT + 4'd3;
			if( DECE >= 4'd5 ) DECE = DECE + 4'd3;
			if( UNID >= 4'd5 ) UNID = UNID + 4'd3;
			//shift a la izquierda
			MILL = MILL << 1;
			MILL[0] = CENT[3];
			CENT = CENT << 1;
			CENT[0] = DECE[3];
			DECE = DECE << 1;
			DECE[0] = UNID[3];
			UNID = UNID << 1;
			UNID[0] = REG_UNIV_SHIFTED[i];
		end
	end
	
	reg [7:0] DIGIT_1_DISP = 8'h03; //Digito unidades
	reg [7:0] DIGIT_2_DISP = 8'h03; //Digito decenas
	reg [7:0] DIGIT_3_DISP = 8'h03; //Digito centenas
	reg [7:0] DIGIT_4_DISP = 8'h03; //Digito millares
	
	always @ ( posedge CLK )
	begin 
		case( UNID )
		4'd0 : DIGIT_1_DISP = 8'h03;
		4'd1 : DIGIT_1_DISP = 8'h9F;
		4'd2 : DIGIT_1_DISP = 8'h25;
		4'd3 : DIGIT_1_DISP = 8'h0D;
		4'd4 : DIGIT_1_DISP = 8'h99;
		4'd5 : DIGIT_1_DISP = 8'h49;
		4'd6 : DIGIT_1_DISP = 8'h41;
		4'd7 : DIGIT_1_DISP = 8'h1F;
		4'd8 : DIGIT_1_DISP = 8'h01;
		4'd9 : DIGIT_1_DISP = 8'h09;
		default : DIGIT_1_DISP = 8'h00;
		endcase
		
		case( DECE )
		4'd0 : DIGIT_2_DISP = 8'h03;
		4'd1 : DIGIT_2_DISP = 8'h9F;
		4'd2 : DIGIT_2_DISP = 8'h25;
		4'd3 : DIGIT_2_DISP = 8'h0D;
		4'd4 : DIGIT_2_DISP = 8'h99;
		4'd5 : DIGIT_2_DISP = 8'h49;
		4'd6 : DIGIT_2_DISP = 8'h41;
		4'd7 : DIGIT_2_DISP = 8'h1F;
		4'd8 : DIGIT_2_DISP = 8'h01;
		4'd9 : DIGIT_2_DISP = 8'h09;
		default : DIGIT_2_DISP = 8'h00;
		endcase
		
		case( CENT )
		4'd0 : DIGIT_3_DISP = 8'h03;
		4'd1 : DIGIT_3_DISP = 8'h9F;
		4'd2 : DIGIT_3_DISP = 8'h25;
		4'd3 : DIGIT_3_DISP = 8'h0D;
		4'd4 : DIGIT_3_DISP = 8'h99;
		4'd5 : DIGIT_3_DISP = 8'h49;
		4'd6 : DIGIT_3_DISP = 8'h41;
		4'd7 : DIGIT_3_DISP = 8'h1F;
		4'd8 : DIGIT_3_DISP = 8'h01;
		4'd9 : DIGIT_3_DISP = 8'h09;
		default : DIGIT_3_DISP = 8'h00;
		endcase
		
		case( MILL )
		4'd0 : DIGIT_4_DISP = 8'h03;
		4'd1 : DIGIT_4_DISP = 8'h9F;
		4'd2 : DIGIT_4_DISP = 8'h25;
		4'd3 : DIGIT_4_DISP = 8'h0D;
		4'd4 : DIGIT_4_DISP = 8'h99;
		4'd5 : DIGIT_4_DISP = 8'h49;
		4'd6 : DIGIT_4_DISP = 8'h41;
		4'd7 : DIGIT_4_DISP = 8'h1F;
		4'd8 : DIGIT_4_DISP = 8'h01;
		4'd9 : DIGIT_4_DISP = 8'h09;
		default : DIGIT_4_DISP = 8'h00;
		endcase
	end
	
	always @ ( posedge FREC_300 )
	begin
		case( CONTADOR_DISP ) 
		2'b00 : DISPLAY = { ~DIGIT_4_DISP , ~8'b01111111 };
		2'b01 : DISPLAY = { ~DIGIT_3_DISP , ~8'b10111111 };
		2'b10 : DISPLAY = { ~DIGIT_2_DISP , ~8'b11011111 };
		2'b11 : DISPLAY = { ~DIGIT_1_DISP , ~8'b11101111 };
		default : DISPLAY = { ~8'b11111111 , ~8'b11111111 };
		endcase
	end
	
	// ________________________________________________________________________________
endmodule
