//////////////////////////////////////////////////////////////////////////////////
module Encoder(
    input clk,
    input [1:0] Encoder, // Encoder[1] == A, Encoder[0] == B
	 input EncoderBoton, // Boton del encoder, cuando se presiona manda un cero
	 output reg [18:0] Contador = 19'd250_000 // Contador para el PWM variable
    );
reg [1:0] enable;
wire direccion;

reg [1:0] delayedA, delayedB;
reg [18:0] delay = 0;
reg sampled_BOTON;
reg BOTON_PRES = 1;
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

//secuencia anti-rebotes para el boton del encoder
//se samplea cada 25ms
//25ms/20ns = 1_250_000 ciclos
reg [20:0] cont_25ms;
always @ ( posedge clk )
	begin
		sampled_BOTON <= EncoderBoton;
		if( cont_25ms == 21'd1_250_000 )
			begin
				cont_25ms <= 0;
				if( sampled_BOTON == EncoderBoton ) BOTON_PRES <= EncoderBoton;
			end
		else cont_25ms <= cont_25ms + 1'b1;
	end

reg [25:0] delay_1s = 0;
always @ ( posedge clk )
	begin
		if( enable == 2'b01 )
			begin
				if( direccion == 1'b1 ) 
					if( Contador <= 19'd475_000 ) Contador <= Contador + 19'd25_000;
					else Contador <= 19'd500_000;
				else  if( direccion == 1'b0 )
					if( Contador >= 19'd25_000 ) Contador <= Contador - 19'd25_000;
					else Contador <= 19'd0;
			end
		else if( BOTON_PRES == 1'b0 ) 
			begin
				if( delay_1s == 26'd50_000_000 )
					begin
						delay_1s <= 0;
						Contador <= 19'd250_000;
					end
				else delay_1s <= delay_1s + 1'b1;
			end
		else delay_1s <= 0;
	end

endmodule
