module counter (sensor, reset, hold, start, clk, p, stop, buzzer);
           input sensor, reset, hold, start, clk;
           //output reg [4:0] q;
           output reg [4:0] p=0;
			  output reg stop = 0;
			  output buzzer;

reg [4:0] q = 0;
// Secuencia anti-rebotes
reg sampled_sensor;
reg sens;
reg [21:0] sclk = 0;
always @ ( posedge clk )
	begin
		sampled_sensor <= sensor;
		// clock es dividido
		// se muestrea cada 25ms para verificar que la entrada es la misma que la
		// muestra, si la senal es estable, se saca la senal
		if(sclk == 22'd2_500_000) begin
			if(sampled_sensor == sensor) sens <= sensor;
			sclk <= 22'd0;
		end
		else sclk <= sclk + 1'b1;
	end

always@(posedge clk)   // Comienzo
begin
	if( start == 1'b0 ) p = 0;
	else
		begin
			if( reset == 1'b1 ) begin p = 5'd0; stop = 1'b0; end
			else
				begin
					if( hold == 1'b1 ) p = p;
					else
						begin
							if( sens == 1'b0 )
								begin
									p = q;
									if( p == 5'b10100 ) 
										begin
											p = 5'd20;
											stop = 1'b1;
										end
								end
							else p = p;
						end
				end
		end
end

always @ ( /*posedge start or*/ posedge sens or posedge reset) 
begin
	//if( start == 1'b1 )
		//begin
			if( reset == 1'b1 )	q = 5'd0;
			else if( sens == 1'b1 )
				begin
					q = q + 1'b1;
					if( q == 5'd21 ) q = 5'd20;
				end
		//end
end

music U1(
	.clk(clk),
	.speaker(buzzer),
	.stop(stop)
	);

endmodule

