//////////////////////////////////////////////////////////////////////////////////
module LEDS(
    input CLK,
    input CAMBIO,
    input [2:0] SEL,
    output reg [7:0] LEDSW_R = 0,
    output reg [7:0] LEDSW_G = 0,
    output reg [7:0] LEDSW_B = 0
    );

always @ ( posedge CLK )
	begin
		if( CAMBIO == 1'b1 ) begin LEDSW_R[7] = 1'b1; LEDSW_G[7] = 1'b0; LEDSW_B[7] = 1'b0; end
		else begin LEDSW_R[7] = 1'b0; LEDSW_G[7] = 1'b1; LEDSW_B[7] = 1'b0; end
	end

always @ ( posedge CLK )
	begin
		if( SEL[2] == 1'b0 ) begin LEDSW_R[2:0] = SEL; LEDSW_G[2:0] = 3'd0; LEDSW_B[2:0] = 3'd0; end
		else begin LEDSW_R[2:0] = 3'd0; LEDSW_G[2:0] = 3'd0; LEDSW_B[2:0] = SEL; end
	end

endmodule
