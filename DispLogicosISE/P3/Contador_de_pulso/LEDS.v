//////////////////////////////////////////////////////////////////////////////////
module LEDS(
    input clk,
    input [14:0] cont_tiempo,
    output reg [7:0] ledsR,
    output reg [7:0] ledsG,
    output reg [7:0] ledsB
    );

always @ ( posedge clk )
	begin
		if( cont_tiempo <= 15'd3_333 ) begin ledsR = 8'hff; ledsG = 8'h00; ledsB = 8'h00; end
		else if( cont_tiempo <= 15'd6_666 ) begin ledsR = 8'h00; ledsG = 8'hff; ledsB = 8'h00; end
		else begin ledsR = 8'h00; ledsG = 8'h00; ledsB = 8'hff; end
	end

endmodule
