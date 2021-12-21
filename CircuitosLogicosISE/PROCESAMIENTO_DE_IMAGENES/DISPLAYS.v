////////////////////////////////////////////////////////
// 			INSTITUTO POLITECNICO NACIONAL				//
// 							UPIITA								//
// 			AUTORES: SAUL CUEVAS MORALES					//
// 						ALEXIS GONZALEZ ZUNIGA				//
//			ASIGNACION A DISPLAYS DE 7 SEGMENTOS			//
////////////////////////////////////////////////////////

module DISPLAYS(
    input CLK,
	 input [2:0] BOTON_SEL,
    output [15:0] DISPLAY
    );
	
	// ________________________________________________________________________________
	// Generador de senal de 600Hz => 600/8 = 75Hz para cada digito
	// 600^-1 = 1.6666ms
	
	reg FREC_600;
	reg [2:0] CONTADOR_DISP;
	reg [16:0] CONT_FREC_600; 	//Necesitamos compararlo con 83_333 ciclos de reloj
										//41_667*20ns = la mitad del periodo de una frecuencia de 300Hz
	reg FREC_300;
	always @ ( posedge CLK ) 
		begin
			if( CONT_FREC_600 == 17'd41_667 ) begin
				CONT_FREC_600 = 17'd0;
				FREC_600 = ~(FREC_600);
			end
			else CONT_FREC_600 = CONT_FREC_600 + 1'b1;
		end
		
	always @ ( posedge FREC_600 )
		begin
			if( CONTADOR_DISP ==  3'b111) CONTADOR_DISP = 0;
			else CONTADOR_DISP = CONTADOR_DISP + 1'b1;
		end
	
	// ________________________________________________________________________________
	// Mostrando la operacion en el display
		
	reg [7:0] DIGIT_1_DISP = 8'h03; //Digito 1
	reg [7:0] DIGIT_2_DISP = 8'h03; //Digito 2
	reg [7:0] DIGIT_3_DISP = 8'h03; //Digito 3
	reg [7:0] DIGIT_4_DISP = 8'h03; //Digito 4
	reg [7:0] DIGIT_5_DISP = 8'h03; //Digito 5
	reg [7:0] DIGIT_6_DISP = 8'h03; //Digito 6
	reg [7:0] DIGIT_7_DISP = 8'h03; //Digito 7
	reg [7:0] DIGIT_8_DISP = 8'h03; //Digito 8
	
	always @ ( posedge CLK )
	begin 
		case( BOTON_SEL )
			3'd001	: begin
				DIGIT_1_DISP = 8'hC1; DIGIT_2_DISP = 8'hF5; DIGIT_3_DISP = 8'hDF; DIGIT_4_DISP = 8'h09;
				DIGIT_5_DISP = 8'hFF; DIGIT_6_DISP = 8'hBD; DIGIT_7_DISP = 8'hF5; DIGIT_8_DISP = 8'hFF;
			end
			3'd010	: begin
				DIGIT_1_DISP = 8'hC1; DIGIT_2_DISP = 8'hF5; DIGIT_3_DISP = 8'hDF; DIGIT_4_DISP = 8'h09;
				DIGIT_5_DISP = 8'hFF; DIGIT_6_DISP = 8'hFD; DIGIT_7_DISP = 8'hFD; DIGIT_8_DISP = 8'hFF;
			end
			3'd011	: begin
				DIGIT_1_DISP = 8'hE1; DIGIT_2_DISP = 8'hF5; DIGIT_3_DISP = 8'h21; DIGIT_4_DISP = 8'h59;
				DIGIT_5_DISP = 8'hFF; DIGIT_6_DISP = 8'hBD; DIGIT_7_DISP = 8'hF5; DIGIT_8_DISP = 8'hFF;
			end
			3'd100	: begin
				DIGIT_1_DISP = 8'hE1; DIGIT_2_DISP = 8'hF5; DIGIT_3_DISP = 8'h21; DIGIT_4_DISP = 8'h59;
				DIGIT_5_DISP = 8'hFF; DIGIT_6_DISP = 8'hFD; DIGIT_7_DISP = 8'hFD; DIGIT_8_DISP = 8'hFF;
			end
			3'd101	: begin
				DIGIT_1_DISP = 8'hDF; DIGIT_2_DISP = 8'hD5; DIGIT_3_DISP = 8'hC7; DIGIT_4_DISP = 8'hED;
				DIGIT_5_DISP = 8'hFF; DIGIT_6_DISP = 8'hFF; DIGIT_7_DISP = 8'hFF; DIGIT_8_DISP = 8'hFF;
			end
			default	: begin
				DIGIT_1_DISP = 8'hFF; DIGIT_2_DISP = 8'hFF; DIGIT_3_DISP = 8'hFF; DIGIT_4_DISP = 8'hFF;
				DIGIT_5_DISP = 8'hFF; DIGIT_6_DISP = 8'hFF; DIGIT_7_DISP = 8'hFF; DIGIT_8_DISP = 8'hFF;
			end
			endcase
	end
	
	always @ ( posedge FREC_600 )
	begin
		case( CONTADOR_DISP ) 
		3'b000 : DISPLAY = { DIGIT_4_DISP , 8'b01111111 };
		3'b001 : DISPLAY = { DIGIT_3_DISP , 8'b10111111 };
		3'b010 : DISPLAY = { DIGIT_2_DISP , 8'b11011111 };
		3'b011 : DISPLAY = { DIGIT_1_DISP , 8'b11101111 };
		3'b100 : DISPLAY = { DIGIT_8_DISP , 8'b11110111 };
		3'b101 : DISPLAY = { DIGIT_7_DISP , 8'b11111011 };
		3'b110 : DISPLAY = { DIGIT_6_DISP , 8'b11111101 };
		3'b111 : DISPLAY = { DIGIT_5_DISP , 8'b11111110 };
		default : DISPLAY = { 8'b11111111 , 8'b11111111 };
		endcase
	end
	
	// ________________________________________________________________________________

endmodule
