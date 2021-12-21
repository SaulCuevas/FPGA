//////////////////////////////////////////////////////////////////////////////////
module TOP(
    input clk,
    input aplauso,
	 //output [7:0] leds,
    output servo1,
    output servo2
    );

//assign leds = {aplauso, aplauso, aplauso, aplauso, aplauso, aplauso, aplauso, aplauso};

wire cont_aplausos; // 1 == ON ; 0 == OFF

reg [21:0] cont_80ms = 0; // 50Hz / 4 ; Cada lado usa un periodo de 20ms para formarse
reg [1:0] lado = 0; // Contador de 0-3 para cada lado: 0 == IZQ, 1 == ARRIBA, 2 == DER, 3 == ABAJO
always @ ( posedge clk )
	begin
		if( cont_80ms == 22'd3_999_999 )
			begin
				cont_80ms <= 0;
				lado <= lado + 1'b1;
			end
		else cont_80ms <= cont_80ms + 1'b1;
	end

// Contador de un aplauso y dos aplausos | UNO == ON ; DOS == OFF
APLAUSOS U1
(
 .clk(clk),
 .aplauso(aplauso),
 .cont_aplausos(cont_aplausos)
);

// Servo vertical
SERVO1 U2
(
 .CLK(clk),
 .cont_aplausos(cont_aplausos),
 .lado(lado),
 .PWM(servo1)
);

// Servo horizontal
SERVO2 U3
(
 .CLK(clk),
 .cont_aplausos(cont_aplausos),
 .lado(lado),
 .PWM(servo2)
);

endmodule
