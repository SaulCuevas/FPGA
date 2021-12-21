// memoria RAM de 96 bits
// 8 datos (3 bits de direccin) de 12 bits
// con datos cargados por archivo de texto 
module ROM_8x12 (CS, SENSOR, DATA, CLK, SELREL); 
	input	CS;	//Chip Select
	input [1:0] SELREL;		//Selector del reloj
	input	SENSOR;		//Entrada del sensor
	input	CLK;		//Entrada del CLK
	output [11:0] DATA;	//Salida a displays
reg [11:0] ROM [7:0]; //  8 registros de 12 bits
reg [11:0] DATAO; //  reg para salida de datos
reg [2:0] Add;		//Direccion
reg [1:0] Contador = 0;		//Contador de 2 bits
reg Reloj;
integer conta = 0;
integer conta_ulti = 0;

initial $readmemb ("ROM_data.txt", ROM, 0, 7);		//leera el archivo de texto y le asigna a cada registro el valor especfico

assign DATA = DATAO;


always@(posedge CLK)
	begin
		case(SELREL)
			2'b00: conta_ulti = 1250000; 	//20Hz
			2'b01: conta_ulti = 625000; 	//40Hz
			2'b11: conta_ulti = 312500;	//80Hz
			2'b10: conta_ulti = 250000;	//100Hz
			default: conta_ulti = 1250000;
		endcase
	end
	
always@(posedge CLK)
	begin
		if (conta == conta_ulti) 
			begin
			Reloj = ~Reloj;
			conta = 1;
			end
		else conta = conta + 1;
	end

always@(posedge Reloj)		//Contador de 2 bits que depende del CLK externo
	begin
		if (Contador == 2'b11)
			Contador = 0;
		else
			Contador = Contador + 1'b1;
	end

always@(Contador, SENSOR, CS)
	begin:MEMORYROM
		Add = {SENSOR, Contador};	//Genera la direccin uniendo el contador y el valor del sensor
		if(CS == 1)
			DATAO = ROM[Add];	//Si el chip selector est en 1, sacar a los displays el valor dependiendo del estado del contador y del sensor
		else
			DATAO = 12'bZ;		//Si el chip selector est en 0, se pone en alta impedancia
	end
endmodule