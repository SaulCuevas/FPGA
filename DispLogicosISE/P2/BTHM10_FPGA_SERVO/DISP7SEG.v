//////////////////////////////////////////////////////////////////////////////////
module DISP7SEG(
		input CLK,
		input modo,
		input [2:0] posi,
		output reg [15:0] DISPLAY
    );

	parameter letraA = 8'b00010001; //abcdefgp
	parameter letraB = 8'b11000001;
	parameter N1 = 8'b10011111;
	parameter N2 = 8'b00100101;
	parameter N3 = 8'b00001101;
	parameter N4 = 8'b10011001;
	parameter N5 = 8'b01001001;
	parameter ND = 8'b11111101;
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
	
	reg [7:0] DIGIT_1_DISP = 8'h00; //Digito unidades
	reg [7:0] DIGIT_2_DISP = ND; //Digito decenas
	reg [7:0] DIGIT_3_DISP = ND; //Digito centenas
	reg [7:0] DIGIT_4_DISP = 8'h00; //Digito millares
	
	always @ ( posedge CLK )
	begin
		if ( modo == 0 ) DIGIT_4_DISP = letraA;
		else DIGIT_4_DISP = letraB;
	end
	
	always @ ( posedge CLK )
	begin
		case( posi )
		3'd0: DIGIT_1_DISP = N1;
		3'd1: DIGIT_1_DISP = N2;
		3'd2: DIGIT_1_DISP = N3;
		3'd3: DIGIT_1_DISP = N4;
		3'd4: DIGIT_1_DISP = N5;
		default: DIGIT_1_DISP = ND;
		endcase
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

endmodule
