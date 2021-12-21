//////////////////////////////////////////////////////////////////////////////////
module Encoder(
    input clk,
    input [1:0] Encoder, // Encoder[1] == A, Encoder[0] == B
	 output [7:0] leds
    );
reg [1:0] enable;
wire direccion;

reg [1:0] delayedA, delayedB;
reg [18:0] delay = 0;
//Se samplea el encoder cada 10ms
//Generador de delay de 10ms
//10ms/20ns = 500_000 ciclos
always @ ( posedge clk )
	begin
		if( delay == 19'd500_000 )
			begin
				delay <= 0;
				delayedA <= { delayedA[0], Encoder[1] };
				delayedB <= { delayedB[0], Encoder[0] };
			end
		else delay <= delay + 1'b1;
	end

assign direccion = delayedA[0] ^ delayedB[1];

always @ ( posedge clk ) enable <= { enable[0], delayedA[1] ^ delayedA[0] ^ delayedB[1] ^ delayedB[0] };

reg [7:0] contador;

always @ ( posedge clk )
	begin
		if( enable == 2'b01 )
			begin
				if( direccion ) contador <= contador + 1'b1;
				else contador <= contador - 1'b1;
			end
	end

assign leds = contador;

endmodule
