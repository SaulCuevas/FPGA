//////////////////////////////////////////////////////////////////////////////////
module TOP(
    input clk,
    input [1:0] Encoder,
    input EncoderBoton,
    output [23:0] LEDS
    );

wire [18:0] Contador;
wire PWM;

//Encoder y aumento o decremento del contador
Encoder U1
(
 .clk(clk),
 .Encoder(Encoder),
 .EncoderBoton(EncoderBoton),
 .Contador(Contador)
);

//Generador de senal PWM
PWM U2
(
 .clk(clk),
 .Contador(Contador),
 .PWM(PWM)
);

//Asignacion de senal PWM a los LEDS
LEDS U3
(
 .PWM(PWM),
 .LEDS(LEDS)
);

endmodule
