//////////////////////////////////////////////////////////////////////////////////
module LEDS(
    input clk,
	 input [8:0] numero2,
    output [7:0] LEDSR,
    output [7:0] LEDSG,
    output [7:0] LEDSB
    );
/*
always @ ( posedge clk )
	begin
		if(DATA < 16'd66) 
			begin
				LEDSR <= 8'h00;
				LEDSB <= DATA[15:8];
				LEDSG <= 8'h00;
			end
		else if(DATA < 16'd197)
			begin
				LEDSR <= 8'h00;
				LEDSB <= 8'h00;
				LEDSG <= DATA[15:8];
			end
		else
			begin
				LEDSR <= DATA[15:8];
				LEDSB <= 8'h00;
				LEDSG <= 8'h00;
			end
	end*/
	
assign LEDSB = (numero2<9'd10)? numero2[7:0] : 8'h00;
assign LEDSG = (numero2<9'd30)? numero2[7:0] : 8'h00;
assign LEDSR = (numero2<9'd30)? 8'h00 : numero2[7:0];

endmodule
