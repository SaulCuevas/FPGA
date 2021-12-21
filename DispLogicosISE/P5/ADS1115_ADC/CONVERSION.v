//////////////////////////////////////////////////////////////////////////////////
module CONVERSION(
    input clk,
	 input switch,
    input [15:0] DATA,
    output reg [7:0] numero
    );

reg [22:0] cont_100ms = 0;
wire [15:0] resultado;

// Se genera delay de sampleo para la conversion del dato
always @ ( posedge clk )
	begin
		if( cont_100ms == 23'd4_999_999 )
			begin
				cont_100ms <= 0;
				if( DATA[15] == 1'b1 ) numero <= 0;
				else
					begin
						if( switch ) numero <= DATA[14:7];
						else numero <= resultado[7:0];
					end
			end
		else cont_100ms <= cont_100ms + 1'b1;
	end

parameter divisor = 16'd144;
wire [15:0] dividendo = ( DATA > 16'd5_000 ) ? DATA - 16'd5_000 : 16'd0;

// Modulo para la division
division DIV
(
 .A(dividendo),
 .B(divisor),
 .Res(resultado)
); 

endmodule
