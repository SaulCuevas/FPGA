//////////////////////////////////////////////////////////////////////////////////
module APLAUSOS(
    input clk,
    input aplauso,
    output reg cont_aplausos
    );

reg [1:0] sampled_aplauso = 0;
always @ ( posedge clk ) sampled_aplauso = { aplauso, sampled_aplauso[1] };

reg [26:0] delay_2s = 0;
reg banderaOK = 0;
reg banderaDosAplausos = 0;
reg banderaInicio = 0;
always @ ( posedge clk )
	begin
		if( banderaInicio )
			begin
				if( delay_2s == 27'd5_000_000 ) // Espera 100ms y "activa" que se pueda dar un segundo aplauso
					banderaOK <= 1'b1;
				if( sampled_aplauso == 2'b01 && banderaOK == 1'b1 ) // Si ya pasaron 100ms y detecta un segundo aplauso
					banderaDosAplausos <= 1'b1; 							// Se activa la bandera que recuerda que se dieron dos aplausos
				if( delay_2s == 27'd100_000_000 )	// Cuando llega a los dos segundos de delay se activa ON o OFF
					begin
						delay_2s <= 0;
						banderaInicio <= 1'b0;
						if( banderaDosAplausos ) cont_aplausos <= 1'b0;
						else cont_aplausos <= 1'b1;
					end
				else delay_2s <= delay_2s + 1'b1;
			end
		else if( sampled_aplauso == 2'b01 ) banderaInicio <= 1'b1;
		else
			begin
				banderaOK <= 1'b0;
				banderaDosAplausos <= 1'b0;
				banderaInicio <= 1'b0;
			end
	end

endmodule
