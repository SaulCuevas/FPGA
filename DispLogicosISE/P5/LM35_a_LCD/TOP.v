//////////////////////////////////////////////////////////////////////////////////
module TOP(
    input clk,
    output SCL,
    inout SDA,
    output RS,
	 output RW,
	 output E,
	 output [7:0] DATA_LCD,
	 output [7:0] LEDSR,
	 output [7:0] LEDSG,
	 output [7:0] LEDSB
    );

wire [15:0] DATA;
wire [12:0] numero;
wire [8:0] numero2;
wire [7:0] DECI;
wire [7:0] UNID;
wire [7:0] DECE;
wire [7:0] CENT;
// Obtencion de los datos y guardado en el registro DATA
ADS1115 U1
(
 .clk(clk),
 .SCL(SCL),
 .SDA(SDA),
 .DATA(DATA)
); 

// Ajuste de medida BITS a NUMERO BINARIO "real"
CONVERSION U2
(
 .clk(clk),
 .DATA(DATA),
 .numero(numero)
); 

// Numero binario a BCD
BINaBCD U3
(
 .clk(clk),
 .numero(numero),
 .DECI(DECI),
 .UNID(UNID),
 .DECE(DECE),
 .CENT(CENT),
 .numero2(numero2)
); 

// Muestra los datos en el display
LIB_LCD_INTESC_REVD U4
(
 .CLK(clk),
 .RS(RS),
 .RW(RW),
 .ENA(E),
 .DATA_LCD(DATA_LCD),
 .DECI(DECI),
 .UNID(UNID),
 .DECE(DECE),
 .CENT(CENT)
); 

// Muestra los datos en los leds
LEDS U5
(
 .clk(clk),
 .numero2(numero2),
 .LEDSR(LEDSR),
 .LEDSG(LEDSG),
 .LEDSB(LEDSB)
); 

endmodule
