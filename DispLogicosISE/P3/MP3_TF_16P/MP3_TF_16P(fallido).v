//////////////////////////////////////////////////////////////////////////////////
module MP3_TF_16P(
    input clk,
	 input entrada,
    output reg TX = 1,
	 output reg [7:0] LEDS = 0
    );

// cadena de 10 bytes a mandar
// $S VER Len CMD Feedback para1 para2 checksum(accumulation & verification) $O
// EJEMPLO: 7E FF 06 09 00 00 04 FF DD EF
reg [87:0] CADENA = 0;
reg [247:0] CADENAINICIO = {8'h00, 80'h7EFF060600001EFFDDEF, // Volumen = 30
									 80'h7EFF0607000000FFDDEF, // EQ = Normal
									 80'h7EFF0608000002FFDDEF}; // Modo = Single Repeat}

// COMANDOS PARA COMUNICACION SERIAL 
/*
parameter Next = 16'h01,
			Previous = 16'h02,
			Specif_Track = 16'h03,	//0-2999
			Increse_Vol = 16'h04,
			Decrease_Vol = 16'h05,
			Specif_Vol = 16'h06,		//0-30
			Specif_EQ = 16'h07,		//0-5
			Specif_PMode = 16'h08, 	//0-3 Repeat/Folder Repeat/Single Repeat/Random
			Specif_PSource = 16'h09,	//0-4 U/TF/AUX/SLEEP/FLASH
			Standby = 16'h0A,
			Normal = 16'h0B,
			ResetModule = 16'h0C,
			Playback = 16'h0D, 
			Pause = 16'h0E,
			Specif_Folder = 16'h0F,	//1~10
			Vol_adjust_set = 16'h10,//{DH=1:Open volume adjust }{DL: set volume gain 0~31}
			RepeatPlay = 16'h11;		//{1:start repeat play}{0:stop play}*/

// MAQUINA DE ESTADOS
// Inicializa el modulo con ciertos parametros y oscila entre home y enviar
parameter home = 2'b00,
			inicio = 2'b01,
			enviar = 2'b10;
			
reg [1:0] currentState = inicio, nextState = inicio;

reg inicioDeEnviado = 0; //Bandera de inicio del envio de la cadena
reg enviando = 0; //Bander del proceso en ejecucion
reg finDeEnviado = 0; //Bandera del fin del envio de la cadena
reg finDeEnviadoInicio = 0; //Bandera del fin de la inicializacion del modulo

always @ ( posedge clk )
	begin
		case( currentState )
			home:
				begin
					if( inicioDeEnviado == 1'b1 || enviando == 1'b1 ) nextState <= enviar;
					else nextState <= home;
				end
			inicio:
				begin
					if( finDeEnviadoInicio == 1'b1  ) nextState <= home;
					else nextState <= inicio;
				end
			enviar:
				begin
					if( finDeEnviado == 1'b1 ) nextState <= home;
					else nextState <= enviar;
				end
			endcase
	end
	
always @ (posedge clk) currentState <= nextState;

// Senal de 9600Hz = 104.1666us 
// 9600Hz^-1/50MHz^-1 = 5208.33 ciclos
// con el valor de 2_604, obtenemos una senal al 50% de 9600.61Hz
reg frec_9600Hz = 0;
reg [12:0] cont_9600Hz = 0;
//reg [2:0] cont_error = 0;
//reg error = 0;

always @ ( posedge clk )
	begin
		if( cont_9600Hz == 13'd2_604/*(13'd2_604 + error)*/)
			begin
				cont_9600Hz = 0;
				frec_9600Hz = ~frec_9600Hz;
				//cont_error = cont_error + 1'b1;
				//if( cont_error == 3'd5 ) begin cont_error = 0; error = 1; end
				//else error = 0;
			end
		else cont_9600Hz = cont_9600Hz + 1'b1;
	end

reg [1:0] temp = 0;
reg arriba = 0;
always @ ( posedge clk ) 
	begin
		temp <= {temp[0], entrada};
		case(temp)
			2'b00: begin inicioDeEnviado <= 1'b0; arriba <= 1'b0; end
			2'b01: begin inicioDeEnviado <= 1'b1; arriba <= 1'b1; end
			2'b10: begin inicioDeEnviado <= 1'b0; arriba <= 1'b0; end
			2'b11: begin inicioDeEnviado <= 1'b0; arriba <= 1'b1; end
		endcase
	end

// Secuencia de ensamblado y barrido de cadena // Envio de la cadena
reg [8:0] cont_CADENA = 0; // Contador de 1-240 bits

always @ ( posedge frec_9600Hz )
	begin
		if( currentState == inicio & finDeEnviadoInicio == 1'b0 ) //Secuencia de inicializacion
			begin
				TX = CADENAINICIO[0];
				CADENAINICIO = CADENAINICIO >> 1;
				cont_CADENA = cont_CADENA + 1'b1;
				if( cont_CADENA == 9'd240 ) begin finDeEnviadoInicio <= 1'b1; cont_CADENA = 0; end
				else finDeEnviadoInicio <= 1'b0;
			end
		else if( currentState == enviar & finDeEnviado == 1'b0 )	//Inicia barrido
			begin
				enviando <= 1'b1;
				TX = CADENA[0];
				CADENA = CADENA >> 1;
				cont_CADENA = cont_CADENA + 1'b1;
				if( cont_CADENA == 8'd80 ) begin finDeEnviado <= 1'b1; enviando <= 1'b0; cont_CADENA = 0; end
				else finDeEnviado <= 1'b0;
			end
		else 
			begin
				//         $S     VER    Len    CMD    Feed   para1  para2  accum  verif  $O
				CADENA = { 8'h00, 8'h7E, 8'hFF, 8'h06, 8'h03, 8'h00, 8'h00, 8'h03, 8'hFF, 8'hDD, 8'hEF };
				TX = 1;
				finDeEnviado <= 1'b0;
			end
	end
	
always @ ( posedge clk )
	begin
		LEDS = { arriba, currentState, 4'd0, finDeEnviadoInicio };
	end

endmodule
