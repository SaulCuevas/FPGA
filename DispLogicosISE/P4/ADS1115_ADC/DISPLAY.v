//////////////////////////////////////////////////////////////////////////////////
module DISPLAY(
    input clk,
	 input switch,
	 input [7:0] numero,
    output reg [15:0] DISPLAY
    );

// ________________________________________________________________________________
// Generador de senal de 600Hz => 600/8 = 75Hz para cada digito
// 600^-1 = 1.6666ms

reg [2:0] CONTADOR_DISP = 0;
reg [15:0] CONT_FREC_600 = 0; 	//Necesitamos compararlo con 41_666 ciclos de reloj
									//41_666*20ns = la mitad del periodo de una frecuencia de 600Hz
reg FREC_600;
always @ ( posedge clk ) 
	begin
		if( CONT_FREC_600 == 16'd41_666 ) begin
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
// Valores al display segun switch
always @ ( posedge clk )
	begin
		if( switch )
			begin
				DIGIT_8_DISP = 8'hE3;
				DIGIT_7_DISP = 8'h83;
				DIGIT_6_DISP = 8'h25;
				DIGIT_5_DISP = 8'hFF;
			end
		else
			begin
				DIGIT_8_DISP = 8'h41;
				DIGIT_7_DISP = 8'hF5;
				DIGIT_6_DISP = 8'h11;
				DIGIT_5_DISP = 8'h85;
			end
	end
// ________________________________________________________________________________
// Se convierte el valor binario a decimal separados en digitos

reg [3:0] UNID = 0;
reg [3:0] DECE = 0;
reg [3:0] CENT = 0;
reg [3:0] MILL = 0;
integer i;

always @ ( numero )
begin
	MILL = 4'd0;
	CENT = 4'd0;
	DECE = 4'd0;
	UNID = 4'd0;
	for( i=7; i>=0; i=i-1 )
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
		UNID[0] = numero[i];
	end
end

reg [7:0] DIGIT_1_DISP = 8'h03; //Digito unidades
reg [7:0] DIGIT_2_DISP = 8'h03; //Digito decenas
reg [7:0] DIGIT_3_DISP = 8'h03; //Digito centenas
reg [7:0] DIGIT_4_DISP = 8'h03; //Digito millares
reg [7:0] DIGIT_5_DISP = 8'h03; //Digito unidades
reg [7:0] DIGIT_6_DISP = 8'h03; //Digito decenas
reg [7:0] DIGIT_7_DISP = 8'h03; //Digito centenas
reg [7:0] DIGIT_8_DISP = 8'h03; //Digito millares

always @ ( posedge clk )
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

always @ ( posedge FREC_600 )
begin
	case( CONTADOR_DISP ) 
	3'b000 : DISPLAY = { DIGIT_8_DISP , 8'b01111111 };
	3'b001 : DISPLAY = { DIGIT_7_DISP , 8'b10111111 };
	3'b010 : DISPLAY = { DIGIT_6_DISP , 8'b11011111 };
	3'b011 : DISPLAY = { DIGIT_5_DISP , 8'b11101111 };
	3'b100 : DISPLAY = { DIGIT_4_DISP , 8'b11110111 };
	3'b101 : DISPLAY = { DIGIT_3_DISP , 8'b11111011 };
	3'b110 : DISPLAY = { DIGIT_2_DISP , 8'b11111101 };
	3'b111 : DISPLAY = { DIGIT_1_DISP , 8'b11111110 };
	default : DISPLAY = { 8'b11111111 , 8'b11111111 };
	endcase
end

endmodule
