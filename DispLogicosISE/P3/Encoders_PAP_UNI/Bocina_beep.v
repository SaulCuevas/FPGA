//////////////////////////////////////////////////////////////////////////////////
module Bocina_beep(
    input clk,
    input limSUP,
    input limINF,
    input [3:0] cont_pos,
    output reg B
    );

reg F10Hz;
reg [15:0] CONT528 = 16'd0;   // Frecuencia del sonido emitido del buzzer
reg [22:0] CONT10 = 23'd0;    // Frecuencia del beep de la alarma (buzzer)
reg [22:0] singleBEEP = 0;

//100ms/(20ns*2) = 2_500_000 
always@(posedge clk)
    begin
        if(CONT10 == 23'd5_000_000)     // Divisor de frecuencia para 10Hz
            begin
                CONT10 =23'd0;
                F10Hz = ~F10Hz;
            end
        else
            CONT10 = CONT10 +1'b1;
	end
always @ (posedge clk)
	begin
		if( cont_pos == 4'd15 )
			begin
				if( singleBEEP != 23'd5_000_000 )
					begin
						if(CONT528 == 16'd47348) // Divisor de frecuencia de 528Hz para emitir el beep de la alarma
							begin
								CONT528 =16'd0;
								B = ~B;
						end
						else CONT528 = CONT528 +1'b1;
						singleBEEP = singleBEEP + 1'b1;
					end
			end
		else if(F10Hz == 1'b0 && (limSUP == 1'b1 || limINF == 1'b1))   // Si la seal de activacin del buzzer y la frecuencia de 10 Hz esta activada emite la seal de frecuencia de 528Hz
			begin
				if(CONT528 == 16'd47348) // Divisor de frecuencia de 528Hz para emitir el beep de la alarma
					begin
						CONT528 =16'd0;
                  B = ~B;
				end
				else CONT528 = CONT528 +1'b1;
			end
		else              // Cuando el conteo llega a 528 se reinicia
			begin
				CONT528 =16'd0;
            B = 1'b0;
				singleBEEP = 0;
			end
	end

endmodule
