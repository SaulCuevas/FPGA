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
			FPGA_CLK : INTEGER := 100_000_000
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
		SENTIDO	: IN STD_LOGIC;
		SEL		: IN STD_LOGIC_VECTOR(1 DOWNTO 0)
-----------------------------------------------------------
-----------------------------------------------------------

	  );

end LIB_LCD_INTESC_REVD;

architecture Behavioral of LIB_LCD_INTESC_REVD is


CONSTANT NUM_INSTRUCCIONES : INTEGER := 26; 	--INDICAR EL NMERO DE INSTRUCCIONES PARA LA LCD


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
signal SENT : STD_LOGIC_VECTOR(71 downto 0);
signal SELint : INTEGER range 1 to 4;
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
	
	INST(1) <= BUCLE_INI(1);
	
	INST(2) <= POS(1,1);
	INST(3) <= CHAR_ASCII(SENT(71 downto 64));
	INST(4) <= CHAR_ASCII(SENT(63 downto 56));
	INST(5) <= CHAR_ASCII(SENT(55 downto 48));
	INST(6) <= CHAR_ASCII(SENT(47 downto 40));
	INST(7) <= CHAR_ASCII(SENT(39 downto 32));
	INST(8) <= CHAR_ASCII(SENT(31 downto 24));
	INST(9) <= CHAR_ASCII(SENT(23 downto 16));
	INST(10) <= CHAR_ASCII(SENT(15 downto 8));
	INST(11) <= CHAR_ASCII(SENT(7 downto 0));
	
	INST(12) <= POS(2,1);
	INST(13) <= CHAR_ASCII(x"56");	--V
	INST(14) <= CHAR_ASCII(x"45");	--E
	INST(15) <= CHAR_ASCII(x"4c");	--L
	INST(16) <= CHAR_ASCII(x"4f");	--O
	INST(17) <= CHAR_ASCII(x"43");	--C
	INST(18) <= CHAR_ASCII(x"49");	--I
	INST(19) <= CHAR_ASCII(x"44");	--D
	INST(20) <= CHAR_ASCII(x"41");	--A
	INST(21) <= CHAR_ASCII(x"44");	--D
	INST(22) <= CHAR_ASCII(x"3a");	--:
	INST(23) <= CHAR_ASCII(x"20");	--
	
	INST(24) <= INT_NUM(SELint);
	
	INST(25) <= BUCLE_FIN(1);
	
	INST(26) <= CODIGO_FIN(1);

-------------------------------------------------------------------
-------------------------------------------------------------------




-------------------------------------------------------------------
--------------------ESCRIBE TU CDIGO DE VHDL----------------------

	process(SENTIDO) begin
		IF (SENTIDO = '0') THEN SENT <= (x"49"&x"5A"&x"51"&x"55"&x"49"&x"45"&x"52"&x"44"&x"41"); 				--IZQUIERDA
		ELSIF (SENTIDO = '1') THEN  SENT <= (x"44"&x"45"&x"52"&x"45"&x"43"&x"48"&x"41"&x"20"&x"20"); 		--DERECHA__
		ELSE SENT <= (x"20"&x"20"&x"20"&x"20"&x"20"&x"20"&x"20"&x"20"&x"20"); 	--_________
		END IF;
	end process;
	
	process(SEL) begin
		case SEL is 
		when "00" => SELint <= 1;
		when "01" => SELint <= 2;
		when "11" => SELint <= 3;
		when "10" => SELint <= 4;
		when others => SELint <= 1;
		end case;
	end process;
 	
-------------------------------------------------------------------
-------------------------------------------------------------------





end Behavioral;

