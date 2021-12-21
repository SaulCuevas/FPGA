////////////////////////////////////////////////////////////////////////////
//                     Instituto Politecnico Nacional                     //
//           Unidad Profesional Interdisciplinaria en Ingenieria          //
//                         y Tecnologias Avanzadas                        //
// Materia: Dispositivos Lógicos Programables                             //
// Asignacion de valores PWM para servo sg90 y mg995                      //
// Equipo: STRIK3R                                                        //
//         * Cisneros Noguez Alan Uriel                                   //
//         * Cuevas Morales Saul Asis                                     //
//         * Gonzalez Zuniga Alexis                                       //
//         * Luna García Bertin                                           //
////////////////////////////////////////////////////////////////////////////
module SERVO(
		input CLK,
		input [19:0] CONT_PWM,
		output reg PWM
    );

//asignacion pwm
	reg [19:0] CONT_FREC = 0;		//Contador de la frecuencia (50Hz)
	always @ ( posedge CLK )
		begin
			if( CONT_FREC == CONT_PWM) PWM = 1'b0;
			if( CONT_FREC == 20'd999_999) begin
					PWM = 1'b1;
					CONT_FREC = 0;
			end
			else begin
				CONT_FREC = CONT_FREC + 1'b1;
			end
		end

//2.000ms/20ns = 125_000 veces, para 180 grad
//1.625ms/20ns = 100_000 veces, para 135 grad
//1.250ms/20ns = 75_000 veces, para 90 grad
//0.875ms/20ns = 50_000 veces, para 45 grad
//0.500ms/20ns = 25_000 veces, para 0 grad

endmodule

