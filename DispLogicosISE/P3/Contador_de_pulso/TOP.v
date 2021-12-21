//////////////////////////////////////////////////////////////////////////////////
module TOP(
    input clk,
    input boton,
    input reset,
	 output [7:0] ledsR, ledsG, ledsB,
	 output [15:0] display,
	 output playNext
    );

wire BOTON_PRES_reset;
wire [14:0] cont_tiempo; // Contador de 0 a 9_999

//BOTON
BOTON U1
(
 .clk(clk),
 .boton(boton),
 .reset(reset),
 .BOTON_PRES_reset(BOTON_PRES_reset),
 .cont_tiempo(cont_tiempo)
);

//DISPLAY
DISPLAY U2
(
 .clk(clk),
 .cont_tiempo(cont_tiempo),
 .DISPLAY(display)
);

//LEDS
LEDS U3
(
 .clk(clk),
 .cont_tiempo(cont_tiempo),
 .ledsR(ledsR),
 .ledsG(ledsG),
 .ledsB(ledsB)
);

//BOCINA
BOCINA U4
(
 .clk(clk),
 .reset(BOTON_PRES_reset),
 .cont_tiempo(cont_tiempo),
 .playNext(playNext)
);

endmodule
