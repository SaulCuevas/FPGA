//////////////////////////////////////////////////////////////////////////////////
module Encoder(
    input clk,
    input [1:0] Encoder, //[A , B]
	 input EncoderBUTTON,
    output [7:0] LEDS
    );

assign LEDS[7] = EncoderBUTTON;

reg [6:0] contador;
///////////////////////////////////////////////////////////////////////////////
// Secuencia anti-rebotes
//reg sampled_BUTTON;
reg [1:0] sampled_encoder;
//reg BOTON_PRES;
reg [20:0] sclk = 0;
reg [3:0] datos;
always @ ( posedge clk )
	begin
		sampled_encoder <= Encoder;
		// clock es dividido
		// se muestrea cada 20ms para verificar que la entrada es la misma que la
		// muestra, si la senal es estable, se saca la senal
		if(sclk == 21'd1_000_000) begin
			if(sampled_encoder == Encoder) 
				begin
					case( Encoder )
						2'b00: datos = 4'b1000;
						2'b01: datos[2] = 1'b1;
						2'b11: datos = 4'b0010;
						2'b10: datos[0] = 1'b1;
						default: datos = 4'b0000;
					endcase
					if(datos == 4'b1001 || datos == 4'b0110) // Indica el sentido horario.
						contador = contador + 1'b1;
					else if(datos == 4'b1100 || datos == 4'b0011) // Indica el sentido anti-horario.
						contador = contador - 1'b1;
					else contador = contador;
				end
			sclk <= 21'd0;
		end
		else sclk <= sclk + 1'b1;
	end

assign LEDS[6:0] = contador;

endmodule
