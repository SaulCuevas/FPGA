`timescale 1ns / 1ps
//	INSTITUTO POLITECNICO NACIONAL
//					UPIITA
// AUTORES: SAUL CUEVAS MORALES
//				ALEXIS GONZALEZ ZUNIGA
// COMPARADOR DE MAGNITUD DE 4 BITS CON CODIFICADOR A DISPLAY Y BOTONES DE SELECTOR DE MODO
module P1_4bitMagnitudeComparator(a,b, clk, reset, b1, b2, b3, disp);
	 parameter n=3;
	 input [n:0] a, b;
	 input clk; //50MHz
	 input reset;
    input b1;
    input b2;
    input b3;
    output reg [11:0] disp;

reg [5:0] comparador;
reg [18:0] contador;
wire [1:0] contador_disp;

always @(a or b)
begin
	comparador <= (a==b)? 6'b010101 : ((a>b)? 6'b001011 : ((a<b)? 6'b100110: 6'b000000));
end

always @(posedge clk or posedge reset)
begin
	if(reset==1) contador <= 0;
	else contador <= contador + 8'd1;
end 
assign contador_disp = contador[18:17]; //~~95.37Hz

always @(contador_disp, comparador, b1, b2, b3)
begin
	if(b1 & (~b2) & (~b3)) //boton 1
	begin
		if(comparador == 6'b010101) // a=b disp => '='
			begin
				case(contador_disp)
				2'b00 : disp <= {8'b11111111 , 4'b0111};
				2'b01 : disp <= {8'b11101101 , 4'b1011};
				2'b10 : disp <= {8'b11101101 , 4'b1101};
				2'b11 : disp <= {8'b11111111 , 4'b1110};
				default : disp <= {8'b11111111 , 4'b1111};
				endcase
			end
		else // a=/=b disp => '=/='
			begin
				case(contador_disp)
				2'b00 : disp <= {8'b11111111 , 4'b0111};
				2'b01 : disp <= {8'b11011101 , 4'b1011};
				2'b10 : disp <= {8'b11111001 , 4'b1101};
				2'b11 : disp <= {8'b11111111 , 4'b1110};
				default : disp <= {8'b11111111 , 4'b1111};
				endcase
			end
	end
	else if((~b1) & b2 & (~b3)) //boton 2
	begin
		if(comparador == 6'b100110)  // a<b disp => '<'
			begin
				case(contador_disp)
				 2'b00 : disp <= {8'b11100101 , 4'b0111};
				 2'b01 : disp <= {8'b11111111 , 4'b1011};
				 2'b10 : disp <= {8'b11111111 , 4'b1101};
				 2'b11 : disp <= {8'b11111111 , 4'b1110};
				 default : disp <= {8'b11111111 , 4'b1111};
				 endcase
			end
		else // a>=b disp => '>='
			begin
				case(contador_disp)
				2'b00 : disp <= {8'b11111111 , 4'b0111};
				2'b01 : disp <= {8'b11111111 , 4'b1011};
				2'b10 : disp <= {8'b11111111 , 4'b1101};
				2'b11 : disp <= {8'b01001101 , 4'b1110};
				default : disp <= {8'b11111111 , 4'b1111};
				endcase
			end
	end
	else if((~b1) & (~b2) & b3) //boton 3
	begin
		if(comparador == 6'b001011)  //a>b disp => '>='
			begin
				case(contador_disp)
				2'b00 : disp <= {8'b11111111 , 4'b0111};
				2'b01 : disp <= {8'b11111111 , 4'b1011};
				2'b10 : disp <= {8'b11111111 , 4'b1101};
				2'b11 : disp <= {8'b11001101 , 4'b1110};
				default : disp <= {8'b11111111 , 4'b1111};
				endcase
			end
		else //a<=b => '<='
			begin
				case(contador_disp)
				2'b00 : disp <= {8'b01100101 , 4'b0111};
				2'b01 : disp <= {8'b11111111 , 4'b1011};
				2'b10 : disp <= {8'b11111111 , 4'b1101};
				2'b11 : disp <= {8'b11111111 , 4'b1110};
				default : disp <= {8'b11111111 , 4'b1111};
				endcase
			end
	end
	else disp <= {8'b11111111 , 4'b0000};
end
endmodule
