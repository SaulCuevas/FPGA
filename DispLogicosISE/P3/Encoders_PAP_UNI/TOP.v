//////////////////////////////////////////////////////////////////////////////////
module TOP(
    input clk,
    input [1:0] Encoder1,
    input [1:0] Encoder2,
    input limSUP,
    input limINF,
    output bocina,
	 output [7:0] LEDS,
    output [3:0] motor_uni,
	 output [15:0] display
    );

wire [1:0] enable1, enable2;
wire direccion1, direccion2;

// U1: Encoder 1
Encoder U1(
	.clk(clk),
	.Encoder(Encoder1),
	.enable(enable1),
	.direccion(direccion1)
	);

// U2: Encoder 2
Encoder U2(
	.clk(clk),
	.Encoder(Encoder2),
	.enable(enable2),
	.direccion(direccion2)
	);

wire [3:0] cont_pos; // Guarda la posicion del motor 0-15 cada que llega a 0 se escucha un beep
wire [1:0] enable = ( enable1 || enable2 );
wire dir = ( direccion1 || direccion2 );

// U3: Asignacion de giro de motor PaP unipolar
Motor U3(
	.clk(clk),
	.enable(enable),
	.direccion(dir),
	.limSUP(limSUP),
	.limINF(limINF),
	.cont_pos(cont_pos),
	.pos(motor_uni)
	);

// U4: Generador de BEEPs y asignacion a la bocina
Bocina_beep U4(
	.clk(clk),
	.limSUP(limSUP),
	.limINF(limINF),
	.cont_pos(cont_pos),
	.B(bocina)
	);

// U5: Animacion de derecha o izquieda de los LEDs
AnimacionLEDs U5(
	.clk(clk),
	.enable(enable),
	.dir(dir),
	.LEDS(LEDS)
	);
	
// U6: Contador de posicion a display de 7 segmentos
Display7SEG U6(
	.CLK(clk),
	.numero(cont_pos),
	.DISPLAY(display)
	);

endmodule
