//////////////////////////////////////////////////////////////////////////////////
module BINaBCD(
    input clk,
    input [12:0] numero,
    output reg [8:0] numero2,
    output reg [7:0] DECI,
    output reg [7:0] UNID,
    output reg [7:0] DECE,
    output reg [7:0] CENT
    );

// ________________________________________________________________________________
// Se convierte el valor binario a decimal separados en digitos
reg [3:0] uDECI;
reg [3:0] uUNID;
reg [3:0] uDECE;
reg [3:0] uCENT;
integer i;

always @ ( numero )
begin
	uCENT = 4'd0;
	uDECE = 4'd0;
	uUNID = 4'd0;
	uDECI = 4'd0;
	for( i=12; i>=0; i=i-1 )
	begin
		//anadir 3 a las columnas
		if( uCENT >= 4'd5 ) uCENT = uCENT + 4'd3;
		if( uDECE >= 4'd5 ) uDECE = uDECE + 4'd3;
		if( uUNID >= 4'd5 ) uUNID = uUNID + 4'd3;
		if( uDECI >= 4'd5 ) uDECI = uDECI + 4'd3;
		//shift a la izquierda
		uCENT = uCENT << 1;
		uCENT[0] = uDECE[3];
		uDECE = uDECE << 1;
		uDECE[0] = uUNID[3];
		uUNID = uUNID << 1;
		uUNID[0] = uDECI[3];
		uDECI = uDECI << 1;
		uDECI[0] = numero[i];
	end
end

reg [23:0] cont_actu = 0;
always @ ( posedge clk )
	begin
		if( cont_actu == 24'd12_499_999 )
			begin
				DECI = uDECI + 8'd48;
				UNID = uUNID + 8'd48;
				DECE = uDECE + 8'd48;
				CENT = uCENT + 8'd48;
				numero2 = (uCENT * 100) + (uDECE * 10) + uUNID;
				cont_actu <= 0;
			end
		else cont_actu <= cont_actu + 1'b1;
	end

endmodule
