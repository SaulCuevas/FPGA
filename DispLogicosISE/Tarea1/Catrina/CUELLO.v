////////////////////////////////////////////////////////////////////////////
//                     Instituto Politecnico Nacional                     //
//           Unidad Profesional Interdisciplinaria en Ingenieria          //
//                         y Tecnologias Avanzadas                        //
// Materia: Dispositivos Lógicos Programables                             //
// Asignacion de valores para el servo que controla el cuello             //
// Equipo: STRIK3R                                                        //
//         * Cisneros Noguez Alan Uriel                                   //
//         * Cuevas Morales Saul Asis                                     //
//         * Gonzalez Zuniga Alexis                                       //
//         * Luna García Bertin                                           //
////////////////////////////////////////////////////////////////////////////
module CUELLO(
    input clk,
    input [2:0] posCUELLO,
    output servoCUELLO
    );
	 
reg [19:0] CONT_PWM;
always @ ( posedge clk )
	begin
		case(posCUELLO)
			3'b100 : CONT_PWM <= 20'd25_000;
			3'b010 : CONT_PWM <= 20'd75_000;
			3'b001 : CONT_PWM <= 20'd125_000;
			default : CONT_PWM <= 20'd75_000;
		endcase
	end

SERVO servo1
(
 .CLK(clk),
 .CONT_PWM(CONT_PWM),
 .PWM(servoCUELLO)
);

endmodule
