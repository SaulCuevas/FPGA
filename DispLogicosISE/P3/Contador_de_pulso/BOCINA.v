//////////////////////////////////////////////////////////////////////////////////
module BOCINA(
    input clk,
	 input reset,
    input [14:0] cont_tiempo,
    output reg playNext
    );

reg [21:0] delay = 0;
reg fin = 0;

always @ ( posedge clk )
	begin
		if( playNext )
			begin
				if( delay == 22'd2_500_000 ) begin playNext <= 1'b0; end
				else delay <= delay + 1'b1;
			end
		else if( cont_tiempo == 15'd3_333 ) begin playNext <= 1'b1; delay <= 0; end
		else if( cont_tiempo == 15'd6_666 ) begin playNext <= 1'b1; delay <= 0; end
		else if( cont_tiempo == 16'd9_999 && fin == 1'b0 ) begin playNext <= 1'b1; delay <= 0; fin <= 1'b1; end
		else playNext <= 0;
		if( reset ) begin playNext <= 1'b0; delay <= 0; fin <= 1'b0; end
	end
	
endmodule
