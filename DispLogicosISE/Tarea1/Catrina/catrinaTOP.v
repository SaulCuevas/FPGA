////////////////////////////////////////////////////////////////////////////
//                     Instituto Politecnico Nacional                     //
//           Unidad Profesional Interdisciplinaria en Ingenieria          //
//                         y Tecnologias Avanzadas                        //
// Materia: Dispositivos Lógicos Programables                             //
// Top Module de Catrina                                                  //
// Equipo: STRIK3R                                                        //
//         * Cisneros Noguez Alan Uriel                                   //
//         * Cuevas Morales Saul Asis                                     //
//         * Gonzalez Zuniga Alexis                                       //
//         * Luna García Bertin                                           //
////////////////////////////////////////////////////////////////////////////
module catrinaTOP(
    input clk,
    input sensIZQ,
    input sensFRENTE,
    input sensDER,
	 input sensBOCA,
    output servoOJOSH,
    output servoOJOSV,
    output servoMAND,
    output servoCUELLO,
    output reg audio
    );

//MAQUINA DE ESTADOS
reg [1:0] ESTADO = 0;
parameter ESPERA = 2'd0, // Espera
			MOVIMIENTO = 2'd1, // Detecta un movimiento
			SONIDOS = 2'd2, // Reproduce los sonidos
			ESPERADULCE = 2'd3; // Espera a que se haya tomado el dulce >> espera 15s resetea a la pos original

reg [1:0] sensIZQ_s = 0, sensDER_s = 0, sensFRENTE_s;
reg mov = 0;

always @ ( posedge clk ) 
	begin
		sensIZQ_s = {sensIZQ_s[0], sensIZQ};
		sensDER_s = {sensDER_s[0], sensDER};
		sensFRENTE_s = {sensFRENTE_s[0], sensFRENTE};
		if( sensIZQ_s == 2'b01 || sensDER_s == 2'b01 || sensFRENTE_s == 2'b01 ) mov = 1'b1;
		else mov = 1'b0;
	end

wire [2:0] pos = { sensIZQ, sensFRENTE, sensDER };

reg [2:0] posCUELLO = 0;
reg BOCA = 0; //BOCA == 1 : Abierta ; BOCA == 0 : Cerrada
reg [27:0] cont_15s = 0;
reg [21:0] delay = 0;

always @ ( posedge clk )
	begin
		case( ESTADO )
			ESPERA:
				begin
					if( mov ) ESTADO <= MOVIMIENTO;
					else ESTADO <= ESPERA;
				end
			MOVIMIENTO: 
				begin
					posCUELLO <= pos;
					BOCA <= 1'b1;
					ESTADO <= SONIDOS;
				end
			SONIDOS:
				begin
					audio <= 1'b1;
					if( audio )
						begin
							if( delay == 22'd2_500_000 ) 
								begin 
									audio <= 1'b0;
									ESTADO <= ESPERADULCE;
								end
							else delay <= delay + 1'b1;
						end
				end
			ESPERADULCE:
				begin
					if( sensBOCA ) cont_15s <= 0; // Si se detecta un dulce en la boca se reinicia el contador
					else if( cont_15s == 28'd250_000_000 ) // Si llega a contar 5s sin el dulce en la boca
						begin
							ESTADO <= ESPERA;
							cont_15s <= 0; 
							BOCA <= 1'b0;
							posCUELLO <= 3'b010;
						end
					else cont_15s <= cont_15s + 1'b1;
				end
		endcase
	end

CUELLO U1
(
 .clk(clk),
 .posCUELLO(posCUELLO),
 .servoCUELLO(servoCUELLO)
);

MANDIBULA U2
(
 .clk(clk),
 .BOCA(BOCA),
 .servoMAND(servoMAND)
);

OJOS U3
(
 .clk(clk),
 .servoOJOSH(servoOJOSH),
 .servoOJOSV(servoOJOSV)
);

endmodule
