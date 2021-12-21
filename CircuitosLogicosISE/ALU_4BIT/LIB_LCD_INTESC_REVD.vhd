----------------------------------------------------------------------------------
-- COPYRIGHT 2019 Jess Eduardo Mndez Rosales
--This program is free software: you can redistribute it and/or modify
--it under the terms of the GNU General Public License as published by
--the Free Software Foundation, either version 3 of the License, or
--(at your option) any later version.
--
--This program is distributed in the hope that it will be useful,
--but WITHOUT ANY WARRANTY; without even the implied warranty of
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
--GNU General Public License for more details.
--
--You should have received a copy of the GNU General Public License
--along with this program.  If not, see <http://www.gnu.org/licenses/>.
--
--
--							LIBRERA LCD
--
-- Descripcin: Con sta librera podrs implementar cdigos para una LCD 16x2 de manera
-- fcil y rpida, con todas las ventajas de utilizar una FPGA.
--
-- Caractersticas:
-- 
--	Los comandos que puedes utilizar son los siguientes:
--
-- LCD_INI() -> Inicializa la lcd.
--		 			 NOTA: Dentro de los parntesis poner un vector de 2 bits para encender o apagar
--					 		 el cursor y activar o desactivar el parpadeo.
--
--		"1x" -- Cursor ON
--		"0x" -- Cursor OFF
--		"x1" -- Parpadeo ON
--		"x0" -- Parpadeo OFF
--
--   Por ejemplo: LCD_INI("10") -- Inicializar LCD con cursor encendido y sin parpadeo 
--	
--			
-- CHAR() -> Manda una letra mayscula o minscula
--
--				 IMPORTANTE: 1) Debido a que VHDL no es sensible a maysculas y minsculas, si se quiere
--								    escribir una letra mayscula se debe escribir una "M" antes de la letra.
--								 2) Si se quiere escribir la letra "S" mayscula, se declara "MAS"
--											
-- 	Por ejemplo: CHAR(A)  -- Escribe en la LCD la letra "a"
--						 CHAR(MA) -- Escribe en la LCD la letra "A"	
--						 CHAR(S)	 -- Escribe en la LCD la letra "s"
--						 CHAR(MAS)	 -- Escribe en la LCD la letra "S"	
--	
--
-- POS() -> Escribir en la posicin que se indique.
--				NOTA: Dentro de los parntesis se dene poner la posicin de la LCD a la que se quiere ir, empezando
--						por el rengln seguido de la posicin vertical, ambos nmeros separados por una coma.
--		
--		Por ejemplo: POS(1,2) -- Manda cursor al rengln 1, poscicin 2
--						 POS(2,4) -- Manda cursor al rengln 2, poscicin 4		
--
--
-- CHAR_ASCII() -> Escribe un caracter a partir de su cdigo en ASCII
--						 NOTA: Dentro de los parentesis escribir x"(nmero hex.)"
--
--		Por ejemplo: CHAR_ASCII(x"40") -- Escribe en la LCD el caracter "@"
--
--
-- CODIGO_FIN() -> Finaliza el cdigo. 
--						 NOTA: Dentro de los parntesis poner cualquier nmero: 1,2,3,4...,8,9.
--
--
-- BUCLE_INI() -> Indica el inicio de un bucle. 
--						NOTA: Dentro de los parntesis poner cualquier nmero: 1,2,3,4...,8,9.
--
--
-- BUCLE_FIN() -> Indica el final del bucle.
--						NOTA: Dentro de los parntesis poner cualquier nmero: 1,2,3,4...,8,9.
--
--
-- INT_NUM() -> Escribe en la LCD un nmero entero.
--					 NOTA: Dentro de los parntesis poner slo un nmero que vaya del 0 al 9,
--						    si se quiere escribir otro nmero entero se tiene que volver
--							 a llamar la funcin
--
--
-- CREAR_CHAR() -> Funcin que crea el caracter diseado previamente en "CARACTERES_ESPECIALES.vhd"
--                 NOTA: Dentro de los parntesis poner el nombre del caracter dibujado (CHAR1,CHAR2,CHAR3,..,CHAR8)
--								 
--
-- CHAR_CREADO() -> Escribe en la LCD el caracter creado por medio de la funcin "CREAR_CHAR()"
--						  NOTA: Dentro de los parntesis poner el nombre del caracter creado.
--
--     Por ejemplo: 
--
--				Dentro de CARACTERES_ESPECIALES.vhd se dibujan los caracteres personalizados utilizando los vectores 
--				"CHAR_1", "CHAR_2","CHAR_3",...,"CHAR_7","CHAR_8"
--
--								 '1' => [#] - Se activa el pixel de la matrz.
--                       '0' => [ ] - Se desactiva el pixel de la matriz.
--
-- 			Si se quiere crear el				Entonces CHAR_1 queda de la siguiente
--				siguiente caracter:					manera:
--												
--				  1  2  3  4  5						CHAR_1 <=
--  		  1 [ ][ ][ ][ ][ ]							"00000"&			
-- 		  2 [ ][ ][ ][ ][ ]							"00000"&			  
-- 		  3 [ ][#][ ][#][ ]							"01010"&   		  
-- 		  4 [ ][ ][ ][ ][ ]		=====>			"00000"&			   
-- 		  5 [#][ ][ ][ ][#]							"10001"&          
-- 		  6 [ ][#][#][#][ ]							"01110"&			  
-- 		  7 [ ][ ][ ][ ][ ]							"00000"&			  
-- 		  8 [ ][ ][ ][ ][ ]							"00000";			
--
--		
--			Como el caracter se cre en el vector "CHAR_1",entonces se escribe en las funcines como "CHAR1"
--			
--			CREAR_CHAR(CHAR1)  -- Crea el caracter personalizado (CHAR1)
--			CHAR_CREADO(CHAR1) -- Muestra en la LCD el caracter creado (CHAR1)		
--
-- 
--
-- LIMPIAR_PANTALLA() -> Manda a limpiar la LCD.
--								 NOTA: sta funcin se activa poniendo dentro de los parntesis
--										 un '1' y se desactiva con un '0'. 
--
--		Por ejemplo: LIMPIAR_PANTALLA('1') -- Limpiar pantalla est activado.
--						 LIMPIAR_PANTALLA('0') -- Limpiar pantalla est desactivado.
--
--
--	Con los puertos de entrada "CORD" y "CORI" se hacen corrimientos a la derecha y a la
--	izquierda respectivamente. NOTA: La velocidad del corrimiento se puede cambiar 
-- modificando la variable "DELAY_COR".
--
-- Algunas funcines generan un vector ("BLCD") cuando se termin de ejecutar dicha funcin y
--	que puede ser utilizado como una bandera, el vector solo dura un ciclo de instruccion.
--	   
--		LCD_INI() ---------- BLCD <= x"01"
--		CHAR() ------------- BLCD <= x"02"
--		POS() -------------- BLCD <= x"03"
-- 	INT_NUM() ---------- BLCD <= x"04"
--	   CHAR_ASCII() ------- BLCD <= x"05"
--	   BUCLE_INI() -------- BLCD <= x"06"
--		BUCLE_FIN() -------- BLCD <= x"07"
--		LIMPIAR_PANTALLA() - BLCD <= x"08"
--	   CREAR_CHAR() ------- BLCD <= x"09"
--	 	CHAR_CREADO() ------ BLCD <= x"0A"
--
--
--		IMPORTANTE!
--		
--		1) Se deber especificar el nmero de instrucciones en la constante "NUM_INSTRUCCIONES". El valor 
--			de la ltima instruccin es el que se colocar
--		2) En caso de utilizar a la librera como TOP del diseo, se deber comentar el puerto genrico y 
--			descomentar la constante "FPGA_CLK" para especificar la frecuencia de reloj.
--		3) Cada funcin se acompaa con " INST(NUM) <= <FUNCIN> " como lo muestra en el cdigo
-- 		demostrativo.
--
--
--                CDIGO DEMOSTRATIVO
--
--		CONSTANT NUM_INSTRUCCIONES : INTEGER := 7;
--
-- 	INST(0) <= LCD_INI("11"); 		-- INICIALIZAMOS LCD, CURSOR A HOME, CURSOR ON, PARPADEO ON.
-- 	INST(1) <= POS(1,1);				-- EMPEZAMOS A ESCRIBIR EN LA LINEA 1, POSICIN 1
-- 	INST(2) <= CHAR(MH);				-- ESCRIBIMOS EN LA LCD LA LETRA "h" MAYUSCULA
-- 	INST(3) <= CHAR(O);			
-- 	INST(4) <= CHAR(L);
-- 	INST(5) <= CHAR(A);
-- 	INST(6) <= CHAR_ASCII(x"21"); -- ESCRIBIMOS EL CARACTER "!"
-- 	INST(7) <= CODIGO_FIN(1);	   -- FINALIZAMOS EL CODIGO
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE WORK.COMANDOS_LCD_REVD.ALL;

entity LIB_LCD_INTESC_REVD is

GENERIC(
			FPGA_CLK : INTEGER := 50_000_000
);


PORT(CLK: IN STD_LOGIC;

-----------------------------------------------------
------------------PUERTOS DE LA LCD------------------
	  RS 		  : OUT STD_LOGIC;							--
	  RW		  : OUT STD_LOGIC;							--
	  ENA 	  : OUT STD_LOGIC;							--
	  DATA_LCD : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);  --
-----------------------------------------------------
-----------------------------------------------------
	  
	  
-----------------------------------------------------------
--------------ABAJO ESCRIBE TUS PUERTOS--------------------	
	 	NUMA : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		NUMB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		SEL : IN STD_LOGIC_VECTOR(2 DOWNTO 0);
		SIGNO : IN STD_LOGIC;
		RESUL_LOG : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		UNIint : IN std_logic_vector (3 DOWNTO 0);
		DECint : IN std_logic_vector (3 DOWNTO 0);
		CENint : IN std_logic_vector (3 DOWNTO 0)
-----------------------------------------------------------
-----------------------------------------------------------

	  );

end LIB_LCD_INTESC_REVD;

architecture Behavioral of LIB_LCD_INTESC_REVD is


CONSTANT NUM_INSTRUCCIONES : INTEGER := 34; 	--INDICAR EL NMERO DE INSTRUCCIONES PARA LA LCD


--------------------------------------------------------------------------------
-------------------------SEALES DE LA LCD (NO BORRAR)--------------------------
																										--
component PROCESADOR_LCD_REVD is																--
																										--
GENERIC(																								--
			FPGA_CLK : INTEGER := 50_000_000;												--
			NUM_INST : INTEGER := 1																--
);																										--
																										--
PORT( CLK 				 : IN  STD_LOGIC;														--
	   VECTOR_MEM 		 : IN  STD_LOGIC_VECTOR(8  DOWNTO 0);							--
	   C1A,C2A,C3A,C4A : IN  STD_LOGIC_VECTOR(39 DOWNTO 0);							--
	   C5A,C6A,C7A,C8A : IN  STD_LOGIC_VECTOR(39 DOWNTO 0);							--
	   RS 				 : OUT STD_LOGIC;														--
	   RW 				 : OUT STD_LOGIC;														--
	   ENA 				 : OUT STD_LOGIC;														--
	   BD_LCD 			 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);			         	--
	   DATA 				 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);							--
	   DIR_MEM 			 : OUT INTEGER RANGE 0 TO NUM_INSTRUCCIONES					--
	);																									--
																										--
end component PROCESADOR_LCD_REVD;															--
																										--
COMPONENT CARACTERES_ESPECIALES_REVD is													--
																										--
PORT( C1,C2,C3,C4 : OUT STD_LOGIC_VECTOR(39 DOWNTO 0);								--
		C5,C6,C7,C8 : OUT STD_LOGIC_VECTOR(39 DOWNTO 0)									--
	 );																								--
																										--
end COMPONENT CARACTERES_ESPECIALES_REVD;													--
																										--
CONSTANT CHAR1 : INTEGER := 1;																--
CONSTANT CHAR2 : INTEGER := 2;																--
CONSTANT CHAR3 : INTEGER := 3;																--
CONSTANT CHAR4 : INTEGER := 4;																--
CONSTANT CHAR5 : INTEGER := 5;																--
CONSTANT CHAR6 : INTEGER := 6;																--
CONSTANT CHAR7 : INTEGER := 7;																--
CONSTANT CHAR8 : INTEGER := 8;																--
																										--
type ram is array (0 to  NUM_INSTRUCCIONES) of std_logic_vector(8 downto 0); 	--
signal INST : ram := (others => (others => '0'));										--
																										--
signal blcd 			  : std_logic_vector(7 downto 0):= (others => '0');		--																										
signal vector_mem 	  : STD_LOGIC_VECTOR(8  DOWNTO 0) := (others => '0');		--
signal c1s,c2s,c3s,c4s : std_logic_vector(39 downto 0) := (others => '0');		--
signal c5s,c6s,c7s,c8s : std_logic_vector(39 downto 0) := (others => '0'); 	--
signal dir_mem 		  : integer range 0 to NUM_INSTRUCCIONES := 0;				--
																										--
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------


--------------------------------------------------------------------------------
---------------------------AGREGA TUS SEALES AQU------------------------------
signal intA : STD_LOGIC_VECTOR(15 downto 0);
signal intB : STD_LOGIC_VECTOR(15 downto 0);
signal UNIint1 : integer range 0 to 10;
signal DECint1 : integer range 0 to 10;
signal CENint1 : integer range 0 to 10;
signal LCD_operacion : STD_LOGIC_VECTOR(55 downto 0);
signal NEG : STD_LOGIC_VECTOR(7 downto 0);
signal resultadoL : STD_LOGIC_VECTOR(31 downto 0);
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------


begin


---------------------------------------------------------------
-------------------COMPONENTES PARA LCD------------------------
																				 --
u1: PROCESADOR_LCD_REVD													 --
GENERIC map( FPGA_CLK => FPGA_CLK,									 --
				 NUM_INST => NUM_INSTRUCCIONES )						 --
																				 --
PORT map( CLK,VECTOR_MEM,C1S,C2S,C3S,C4S,C5S,C6S,C7S,C8S,RS, --
			 RW,ENA,BLCD,DATA_LCD, DIR_MEM );						 --
																				 --
U2 : CARACTERES_ESPECIALES_REVD 										 --
PORT MAP( C1S,C2S,C3S,C4S,C5S,C6S,C7S,C8S );				 		 --
																				 --
VECTOR_MEM <= INST(DIR_MEM);											 --
																				 --
---------------------------------------------------------------
---------------------------------------------------------------


-------------------------------------------------------------------
---------------ESCRIBE TU CDIGO PARA LA LCD-----------------------

 	INST(0) <= LCD_INI("11"); 		-- INICIALIZAMOS LCD, CURSOR A HOME, CURSOR ON, PARPADEO ON.
 	INST(1) <= POS(1,1);
 	INST(2) <= CHAR(MA);
	INST(3) <= CHAR_ASCII(x"3D"); --"A="
 	INST(4) <= POS(2,1);
	INST(5) <= CHAR(MB);
	INST(6) <= CHAR_ASCII(x"3D"); --"B="
											-- 1234567890123456
	INST(7) <= BUCLE_INI(1);		-- A=XX**A AND B***
	INST(8) <= POS(1,3);				-- B=XX**=-XXXXXXXX
	INST(9) <= CHAR_ASCII(intA(15 downto 8));
	INST(10) <= CHAR_ASCII(intA(7 downto 0));
	INST(11) <= POS(2,3);
	INST(12) <= CHAR_ASCII(intB(15 downto 8));
	INST(13) <= CHAR_ASCII(intB(7 downto 0));
	
	INST(14) <= POS(1,7);
	INST(15) <= CHAR_ASCII(LCD_operacion(55 downto 48));
	INST(16) <= CHAR_ASCII(LCD_operacion(47 downto 40));
	INST(17) <= CHAR_ASCII(LCD_operacion(39 downto 32));
	INST(18) <= CHAR_ASCII(LCD_operacion(31 downto 24));
	INST(19) <= CHAR_ASCII(LCD_operacion(23 downto 16));
	INST(20) <= CHAR_ASCII(LCD_operacion(15 downto 8));
	INST(21) <= CHAR_ASCII(LCD_operacion(7 downto 0));
	
	INST(22) <= POS(2,7);
	INST(23) <= CHAR_ASCII(x"3D");
	INST(24) <= CHAR_ASCII(NEG);
	INST(25) <= INT_NUM(CENint1);
	INST(26) <= INT_NUM(DECint1);
	INST(27) <= INT_NUM(UNIint1);
	INST(28) <= CHAR_ASCII(x"20");
	INST(29) <= CHAR_ASCII(resultadoL(31 downto 24));
	INST(30) <= CHAR_ASCII(resultadoL(23 downto 16));
	INST(31) <= CHAR_ASCII(resultadoL(15 downto 8));
	INST(32) <= CHAR_ASCII(resultadoL(7 downto 0));
	INST(33) <= BUCLE_FIN(1);
	
	INST(34) <= CODIGO_FIN(1);

-------------------------------------------------------------------
-------------------------------------------------------------------




-------------------------------------------------------------------
--------------------ESCRIBE TU CDIGO DE VHDL----------------------

	process(SEL) begin
		case SEL is --selector en codigo gray
		when "000" => LCD_operacion <= ("01000001"&"00100000"&"00101011"&"00100000"&"01000010"&"00100000"&"00100000");
		when "001" => LCD_operacion <= ("01000001"&"00100000"&"00101101"&"00100000"&"01000010"&"00100000"&"00100000");
		when "011" => LCD_operacion <= ("01000001"&"00100000"&"00101010"&"00100000"&"01000010"&"00100000"&"00100000");
		when "010" => LCD_operacion <= ("01000001"&"00100000"&"00101111"&"00100000"&"01000010"&"00100000"&"00100000");
		when "110" => LCD_operacion <= ("01000001"&"00100000"&"01000001"&"01001110"&"01000100"&"00100000"&"01000010");
		when "111" => LCD_operacion <= ("01000001"&"00100000"&"01001111"&"01010010"&"00100000"&"01000010"&"00100000");
		when "101" => LCD_operacion <= ("01000001"&"00100000"&"01011000"&"01001111"&"01010010"&"00100000"&"01000010");
		when "100" => LCD_operacion <= ("01001110"&"01001111"&"01010100"&"00100000"&"01000001"&"00100000"&"00100000");
		when others => LCD_operacion <= ("00100000"&"00100000"&"00100000"&"00100000"&"00100000"&"00100000"&"00100000");
		end case;
		if(SIGNO='1') then NEG <= x"2D";
		else NEG <= x"20";
		end if;
	end process;
	process(UNIint, DECint, CENint) begin
		case UNIint is
		when "0000" => UNIint1 <= 0;
		when "0001" => UNIint1 <= 1;
		when "0010" => UNIint1 <= 2;
		when "0011" => UNIint1 <= 3;
		when "0100" => UNIint1 <= 4;
		when "0101" => UNIint1 <= 5;
		when "0110" => UNIint1 <= 6;
		when "0111" => UNIint1 <= 7;
		when "1000" => UNIint1 <= 8;
		when "1001" => UNIint1 <= 9;
		when "1010" => UNIint1 <= 10;
		when others => UNIint1 <= 0;
		end case;
		case DECint is
		when "0000" => DECint1 <= 0;
		when "0001" => DECint1 <= 1;
		when "0010" => DECint1 <= 2;
		when "0011" => DECint1 <= 3;
		when "0100" => DECint1 <= 4;
		when "0101" => DECint1 <= 5;
		when "0110" => DECint1 <= 6;
		when "0111" => DECint1 <= 7;
		when "1000" => DECint1 <= 8;
		when "1001" => DECint1 <= 9;
		when "1010" => DECint1 <= 10;
		when others => DECint1 <= 0;
		end case;
		case CENint is
		when "0000" => CENint1 <= 0;
		when "0001" => CENint1 <= 1;
		when "0010" => CENint1 <= 2;
		when "0011" => CENint1 <= 3;
		when "0100" => CENint1 <= 4;
		when "0101" => CENint1 <= 5;
		when "0110" => CENint1 <= 6;
		when "0111" => CENint1 <= 7;
		when "1000" => CENint1 <= 8;
		when "1001" => CENint1 <= 9;
		when "1010" => CENint1 <= 10;
		when others => CENint1 <= 0;
		end case;
	end process;
	process(NUMB, RESUL_LOG, SEL) begin
		if(SEL="100" or SEL="101" or SEL="110" or SEL="111") then
			case RESUL_LOG is
			when x"0" => resultadoL <= (x"30"&x"30"&x"30"&x"30");
			when x"1" => resultadoL <= (x"30"&x"30"&x"30"&x"31");
			when x"2" => resultadoL <= (x"30"&x"30"&x"31"&x"30");
			when x"3" => resultadoL <= (x"30"&x"30"&x"31"&x"31");
			when x"4" => resultadoL <= (x"30"&x"31"&x"30"&x"30");
			when x"5" => resultadoL <= (x"30"&x"31"&x"30"&x"31");
			when x"6" => resultadoL <= (x"30"&x"31"&x"31"&x"30");
			when x"7" => resultadoL <= (x"30"&x"31"&x"31"&x"31");
			when x"8" => resultadoL <= (x"31"&x"30"&x"30"&x"30");
			when x"9" => resultadoL <= (x"31"&x"30"&x"30"&x"31");
			when x"A" => resultadoL <= (x"31"&x"30"&x"31"&x"30");
			when x"B" => resultadoL <= (x"31"&x"30"&x"31"&x"31");
			when x"C" => resultadoL <= (x"31"&x"31"&x"30"&x"30");
			when x"D" => resultadoL <= (x"31"&x"31"&x"30"&x"31");
			when x"E" => resultadoL <= (x"31"&x"31"&x"31"&x"30");
			when x"F" => resultadoL <= (x"31"&x"31"&x"31"&x"31");
			when others => resultadoL <= (x"20"&x"20"&x"20"&x"20");
			end case;
		elsif(NUMB="0000" and SEL="010") then resultadoL <= (x"45"&x"52"&x"52"&x"20");
		else resultadoL <= (x"20"&x"20"&x"20"&x"20");
		end if;
	end process;
	process(NUMA) begin
		case NUMA is
		when x"0" => intA <= (x"20"&x"30");
		when x"1" => intA <= (x"20"&x"31");
		when x"2" => intA <= (x"20"&x"32");
		when x"3" => intA <= (x"20"&x"33");
		when x"4" => intA <= (x"20"&x"34");
		when x"5" => intA <= (x"20"&x"35");
		when x"6" => intA <= (x"20"&x"36");
		when x"7" => intA <= (x"20"&x"37");
		when x"8" => intA <= (x"20"&x"38");
		when x"9" => intA <= (x"20"&x"39");
		when x"A" => intA <= (x"31"&x"30");
		when x"B" => intA <= (x"31"&x"31");
		when x"C" => intA <= (x"31"&x"32");
		when x"D" => intA <= (x"31"&x"33");
		when x"E" => intA <= (x"31"&x"34");
		when x"F" => intA <= (x"31"&x"35");
		when others => intA <= (x"30"&x"30");
		end case;
	end process;
	process(NUMB) begin
		case NUMB is
		when x"0" => intB <= (x"20"&x"30");
		when x"1" => intB <= (x"20"&x"31");
		when x"2" => intB <= (x"20"&x"32");
		when x"3" => intB <= (x"20"&x"33");
		when x"4" => intB <= (x"20"&x"34");
		when x"5" => intB <= (x"20"&x"35");
		when x"6" => intB <= (x"20"&x"36");
		when x"7" => intB <= (x"20"&x"37");
		when x"8" => intB <= (x"20"&x"38");
		when x"9" => intB <= (x"20"&x"39");
		when x"A" => intB <= (x"31"&x"30");
		when x"B" => intB <= (x"31"&x"31");
		when x"C" => intB <= (x"31"&x"32");
		when x"D" => intB <= (x"31"&x"33");
		when x"E" => intB <= (x"31"&x"34");
		when x"F" => intB <= (x"31"&x"35");
		when others => intB <= (x"30"&x"30");
		end case;
	end process;
-------------------------------------------------------------------
-------------------------------------------------------------------





end Behavioral;