//////////////////////////////////////////////////////////////////////////////////
module MP3_TF_16P(
    input clk,
	 input entrada,
    output wire TX//,
	 //output led
    );

wire [7:0] i_data;
reg [79:0] CADENA = {8'h7E, 8'hFF, 8'h06, 8'h03, 8'h00, 8'h00, 8'h01, 8'hFF, 8'hE6, 8'hEF }; //{8'h7E, 8'hFF, 8'h06, 8'h03, 8'h00, 8'h00, 8'h03, 8'hFF, 8'hDD, 8'hEF };
parameter CADENA_LLENA = {8'h7E, 8'hFF, 8'h06, 8'h03, 8'h00, 8'h00, 8'h01, 8'hFF, 8'hE6, 8'hEF }; //{8'h7E, 8'hFF, 8'h06, 8'h03, 8'h00, 8'h00, 8'h03, 8'hFF, 8'hDD, 8'hEF };
assign i_data = CADENA[79:72];

///////////////////////////////////////////////////////////////////////////////
// Secuencia anti-rebotes
//reg sampled_BUTTON;
reg sampled_entrada;
reg entrada_PRES;
reg [20:0] sclk = 0;
always @ ( posedge clk )
	begin
		sampled_entrada <= entrada;
		// clock es dividido
		// se muestrea cada 25ms para verificar que la entrada es la misma que la
		// muestra, si la senal es estable, se saca la senal
		if(sclk == 21'd1_000_000) begin
			if(sampled_entrada == entrada) entrada_PRES <= entrada;
			sclk <= 21'd0;
		end
		else sclk <= sclk + 1'b1;
	end

// cadena de 10 bytes a mandar
// $S VER Len CMD Feedback para1 para2 checksum(accumulation & verification) $O
// EJEMPLO: 7E FF 06 09 00 00 04 FF DD EF
//reg [87:0] CADENA = 0;
//reg [247:0] CADENAINICIO = {8'h00, 80'h7EFF060600001EFFDDEF, // Volumen = 30
//									 80'h7EFF0607000000FFDDEF, // EQ = Normal
//									 80'h7EFF0608000002FFDDEF}; // Modo = Single Repeat}

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

//         				$S     VER    Len    CMD    Feed   para1  para2  accum  verif  $O
//	CADENA = { 8'h00, 8'h7E, 8'hFF, 8'h06, 8'h03, 8'h00, 8'h00, 8'h03, 8'hFF, 8'hDD, 8'hEF };

// MODULO PARA TRANSMISION DE DATOS UART 9600 BAUDIOS
//reg i_start = 0;
//reg [7:0] i_data = 0;
//reg o_done_prev = 0;
wire o_done, o_busy;
wire start;
reg bloqueo = 0;

assign start = entrada_PRES && ~bloqueo;

uart_tx U1(
	.i_clk(clk),
	.i_start(start),
	.i_data(i_data),
	.o_done(o_done),
	.o_busy(o_busy),
	.o_dout(TX)
	);

reg [3:0] cont_cadena = 0;
always @ ( negedge o_done )
	begin
		cont_cadena <= cont_cadena + 1'b1;
		CADENA = CADENA_LLENA << (8*(cont_cadena+1'b1));
		if( cont_cadena == 4'd9 ) begin cont_cadena <= 0; CADENA = CADENA_LLENA; end
	end
	
always @ ( posedge clk )
	begin
		if( entrada_PRES == 1'b0 ) bloqueo <= 1'b0;
		else if( cont_cadena == 4'd9 ) bloqueo <= 1'b1;
	end

endmodule
