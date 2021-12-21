-- INSTITUTO POLITECNICO NACIONAL
-- 				UPIITA
-- AUTORES: SAUL CUEVAS MORALES
-- 			ALEXIS GONZALEZ ZUNIGA
-- UNIDAD ARITMTICA LGICA(ALU) DE 4 BITS (TOP MODULE)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ALU_top is
port(
		CLK: IN STD_LOGIC; --reloj de 50MHz
--		KBD_COL: IN STD_LOGIC_VECTOR(3 DOWNTO 0); --COLUMNAS TECLADO
--		KBD_FIL: OUT STD_LOGIC_VECTOR(3 DOWNTO 0); --FILAS TECLADO
		SEL: IN STD_LOGIC_VECTOR(2 DOWNTO 0); --SELECTOR CON CODIGO GRAY 0+,1-,2*,3/,4~,5$,6|,7^
		CAMBIO: IN STD_LOGIC; --SELECTOR PARA CAMBIAR EL NUMERO SELECCIONADO ( A/B )
		
		LEDSW_R: OUT STD_LOGIC_VECTOR(7 DOWNTO 0); --LEDS DE LOS SWITCHES
		LEDSW_G: OUT STD_LOGIC_VECTOR(7 DOWNTO 0); --PARA LA AMIBA 2
		LEDSW_B: OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		
		RS 		: OUT STD_LOGIC;							--
		RW		  	: OUT STD_LOGIC;							--
		ENA 	  	: OUT STD_LOGIC;							--
		DATA_LCD : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);  --PUERTOS PARA EL LCD
		
		ENCODER	: IN STD_LOGIC_VECTOR(1 DOWNTO 0) 	-- ENCODER 
);		
end ALU_top;

architecture A_ALU of ALU_top is
--SIGNAL IND : STD_LOGIC; --BANDERA DEL TECLADO
--SIGNAL BOTON_PRES : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL SA : STD_LOGIC_VECTOR(3 downto 0); --NUMERO A DE 4 BITS
SIGNAL SB : STD_LOGIC_VECTOR(3 downto 0); --NUMERO B DE 4 BITS
SIGNAL RESUL_ARIT : STD_LOGIC_VECTOR(7 downto 0); --RESULTADO DE LAS OPERACIONES ARITMETICAS
SIGNAL RESUL_LOG : STD_LOGIC_VECTOR(3 downto 0); --RESULTADO DE LAS OPERACIONES LOGICAS
SIGNAL SIGNO : STD_LOGIC; --BIT PARA SABER SI EL SIGNO NECESITA SER ACTIVADO
SIGNAL UNIint,DECint,CENint: std_logic_vector (3 DOWNTO 0); -- U D C signo
begin
--	LEDSW_R(6 downto 3) <= "0000"; LEDSW_G(6 downto 3) <= "0000"; LEDSW_B(6 downto 3) <= "0000"; --LEDS
	--------------------------------------------------------------------------------------------U1: Teclado 4X4
--	U1: ENTITY WORK.LIB_TEC_MATRICIAL_4x4_INTESC_RevA PORT MAP(
--		CLK => CLK, --RELOJ
--		COLUMNAS => KBD_COL, -- a COLUMNAS DEL TECLADO
--		FILAS => KBD_FIL, -- a FILAS DEL TECLADO
--		BOTON_PRES => BOTON_PRES, --a SENAL DE BOTON
--		IND => IND --a SENAL DE BANDERA
--		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U1: boton del teclado a binario
--	U2: ENTITY WORK.KBDaBIN PORT MAP(
--		CLK => CLK, --RELOJ
--		BOTON_PRES => BOTON_PRES, --BOTON PRESIONADO EN EL TECLADO MATRICIAL
--		CAMBIO => CAMBIO,
--		A => SA, --SALIDA DE 4 BITS EN A
--		B => SB  --SALIDA DE 4 BITS EN B
--		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U1: Encoder a numeros A y B
	U1: ENTITY WORK.encoderAB PORT MAP(
		CLK => CLK, --RELOJ
		CAMBIO => CAMBIO, --SELECTOR DE NUMERO ( A/B )
		SEL => SEL,
		ENCODER => ENCODER,
		A => SA, --SALIDA DE 4 BITS EN A
		B => SB,  --SALIDA DE 4 BITS EN B
		LEDSW_R => LEDSW_R,
		LEDSW_G => LEDSW_G,
		LEDSW_B => LEDSW_B
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U2: Operaciones aritmeticas
	U2: ENTITY WORK.SRM PORT MAP(
		A => SA, -- a SENAL de A
		B => SB, -- a SENAL de B
		C => RESUL_ARIT, -- a una seal de 8 bits
		SEL => SEL, -- al selector
		SIGNO => SIGNO -- a una seal de un bit
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U3: Operaciones lgicas
	U3: ENTITY WORK.LOGICAS PORT MAP(
		A => SA, -- a SENAL de A
		B => SB, -- a SENAL de B
		C => RESUL_LOG, -- a una seal de 8 bits
		SEL => SEL -- al selector
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U4: Conversor a decimal
	U4: ENTITY WORK.SHIFT_ADD3 PORT MAP(
		C => RESUL_ARIT,
		UNI => UNIint,
		DEC => DECint, 
		CEN => CENint 
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U5: Salida a Display LCD 2x16
	U5: ENTITY WORK.LIB_LCD_INTESC_REVD PORT MAP(
		CLK => CLK, --400Hz
		RS => RS, --
	   RW => RW,
	   ENA => ENA,
	   DATA_LCD => DATA_LCD, -- PUERTOS PARA EL LCD 
		NUMA => SA, --a SENAL de A
		NUMB => SB, --a SENAL de B: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		SEL => SEL,
		SIGNO => SIGNO,
		RESUL_LOG => RESUL_LOG,
		UNIint => UNIint,
		DECint => DECint,
		CENint => CENint
		);
	--------------------------------------------------------------------------------------------

end A_ALU;

