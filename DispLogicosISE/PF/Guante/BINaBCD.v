//////////////////////////////////////////////////////////////////////////////////
module BINaBCD(
    input clk,
    input [7:0] numero,
    output reg [7:0] UNID,
    output reg [7:0] DECE,
    output reg [7:0] CENT,
    output reg [7:0] MILL
    );

// ________________________________________________________________________________
// Se convierte el valor binario a decimal separados en digitos
reg [3:0] uUNID;
reg [3:0] uDECE;
reg [3:0] uCENT;
reg [3:0] uMILL;
integer i;

always @ ( numero )
begin
	uMILL = 4'd0;
	uCENT = 4'd0;
	uDECE = 4'd0;
	uUNID = 4'd0;
	for( i=7; i>=0; i=i-1 )
	begin
		//anadir 3 a las columnas
		if( uMILL >= 4'd5 ) uMILL = uMILL + 4'd3;
		if( uCENT >= 4'd5 ) uCENT = uCENT + 4'd3;
		if( uDECE >= 4'd5 ) uDECE = uDECE + 4'd3;
		if( uUNID >= 4'd5 ) uUNID = uUNID + 4'd3;
		//shift a la izquierda
		uMILL = uMILL << 1;
		uMILL[0] = uCENT[3];
		uCENT = uCENT << 1;
		uCENT[0] = uDECE[3];
		uDECE = uDECE << 1;
		uDECE[0] = uUNID[3];
		uUNID = uUNID << 1;
		uUNID[0] = numero[i];
	end
end

reg [23:0] cont_actu = 0;
always @ ( posedge clk )
	begin
		UNID = uUNID + 8'd48;
		DECE = uDECE + 8'd48;
		CENT = uCENT + 8'd48;
		MILL = uMILL + 8'd48;
	end

endmodule

