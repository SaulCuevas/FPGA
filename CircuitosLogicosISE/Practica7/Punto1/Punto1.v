// memoria RAM de 64 bits
// 8 datos (3 bits de direccin) de 8 bits
module RAM_8x8 (CS, RW, DATA, ADDRESS, DISPLAYS, CLK); 
parameter DATA_BITS = 8;
	input [2:0] ADDRESS;	//Entradas de direccin
	input	CS;	//Chip Select
	input	RW;	//Read y Write de la memoria
	input	CLK;
	inout [DATA_BITS-1:0] DATA;	//Bus de datos
	output reg [11:0] DISPLAYS;	//Salidas a displays de 7 segmentos integrados en amiba
reg [DATA_BITS-1:0] MEM [7:0]; //  8 registros de 8 bits
reg [DATA_BITS-1:0] DATAO; //  Reg de salida de datos
reg [2:0] BINARY;	//registro para valores en no gray

assign DATA = (CS && !RW)? DATAO : 8'bZZZZZZZZ; //DATA ser[a igual a DATA, estar[a en modo salida, si CS=1 y RW=0

always@(posedge CLK)
	begin:RAM
		BINARY = {ADDRESS[2], ADDRESS[2]^ADDRESS[1], ADDRESS[2]^ADDRESS[1]^ADDRESS[0]};	//convertimos gray a binario 
		case(BINARY)					//cases para mostrar la direccin seleccionada de la memoria en los displays de anodos
			3'b000: DISPLAYS = {~4'b1000,~8'b01100000};
			3'b001: DISPLAYS = {~4'b0100,~8'b11011010};
			3'b010: DISPLAYS = {~4'b0010,~8'b11110010};
			3'b011: DISPLAYS = {~4'b0001,~8'b01100110};
			3'b100: DISPLAYS = {~4'b1000,~8'b10110110};
			3'b101: DISPLAYS = {~4'b0100,~8'b10111110};
			3'b110: DISPLAYS = {~4'b0010,~8'b11100000};
			3'b111: DISPLAYS = {~4'b0001,~8'b11111110};
			default: DISPLAYS = {~4'b1111, ~8'b1111111};
		endcase
		if(CS == 1)		//Si el chip select est en 1
			begin
			if(RW == 1)	//Si RW est en 1, est en modo de lectura, y guardar el dato recibido del bus en una memoria
				MEM[BINARY] = DATA;
			else		//Si RW est en 0, est en modo de escritura, y sacar el dato almacenado en una memoria por el bus de datos
				DATAO = MEM[BINARY];
			end
		else			//Si el chip select est en 0, la salida del bus de datos ser alta impedancia
			DATAO = 8'bZZZZZZZZ;
	end
endmodule