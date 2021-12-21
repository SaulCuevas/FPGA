module Torniquete(S, CLK, B, F, V, D, display);  
    input S, CLK;               // Declaracion entrada del sensor y el reloj
    output reg B = 0, F = 0, V = 0, D= 0;  //Declaracion del buzzer, foco, vibrador y display
	 output reg [15:0] display;
reg aux = 0;     
reg F10Hz = 0;      
reg [15:0] CONT528 = 16'd0;   // Frecuencia del sonido emitido del buzzer
reg [22:0] CONT10 = 23'd0;    // Frecuencia del beep de la alarma (buzzer)
always@(S)
    begin
        if(S == 1)          // Si el sensor esta encendido
        begin
            D = 1'b1;     // Prende el display
            F = 1'b1;     // Prende el foco
            V = 1'b1;     // Prende el vibrador
            aux = 1'b1;   // Prende el buzzer
        end
        else           // Si no detecta nada el sensor se mantienen apagados
        begin
            D = 1'b0;
            F = 1'b0;
            V = 1'b0;
            aux = 1'b0;
        end
    end

always@(posedge CLK)
    begin
        if(CONT10 == 23'd5000000)     // Divisor de frecuencia para 10Hz
            begin
                CONT10 =23'd0;
                F10Hz = ~F10Hz;
            end
        else
            CONT10 = CONT10 +1'b1;
	end
always @ (posedge CLK)
	begin
        if(F10Hz == 1'b0 && aux == 1'b1)   // Si la seal de activacin del buzzer y la frecuencia de 10 Hz esta activada emite la seal de frecuencia de 528Hz
            begin
                if(CONT528 == 16'd47348) // Divisor de frecuencia de 528Hz para emitir el beep de la alarma
                    begin
                        CONT528 =16'd0;
                        B = ~B;
                    end
                else
                    CONT528 = CONT528 +1'b1;
            end
        else              // Cuando el conteo llega a 528 se reinicia
            begin
                CONT528 =16'd0;
                B = 1'b0;
            end
	end

always@(posedge CLK)
begin
	if(D==1) display = 16'b0001000101111111;
	else display = 16'b1111111111111111;
end

endmodule

