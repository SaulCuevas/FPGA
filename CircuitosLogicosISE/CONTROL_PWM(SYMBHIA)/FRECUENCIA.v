//////////////////////////////////////////////////////////////////////////////////
module FRECUENCIA(
    input CLK,
    input [14:0] PWM,
    output reg FREC
    );
	
	reg [14:0] CONT_FREC = 0;		//Contador de la frecuencia (1kHz)
	always @ ( posedge CLK )
		begin
			if( CONT_FREC == PWM) FREC = 1'b0;
			if( CONT_FREC == 15'd25_000 ) begin
					FREC = 1'b1;
					CONT_FREC = 0;
			end
			else begin
				CONT_FREC = CONT_FREC + 1'b1;
			end
		end

endmodule
