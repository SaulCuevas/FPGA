//////////////////////////////////////////////////////////////////////////////////
module PWM(
    input clk,
    input [18:0] Contador,
    output reg PWM
    );

reg [18:0] cont_PWM;

always @ ( posedge clk )
	begin
		if( cont_PWM == Contador ) PWM <= 1'b0;
		if( cont_PWM == 19'd500_000 ) begin
				PWM <= 1'b1;
				cont_PWM <= 0;
		end
		else begin
			cont_PWM <= cont_PWM + 1'b1;
		end
	end
endmodule
