/////////////////////////////////////////////////////////////////////
//Rx BT HC-06 con salida a leds y display (funciona para HM-10)
//Elaborado por Juan Jaramillo
module HM_10(
	input clk, //50MHz
	input reset, //reset
	input rx, //entrada de datos del modulo bluetooth (a DO)
	output reg [7:0] leds,
	output reg pausa = 0 //entrega ALTO cuando se detiene la pantalla y BAJO cuando continua
    );

//fsm states

reg [1:0] presentstate, nextstate;
parameter EDO_1 = 2'b00;
parameter EDO_2 = 2'b10;
//seales
reg control=0; //indica cuando ocurre el bit de start
reg done=0; // bandera que indica que termino de recibir los datos
reg[8:0]tmp=9'b000000000; //registro que recibe los datos enviados

//contadores para los retardos
reg[3:0]i=4'b0000; //contador de los bits recibidos
reg[9:0]c=10'b1111111111; //contador de retardos
reg delay=0; //algoritmo para los retardos
reg[1:0]c2=2'b11;
reg capture=0;

//proceso de retardo al triple de la frecuencia
//868*20ns=17.36us
//17.36us*3=58.08us
//58.08us*2=104.16us=1/9600baudios o bits/seg
always@(posedge clk)
begin
	if(c<868)
		c=c+1;
	else
		begin
			c=0;
			delay=~delay;
		end
end

//proceso para el contador C2 para la captura
always@(posedge delay)
begin
	if (c2>1)
		c2=0;
	else
		c2=c2+1;
end

//proceso para capturar en el bit de en medio (capture)
always@(c2)
begin
	if (c2==1)
		capture=1;
	else
		capture=0;
end

//FSM actualiza
always@(posedge capture, posedge reset)
	if (reset) presentstate <= EDO_1;
	else presentstate <= nextstate;
	
//FSM
always@(*)
begin
	case(presentstate)
		EDO_1:
			if(rx==1 && done==0)
				begin
					control=0;
					nextstate= EDO_1;
				end
			else if(rx==0 && done==0)
				begin
					control=1;
					nextstate= EDO_2;
				end
			else
				begin
					control=0;
					nextstate= EDO_1;
				end
		EDO_2:
			begin
				if(done==0)
					begin
						control=1;
						nextstate= EDO_2;
					end
				else
					begin
						control=0;
						nextstate= EDO_1;
					end
			end
		default: nextstate= EDO_1;
	endcase
end

//proceso de recepcin de datos
always@(posedge capture)
begin
	if (control==1 && done==0)
		begin
			tmp <= {rx,tmp[8:1]};
		end
end

//proceso que cuenta los bits que llegan (9 bits)
always@(posedge capture)
begin
	if (reset)
		begin
			// abcdefgP
			leds<=8'b00000000;
		end
	else if (control)
		if(i>=9)
			begin
				i=0;
				done=1;
				leds<=tmp[8:1];
				if(tmp[8:1]==8'h31) // abcdefgp
					pausa <= ~pausa; // 1
			end
		else
			begin
				i=i+1;
				done=0;
			end
	else
		done=0;
end

endmodule
