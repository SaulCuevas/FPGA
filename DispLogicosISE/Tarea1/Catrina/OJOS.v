////////////////////////////////////////////////////////////////////////////
//                     Instituto Politecnico Nacional                     //
//           Unidad Profesional Interdisciplinaria en Ingenieria          //
//                         y Tecnologias Avanzadas                        //
// Materia: Dispositivos Lógicos Programables                             //
// Asignacion de valores para los servos que controlam los ojos           //
// Equipo: STRIK3R                                                        //
//         * Cisneros Noguez Alan Uriel                                   //
//         * Cuevas Morales Saul Asis                                     //
//         * Gonzalez Zuniga Alexis                                       //
//         * Luna García Bertin                                           //
////////////////////////////////////////////////////////////////////////////
module OJOS(
    input clk,
    output servoOJOSH,
    output servoOJOSV
    );

// Se genera una rampa de valor_min a valor_max para los ojos
// OJOSH tarda 1s en llegar de 0° a 180° -> duerme 1s -> tarda 1s para 180° a 0°
// OJOSV tarda 3s en llegar de 0° a 180° -> duerme 3s -> tarda 3s para 180° a 0°

// valor min == 25_000 (0°) : valor max == 125_000 (180°)
// dif == 100_000 => cada Xs debe aumentar o disminuir 100_000

reg [19:0] CONT_PWM_H = 20'd25_000;
reg [16:0] CONT_AUX_H = 0;
reg [19:0] CONT_PWM_V = 20'd25_000;
reg [16:0] CONT_AUX_V = 0;

// 100_000 valores en 1s = Aumentar 1 cada 10us
// 100_000 valores en 3s = Aumentar 1 cada 30us
reg [1:0] ESTADO_H;
reg [1:0] ESTADO_V;
parameter up = 2'b00,
			sleep = 2'b01,
			down = 2'b10,
			sleep2 = 2'b11;
			
// Generar delay de 10us
reg [8:0] cont_10us = 0;
always @ ( posedge clk )
	begin
		if( cont_10us == 9'd499 )
			begin
				case(ESTADO_H)
					up:
						begin
							if(CONT_PWM_H == 20'd124_999) // Si llega al valor maximo
								ESTADO_H <= sleep; // Mandar al estado sleep
							else CONT_PWM_H <= CONT_PWM_H + 1'b1; // Cuenta hacia arriba
						end
					sleep:
						begin
							if(CONT_AUX_H == 17'd99_999) // Si cuenta 100k ciclos
								begin
									CONT_AUX_H <= 0;
									ESTADO_H <= down; // Mandar al estado down
								end
							else CONT_AUX_H <= CONT_AUX_H + 1'b1; // Agrega 1 al contador
						end
					down:
						begin
							if(CONT_PWM_H == 20'd25_000) // Si llega al valor minimo
								ESTADO_H <= sleep2; // Mandar al estado sleep
							else CONT_PWM_H <= CONT_PWM_H - 1'b1; // Cuenta hacia abajo
						end
					sleep2:
						begin
							if(CONT_AUX_H == 17'd99_999) // Si cuenta 100k ciclos
								begin
									CONT_AUX_H <= 0;
									ESTADO_H <= up; // Mandar al estado up
								end
							else CONT_AUX_H <= CONT_AUX_H + 1'b1; // Agrega 1 al contador
						end
				endcase
			end
		else cont_10us <= cont_10us + 1'b1;
	end
	
// Generar delay de 30us
reg [10:0] cont_30us = 0;
always @ ( posedge clk )
	begin
		if( cont_30us == 11'd1_499 )
			begin
				case(ESTADO_V)
					up:
						begin
							if(CONT_PWM_V == 20'd124_999) // Si llega al valor maximo
								ESTADO_V <= sleep; // Mandar al estado sleep
							else CONT_PWM_V <= CONT_PWM_V + 1'b1; // Cuenta hacia arriba
						end
					sleep:
						begin
							if(CONT_AUX_V == 17'd99_999) // Si cuenta 100k ciclos
								begin
									CONT_AUX_V <= 0;
									ESTADO_V <= down; // Mandar al estado down
								end
							else CONT_AUX_V <= CONT_AUX_V + 1'b1; // Agrega 1 al contador
						end
					down:
						begin
							if(CONT_PWM_V == 20'd25_000) // Si llega al valor minimo
								ESTADO_V <= sleep2; // Mandar al estado sleep
							else CONT_PWM_V <= CONT_PWM_V - 1'b1; // Cuenta hacia abajo
						end
					sleep2:
						begin
							if(CONT_AUX_V == 17'd99_999) // Si cuenta 100k ciclos
								begin
									CONT_AUX_V <= 0;
									ESTADO_V <= up; // Mandar al estado up
								end
							else CONT_AUX_V <= CONT_AUX_V + 1'b1; // Agrega 1 al contador
						end
				endcase
			end
		else cont_30us <= cont_30us + 1'b1;
	end

SERVO servoH
(
 .CLK(clk),
 .CONT_PWM(CONT_PWM_H),
 .PWM(servoOJOSH)
);

SERVO servoV
(
 .CLK(clk),
 .CONT_PWM(CONT_PWM_V),
 .PWM(servoOJOSV)
);

endmodule
