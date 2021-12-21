library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity PRUEBA_top is
port(
		CLK: IN STD_LOGIC; --reloj de 50MHz
		KBD_COL: IN STD_LOGIC_VECTOR(3 DOWNTO 0); --COLUMNAS TECLADO
		KBD_FIL: OUT STD_LOGIC_VECTOR(3 DOWNTO 0); --FILAS TECLADO
		SEL: IN STD_LOGIC_VECTOR(2 DOWNTO 0); --SELECTOR CON CODIGO GRAY 0+,1-,2*,3/,4&,5|,6~,7^
		CAMBIO: IN STD_LOGIC; --SELECTOR PARA EL NUMERO AL QUE EL TECLADO MATRICIAL VA A CAMBIAR (A O B)
		
		LEDSW_R: OUT STD_LOGIC_VECTOR(7 DOWNTO 0); --LEDS DE LOS SWITCHES
		LEDSW_G: OUT STD_LOGIC_VECTOR(7 DOWNTO 0); --PARA LA AMIBA 2
		LEDSW_B: OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		
		RS 		: OUT STD_LOGIC;							--
		RW		  	: OUT STD_LOGIC;							--
		ENA 	  	: OUT STD_LOGIC;							--
		DATA_LCD : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)   --PUERTOS PARA EL LCD
);		
end PRUEBA_top;

architecture A_PRUEBA of PRUEBA_top is
SIGNAL IND : STD_LOGIC; --BANDERA DEL TECLADO
SIGNAL BOTON_PRES : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL SA : STD_LOGIC_VECTOR(3 downto 0); --NUMERO A DE 4 BITS
SIGNAL SB : STD_LOGIC_VECTOR(3 downto 0); --NUMERO B DE 4 BITS
begin
	LEDSW_R(6 downto 3) <= "0000"; LEDSW_G(6 downto 3) <= "0000"; LEDSW_B(6 downto 3) <= "0000";
	--------------------------------------------------------------------------------------------U1: Teclado 4X4
	U1: ENTITY WORK.LIB_TEC_MATRICIAL_4x4_INTESC_RevA PORT MAP(
		CLK => CLK, --RELOJ
		COLUMNAS => KBD_COL, -- a COLUMNAS DEL TECLADO
		FILAS => KBD_FIL, -- a FILAS DEL TECLADO
		BOTON_PRES => BOTON_PRES, --a SENAL DE BOTON
		IND => IND --a SENAL DE BANDERA
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U2: boton del teclado a binario
	U2: ENTITY WORK.KBDaBIN PORT MAP(
		CLK => CLK,
		BOTON_PRES => BOTON_PRES, --BOTON PRESIONADO EN EL TECLADO MATRICIAL
		CAMBIO => CAMBIO,
		A => SA, --SALIDA DE 4 BITS EN A
		B => SB  --SALIDA DE 4 BITS EN B
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U3: Salida a Display LCD 2x16
	U3: ENTITY WORK.LIB_LCD_INTESC_REVD PORT MAP(
		CLK => CLK, --400Hz
		RS => RS, --
	   RW => RW,
	   ENA => ENA,
	   DATA_LCD => DATA_LCD, -- PUERTOS PARA EL LCD 
		NUMA => SA, --a SENAL de A
		NUMB => SB, --a SENAL de B: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		SEL => SEL
--		SIGNO => SIGNO,
--		RESUL_LOG => RESUL_LOG,
--		UNIint => UNIint,
--		DECint => DECint,
--		CENint => CENint
		);
	--------------------------------------------------------------------------------------------
	PROCESS(CLK, CAMBIO, SEL) BEGIN
		IF(CAMBIO='1' and CLK'event and CLK='1') THEN LEDSW_R(7) <= '1'; LEDSW_G(7) <= '0'; LEDSW_B(7) <= '0';
		ELSIF(CAMBIO='0' and CLK'event and CLK='1') THEN LEDSW_R(7) <= '0'; LEDSW_G(7) <= '1'; LEDSW_B(7) <= '0';
		ELSE LEDSW_R(7) <= '0'; LEDSW_G(7) <= '0'; LEDSW_B(7) <= '0';
		END IF;
	END PROCESS;
		LEDSW_R(2 DOWNTO 0) <= SEL;
		LEDSW_G(2 DOWNTO 0) <= SEL;
		LEDSW_B(2 DOWNTO 0) <= SEL;
END A_PRUEBA;