-- INSTITUTO POLITECNICO NACIONAL
-- 				UPIITA
-- AUTORES: SAUL CUEVAS MORALES
-- 			ALEXIS GONZALEZ ZUNIGA
-- MOTOR A PASOS
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MOTOR is
port(
		CLK : IN STD_LOGIC; 							--RELOJ DE 50MHz
		ENABLE : IN STD_LOGIC; 						--BOTON DE ENCENDIDO / APAGADO 
		SEL : IN STD_LOGIC_VECTOR(1 DOWNTO 0); 	--SELECTOR CON CODIGO GRAY 4 VELOCIDADES
		
		SENTIDO : IN STD_LOGIC; --BIT QUE DIRIGE EL SENTIDO 
		
		MOTORAPA : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);	--SEAL DE 4 BITS PARA EL MOTOR A PASOS
		
		SAL_FREC : INOUT STD_LOGIC --SALIDA DE LA SEAL DE FRECUENCIA VARIABLE SEGUN EL SELECTOR
);	
end MOTOR;

architecture Behavioral of MOTOR is
signal conta: integer range 1 to 6_250_000:=1; 
signal conta_ulti : integer range 1 to 6_250_000:=1;
signal contmot : integer range 1 to 5:=1;
begin
	PROCESS (SEL) BEGIN
		CASE SEL IS
			WHEN "00"	=>		conta_ulti <= 6_250_000;	--4Hz
			WHEN "01"	=>		conta_ulti <= 312_500;	--80Hz
			WHEN "11"	=>		conta_ulti <= 156_250;	--160Hz
			WHEN "10"	=>		conta_ulti <= 25_000;	--1kHz
			WHEN OTHERS => 	conta_ulti <= 625_000;	--40Hz
		END CASE;
	END PROCESS;
	
	process (CLK) begin
		if rising_edge(CLK) then
			if (conta = conta_ulti) then
				SAL_FREC <= NOT(SAL_FREC);
				conta <= 1;
			else
				conta <= conta + 1;
			end if;
		end if;
	end process;
	
	PROCESS (SAL_FREC, SENTIDO, ENABLE) BEGIN
		IF (RISING_EDGE(SAL_FREC) AND ENABLE = '1') THEN
			IF (SENTIDO = '1') THEN
				CASE contmot IS
					WHEN	1		=>		MOTORAPA <= "1001";
					WHEN	2		=>		MOTORAPA <= "1100";
					WHEN	3		=>		MOTORAPA <= "0110";
					WHEN	4		=>		MOTORAPA <= "0011";
					WHEN OTHERS =>		MOTORAPA <= "0000";
				END CASE;
			ELSIF (SENTIDO = '0') THEN
				CASE contmot IS
					WHEN	1		=>		MOTORAPA <= "1001";
					WHEN	2		=>		MOTORAPA <= "0011";
					WHEN	3		=>		MOTORAPA <= "0110";
					WHEN	4		=>		MOTORAPA <= "1100";
					WHEN OTHERS =>		MOTORAPA <= "0000";
				END CASE;
			END IF;
			contmot <= contmot + 1;
		END IF;
		IF (CONTMOT > 4) THEN CONTMOT <= 1;
		END IF;
	END PROCESS;
end Behavioral;

