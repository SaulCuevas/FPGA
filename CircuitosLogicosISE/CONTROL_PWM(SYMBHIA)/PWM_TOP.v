`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
module PWM_TOP(
    input wire CLK,
	 input wire BOTON_MR,
	 input wire BOTON_MDC,
	 input wire BOTON_LED,
    input wire [1:0] ENCODER,
    //input wire [7:0] ENCODER_SIM,
    output wire MOTORREDUCTOR,
    output wire MOTOR_DC,
    output wire LED,
	 output wire [15:0] DISPLAY
    );

	wire FREC_1K;
	wire [14:0] PWM;
	wire [1:0] BOTON_SEL;

// U1: CONTROL DE PWM MEDIANTE ENCODER
// Y SELECCION DE DISPOSITIVO MEDIANTE BOTONES
CONTROL U1
(
 .CLK(CLK),
 .ENCODER(ENCODER),
 //.ENCODER(ENCODER_SIM),
 .BOTON_MR(BOTON_MR),
 .BOTON_MDC(BOTON_MDC),
 .BOTON_LED(BOTON_LED),
 .PWM(PWM),
 .BOTON_SEL(BOTON_SEL)
);

// U2: GENERADOR DE SENAL 
FRECUENCIA U2
(
 .CLK(CLK),
 .FREC(FREC_1K),
 .PWM(PWM)
);

// U3: ASIGNADOR DE SALIDAS A MOTORES
MOTORES U3
(
 .CLK(CLK),
 .FREC(FREC_1K),
 .BOTON_SEL(BOTON_SEL),
 .MOTORREDUCTOR(MOTORREDUCTOR),
 .MOTOR_DC(MOTOR_DC),
 .LED(LED)
);

// U4: MUESTRA EL PORCENTAJE EN ALTO DEL PWM
DISPLAY U4
(
 .CLK(CLK),
 .PWM(PWM),
 .DISPLAY(DISPLAY)
);

endmodule
