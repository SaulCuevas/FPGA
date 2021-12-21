////////////////////////////////////////////////////////////////////////////
//                     Instituto Politecnico Nacional                     //
//           Unidad Profesional Interdisciplinaria en Ingenieria          //
//                         y Tecnologias Avanzadas                        //
// Materia: Dispositivos Lógicos Programables                             //
// Proyecto Final: Brazo Robotico de 2 GDL controlado mediante un guante  //
//                 2 DOF Robot Arm controlled by means of a glove         //
// Equipo: STRIK3R                                                        //
//         * Cisneros Noguez Alan Uriel                                   //
//         * Cuevas Morales Saul Asis                                     //
//         * Gonzalez Zuniga Alexis                                       //
//         * Luna García Bertin                                           //
////////////////////////////////////////////////////////////////////////////
module top(
    input clk,
	 input boton_stop,
    output SCL,
    inout SDA,
	 output RS,
	 output RW,
	 output ENA,
	 output [7:0] DATA_LCD,
	 output PWM_gripper,
	 output PWM_base,
	 output [7:0] ledsR,
	 output [7:0] ledsG
    );

assign ledsR = {pl, pl, pl, pl, pl, pl, pl, pl};
assign ledsG = ~ledsR;
wire [14:0] gripper, base;
wire pl;

ADS1115 ADC(
 .clk(clk),
 .boton_stop(boton_stop),
 .SCL(SCL),
 .SDA(SDA),
 .gripper(gripper),
 .base(base),
 .pausar_lectura(pl)
);

SERVO Servo_Base(
 .CLK(clk),
 .entrada(base),
 .PWM(PWM_base)
);

SERVO Servo_Gripper(
 .CLK(clk),
 .entrada(gripper),
 .PWM(PWM_gripper)
);

LIB_LCD_INTESC_REVD LCD_16x2(
 .CLK(clk),
 .gripper(gripper[14:8]),
 .base(base[14:8]),
 .RS(RS),
 .RW(RW),
 .ENA(ENA),
 .DATA_LCD(DATA_LCD)
); 

endmodule
