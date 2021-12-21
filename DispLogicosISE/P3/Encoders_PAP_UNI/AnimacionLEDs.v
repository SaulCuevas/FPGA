//////////////////////////////////////////////////////////////////////////////////
module AnimacionLEDs(
    input clk,
    input [1:0] enable,
    input dir,
    output reg [7:0] LEDS
    );

// 50ms / 20ns = 2_500_000

reg [21:0] cont_50ms = 0;
reg [3:0] cont_anim = 0;
reg anim;
reg [9:0] barridoDER = { 2'b11, 8'd0 }, // [ 1 1 0 0 0 0 0 0 0 0 ]
			barridoIZQ = { 8'd0, 2'b11 }; // [ 0 0 0 0 0 0 0 0 1 1 ]
always @ ( posedge clk )
	begin
		if( enable == 2'b01 ) anim <= 1'b1; // Si se detecta el giro en los encoders empieza la animacion
		else if( anim ) // Si la bandera anim esta activada continua la animacion
			begin
				if( cont_50ms == 22'd2_500_000 ) // Cada 50ms se muestra una etapa de la animacion
					begin
						cont_50ms <= 0;
						cont_anim <= cont_anim + 1'b1;
						if( cont_anim == 4'd11 ) // Acaba la animacion cuando hace 10 barridos
							begin 
								cont_anim <= 0; 
								anim <= 1'b0; 
							end
						if( dir == 1'b1 ) 
							begin
								barridoDER <= barridoDER >> 1;
								LEDS <= barridoDER[7:0];
							end
						else
							begin
								barridoIZQ <= barridoIZQ << 1;
								LEDS <= barridoIZQ[9:2];
							end
					end
				else cont_50ms <= cont_50ms + 1'b1;
			end
		else // Se rellenan los registros para el barrido
			begin
				barridoDER <= { 2'b11, 8'd0 };
				barridoIZQ <= { 8'd0, 2'b11 };
				LEDS <= 0;
			end
	end

endmodule
