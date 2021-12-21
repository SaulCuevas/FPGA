////////////////////////////////////////////////////////////////////////////
//                  Elaboro: Cuevas Morales Saul Asis                     //
////////////////////////////////////////////////////////////////////////////
// Circuito para un modulo BT HM10 para transmision y recepcion de datos  //
// mediante una app para android. Se transmite [A/B] para seleccion de    //
// modo, [1,2,3,4,5] para seleccion de posicion en el modo A. Salidas   //
// a display de 7 segmentos de 4 digitos anodo comun, 8 leds, y por medio //
// del modulo BT al telefono con la app. Salida=[MODO|-|-|POS]=[A|-|-|4]. //
// Modo A: Seleccion de posicion de un servo (5 pos), modo B: Ciclo entre //
// posiciones.                                                            //
////////////////////////////////////////////////////////////////////////////
module TOP(
		input CLK,
		//input sel_modo,
		//input [4:0] botones,
		output PWM,
		output [15:0] DISP,
		input RESET,
		input rx,
		output reg [7:0] ledsR,
		output reg [7:0] ledsG
    );
wire sel_modo;
wire [4:0] pos_sel;
wire [2:0] posi;
wire [7:0] leds;

HM_10 U1(
	.clk(CLK),
	.reset(RESET),
	.rx(rx),
	.sel_modo(sel_modo),
	.pos_sel(pos_sel),
	.leds(leds)
	);

servoPWM U2(
	.CLK(CLK),
	.modo(sel_modo),
	.pos_sel(pos_sel),
	.PWM(PWM),
	.posi(posi)
	);

DISP7SEG U3(
	.CLK(CLK),
	.DISPLAY(DISP),
	.posi(posi),
	.modo(sel_modo)
	);

always @ ( posedge CLK )
begin
	if(sel_modo == 1'b0) begin ledsR <= leds; ledsG <= 8'b00000000; end
	else begin ledsR <= 8'b00000000; ledsG <= leds; end
end

endmodule
