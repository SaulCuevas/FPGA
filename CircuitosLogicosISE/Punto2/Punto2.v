// memoria RAM de 96 bits
// 8 datos (3 bits de direccin) de 12 bits
// con datos cargados por archivo de texto 
module ROM_8x12 (CS, SENSOR, DATA, CLK); 
	input	CS;	//Chip Select
	input	SENSOR;		//Entrada del sensor
	input	CLK;		//Entrada del CLK externo
	output [11:0] DATA;	//Salida a displays
reg [11:0] ROM [2:0]; //  8 registros de 12 bits
reg [11:0] DATAO; //  reg para salida de datos
reg [2:0] Add;		//Direccion
reg [1:0] Contador = 0;		//Contador de 2 bits

initial $readmemb ("ROM_data.txt", ROM, 0, 2);		//leera el archivo de texto y le asignar a cada registro el valor especfico

assign DATA = DATAO;

always@(posedge CLK)		//Contador de 2 bits que depende del CLK externo
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