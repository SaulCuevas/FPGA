library ieee; -- Declaracin de la biblioteca
use ieee.std_logic_1164.all;
entity funciones is -- Declaracin de la Entidad
port ( a,b,c: in std_logic; -- Declaracin de los puertos de entrada
		s1,s2,s3: out std_logic; -- puertos de salidas
		s4,s5,s6: OUT std_logic -- salidas propuestas por el equipo
);
end funciones; -- Fin de la entidad

Architecture a_func OF funciones IS --Declaracin de la Arquitectura
begin
	S1 <= a xor b xor c; --xor
	S2 <= a or b or c; --or
	S3 <= a xnor b; --xnor
	S4 <= a and b and c; --and
	S5 <= not(a and b and c); --nand
	S6 <= not(a or b or c); --nor
end a_func; --Fin de la Arquitectura