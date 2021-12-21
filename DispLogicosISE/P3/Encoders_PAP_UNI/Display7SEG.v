//////////////////////////////////////////////////////////////////////////////////
module Display7SEG(
    input CLK,
    input [3:0] numero,
    output reg [15:0] DISPLAY
    );

// ________________________________________________________________________________
// Generador de senal de 300Hz => 300/4 = 75Hz para cada digito
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
// Se convierte el valor binario a decimal separados en digitos

reg [3:0] UNID;
reg [3:0] DECE;
//reg [3:0] CENT;
//reg [3:0] MILL;
integer i;

always @ ( numero )
begin
	//MILL = 4'd0;
	//CENT = 4'd0;
	DECE = 4'd0;
	UNID = 4'd0;
	for( i=3; i>=0; i=i-1 )
	begin
		//anadir 3 a las columnas
		//if( MILL >= 4'd5 ) MILL = MILL + 4'd3;
		//if( CENT >= 4'd5 ) CENT = CENT + 4'd3;
		if( DECE >= 4'd5 ) DECE = DECE + 4'd3;
		if( UNID >= 4'd5 ) UNID = UNID + 4'd3;
		//shift a la izquierda
		//MILL = MILL << 1;
		//MILL[0] = CENT[3];
		//CENT = CENT << 1;
		//CENT[0] = DECE[3];
		DECE = DECE << 1;
		DECE[0] = UNID[3];
		UNID = UNID << 1;
		UNID[0] = numero[i];
	end
end

reg [7:0] DIGIT_1_DISP = 8'h03; //Digito unidades
reg [7:0] DIGIT_2_DISP = 8'h03; //Digito decenas
//reg [7:0] DIGIT_3_DISP = 8'h03; //Digito centenas
//reg [7:0] DIGIT_4_DISP = 8'h03; //Digito millares

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
	/*
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
	endcase*/
end

always @ ( posedge FREC_300 )
begin
	case( CONTADOR_DISP ) 
	//2'b00 : DISPLAY = { DIGIT_4_DISP , 8'b01111111 };
	2'b00 : DISPLAY = { 8'b11111111 , 8'b01111111 };
	//2'b01 : DISPLAY = { DIGIT_3_DISP , 8'b10111111 };
	2'b01 : DISPLAY = { 8'b11111111 , 8'b10111111 };
	2'b10 : DISPLAY = { DIGIT_2_DISP , 8'b11011111 };
	2'b11 : DISPLAY = { DIGIT_1_DISP , 8'b11101111 };
	default : DISPLAY = { 8'b11111111 , 8'b11111111 };
	endcase
end

endmodule
