`timescale 1ns / 1ps
//
module Pre1_Comparador(a,b,resultado);
    parameter n=3;
	 input [n:0] a, b;
    output reg [5:0] resultado;
always @(a or b)
begin
	resultado <= (a==b)? 6'b010101 : ((a>b)? 6'b001011 : ((a<b)? 6'b100110: 6'b000000));
end
endmodule