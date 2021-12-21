-- INSTITUTO POLITECNICO NACIONAL
-- 				UPIITA
-- AUTORES: SAUL CUEVAS MORALES
-- 			ALEXIS GONZALEZ ZUNIGA
-- MOTOR A PASOS QUE OSCILA ENTRE UNA DIRECCION Y OTRA CON CAMBIO DE VELOCIDAD
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity MOTOR_top is
port(
		CLK : IN STD_LOGIC; 							--RELOJ DE 50MHz
		ENABLE : IN STD_LOGIC; 						--BOTON DE ENCENDIDO / APAGADO 
		SEL : IN STD_LOGIC_VECTOR(1 DOWNTO 0); 	--SELECTOR CON CODIGO GRAY 4 VELOCIDADES
		
		SENSD : IN STD_LOGIC;						--SENSOR DE LA DERECHA
		SENSI : IN STD_LOGIC;						--SENSOR DE LA IZQUIERDA
		
		MOTORAPA : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);	--SEAL DE 4 BITS PARA EL MOTOR A PASOS
		
		LEDSW_R : OUT STD_LOGIC_VECTOR(7 DOWNTO 0); --LEDS DE LOS SWITCHES
		LEDSW_G : OUT STD_LOGIC_VECTOR(7 DOWNTO 0); --PARA LA AMIBA 2
		LEDSW_B : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		
		RS 		: OUT STD_LOGIC;								--
		RW		  	: OUT STD_LOGIC;								--
		ENA 	  	: OUT STD_LOGIC;								--
		DATA_LCD : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)   	--PUERTOS PARA EL LCD
);	
end MOTOR_top;

architecture Behavioral of MOTOR_top is
SIGNAL SENTIDO : STD_LOGIC;
begin
	LEDSW_R(6 downto 2) <= "00000"; LEDSW_G(6 downto 2) <= "00000"; LEDSW_B(6 downto 2) <= "00000"; --LEDS
	--------------------------------------------------------------------------------------------U1: BOTON
	U1: ENTITY WORK.BOTON PORT MAP(
		CLK => CLK,
		ENABLE => ENABLE,
		SENSI => SENSI,
		SENSD => SENSD,
		SENTIDO => SENTIDO
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U2: DISPLAY LCD 2x16
	U2: ENTITY WORK.LIB_LCD_INTESC_REVD PORT MAP(
		CLK => CLK, 
		RS => RS, --
	   RW => RW,
	   ENA => ENA,
	   DATA_LCD => DATA_LCD, -- PUERTOS PARA EL LCD 
		SENTIDO => SENTIDO,
		SEL => SEL
		);
	--------------------------------------------------------------------------------------------
	--******************************************************************************************
	--------------------------------------------------------------------------------------------U3: MOTOR Y CAMBIO DE VELOCIDAD
	U3: ENTITY WORK.MOTOR PORT MAP(
		CLK => CLK,
		ENABLE => ENABLE, 
		SENTIDO => SENTIDO,
		SEL => SEL,
		MOTORAPA => MOTORAPA
		);
	--------------------------------------------------------------------------------------------
	LEDSW_R(7) <=	NOT(ENABLE);
	LEDSW_G(7) <=	ENABLE;
	LEDSW_B(7) <= '0';
	LEDSW_R(1 DOWNTO 0) <= SEL;
	LEDSW_G(1 DOWNTO 0) <= SEL;
	LEDSW_B(1 DOWNTO 0) <= SEL;
end Behavioral;

