////////////////////////////////////////////////////////////////////////////
//                     Instituto Politecnico Nacional                     //
//           Unidad Profesional Interdisciplinaria en Ingenieria          //
//                         y Tecnologias Avanzadas                        //
// Materia: Dispositivos Lógicos Programables                             //
// Asignacion de valores para el servo que controla la mandibula          //
// Equipo: STRIK3R                                                        //
//         * Cisneros Noguez Alan Uriel                                   //
//         * Cuevas Morales Saul Asis                                     //
//         * Gonzalez Zuniga Alexis                                       //
//         * Luna García Bertin                                           //
////////////////////////////////////////////////////////////////////////////
module MANDIBULA(
    input clk,
    input BOCA,
    output servoMAND
    );

reg [19:0] CONT_PWM;
always @ ( posedge clk )
	begin
		if( BOCA ) // Abrir boca
			CONT_PWM <= 20'd50_000;
		else // Cerrar boca
			CONT_PWM <= 20'd25_000;
	end

SERVO servo2
(
 .CLK(clk),
 .CONT_PWM(CONT_PWM),
 .PWM(servoMAND)
);

endmodule
