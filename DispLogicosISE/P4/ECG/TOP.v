//////////////////////////////////////////////////////////////////////////////////
module TOP(
    input clk,
    //input clke,
    output SCL,
    output SDA
    );

reg [11:0] ECG = 12'd0;
always @ ( negedge busy ) ECG = ECG + 1'b1;
//wire ready, busy, done;

//Generador de senal ECG
/*
GENERADOR U1
(
 //.clke(clke),
 .clk(clk),
 //.ready(ready),
 .ECG(ECG)
);*/
/*
GENERADOR2 U1
(
 .clk(clk),
 .ECG(ECG)
);
*/
//Comunicacion a modulo serial
MCP4725 U2
(
 .clk(clk),
 .DATAi(ECG),
 .SCL(SCL),
 .SDA(SDA),
 .busy(busy)
);

endmodule
