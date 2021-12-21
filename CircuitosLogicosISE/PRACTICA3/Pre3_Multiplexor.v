`timescale 1ns / 1ps
//	INSTITUTO POLITECNICO NACIONAL
//					UPIITA
// AUTORES: SAUL CUEVAS MORALES
//				ALEXIS GONZALEZ ZUNIGA
// MUX INPUT 8X1 OUTPUT TRI-ESTADO SALIDA A LED ROJO
module Pre3_Multiplexor(
    input [7:0] entrada,
    input [2:0] sel,
    input enable,
    output reg salida,
    output reg [11:0] disp
    );
always @(entrada, sel, enable)
begin
	if(enable == 1'b1) begin 
		salida = 1'bZ; disp = {8'b11111111 , 4'b1111};
	end
	else begin
		case(sel)
		3'b000 : begin salida = entrada[0]; disp = {8'b01111111 , 4'b0111}; end
		3'b001 : begin salida = entrada[1]; disp = {8'b10111111 , 4'b0111}; end
		3'b010 : begin salida = entrada[2]; disp = {8'b11011111 , 4'b0111}; end
		3'b011 : begin salida = entrada[3]; disp = {8'b11101111 , 4'b0111}; end
		3'b100 : begin salida = entrada[4]; disp = {8'b11110111 , 4'b0111}; end
		3'b101 : begin salida = entrada[5]; disp = {8'b11111011 , 4'b0111}; end
		3'b110 : begin salida = entrada[6]; disp = {8'b11111101 , 4'b0111}; end
		3'b111 : begin salida = entrada[7]; disp = {8'b11111110 , 4'b0111}; end
		default : begin salida = 1'b0; disp = {8'b11111111 , 4'b1111}; end
		endcase
	end
end
endmodule
