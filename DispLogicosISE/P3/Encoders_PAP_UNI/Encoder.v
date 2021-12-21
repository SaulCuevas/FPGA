//////////////////////////////////////////////////////////////////////////////////
module Encoder(
    input clk, //50MHz ^-1 = 20ns
    input [1:0] Encoder, //Encoder[1] == iA, Encoder[0] == iB
    output reg [1:0] enable,
	 output reg direccion
    );

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

always @ ( posedge clk ) 
	begin 
		enable <= { enable[0], delayedA[1] ^ delayedA[0] ^ delayedB[1] ^ delayedB[0] };
		if( enable == 2'b01 ) 
			direccion = delayedA[0] ^ delayedB[1]; // solo se actualiza la direccion cuando se detecta giro
	end

endmodule
