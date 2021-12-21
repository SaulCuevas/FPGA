//////////////////////////////////////////////////////////////////////////////////
module GENERADOR2(
    input clk,
    output reg [11:0] ECG = 0
    );

reg [13:0] cont_200us = 0;

always @ ( posedge clk )
	begin
		if( cont_200us == 14'd10_000 )
			begin
				ECG <= ECG + 1'b1;
			end
		else cont_200us <= cont_200us + 1'b1;
	end

endmodule
