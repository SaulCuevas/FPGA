//////////////////////////////////////////////////////////////////////////////////
module CONVERSION(
    input clk,
    input [15:0] DATA,
    output [12:0] numero
    );
	 
wire [28:0] dividendo = DATA * 29'd10_000;
parameter divisor = 29'd65_534;
wire [28:0] resultado;

// Modulo para la division
division DIV
(
 .A(dividendo),
 .B(divisor),
 .Res(resultado)
); 

assign numero = resultado[12:0];

endmodule
