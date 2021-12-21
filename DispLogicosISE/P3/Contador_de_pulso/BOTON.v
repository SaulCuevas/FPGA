//////////////////////////////////////////////////////////////////////////////////
module BOTON(
    input clk,
    input boton,
    input reset,
	 output reg BOTON_PRES_reset,
    output reg [14:0] cont_tiempo // Contador de 0 a 9_999
    );

///////////////////////////////////////////////////////////////////////////////
// Secuencia anti-rebotes
reg sampled_reset;
reg [21:0] sclk = 0;

always @ ( posedge clk )
	begin
		sampled_reset <= reset;
		// clock es dividido
		// se muestrea cada 25ms para verificar que la entrada es la misma que la
		// muestra, si la senal es estable, se saca la senal
		if(sclk == 22'd2_500_000) begin
			if(sampled_reset == reset) BOTON_PRES_reset <= reset;
			sclk <= 22'd0;
		end
		else sclk <= sclk + 1'b1;
	end
///////////////////////////////////////////////////////////////////////////////
// Generador de senal de 1ms de periodo (1kHz)
// Reloj FPGA = 50MHz, Objetivo = 2kHz = 1kHz*2, dado que se hace el cambio
// cada que se llega a la mitad de la frecuencia
// 1ms/(20ns * 2) = 25_000 ciclos

reg [15:0] cont_frec_1ms; 
reg frec_1ms;

always @ ( posedge clk )
	begin
		if( cont_frec_1ms == 16'd25_000 ) 
			begin 
				frec_1ms = ~(frec_1ms); 
				cont_frec_1ms = 16'd0;
			end
		else cont_frec_1ms = cont_frec_1ms + 1'b1;
	end

///////////////////////////////////////////////////////////////////////////////
// Aumento de contador de tiempo

always @ ( posedge frec_1ms )
	begin
		if( /*BOTON_PRES_reset*/ reset == 1'b1 ) cont_tiempo = 15'd0;
		else begin
			if( cont_tiempo == 15'd9_999 ) cont_tiempo = cont_tiempo;
			else begin
				if( /*BOTON_PRES_boton*/ boton == 1'b1 ) cont_tiempo = cont_tiempo + 1'b1;
				else cont_tiempo = cont_tiempo;
			end
		end
	end

endmodule
