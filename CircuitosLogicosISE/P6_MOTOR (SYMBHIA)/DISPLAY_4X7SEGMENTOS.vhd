-- INSTITUTO POLITECNICO NACIONAL
-- 				UPIITA
-- AUTORES: SAUL CUEVAS MORALES
-- 			ALEXIS GONZALEZ ZUNIGA
-- 7 SEGMENTOS
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity DISPLAY_4X7SEGMENTOS is
port(
		CLK 		: IN STD_LOGIC; 		--RELOJ DE 50MHz
		ENABLE 	: IN STD_LOGIC; 		--BOTON DE ENCENDIDO / APAGADO 
		
		SEG		:	OUT STD_LOGIC_VECTOR(15 DOWNTO 0);	--VECTOR PARA EL DISPLAY DE 7 SEGMENTOS Y ANODOS
		
		SENTIDO 	: INOUT STD_LOGIC		--BIT DETERMINANTE DEL SENTIDO "1" -> DERECHA, "0" -> IZQUIERDA
);	
end DISPLAY_4X7SEGMENTOS;

architecture Behavioral of DISPLAY_4X7SEGMENTOS is
signal SAL_FREC : STD_LOGIC;
signal conta: integer range 1 to 104_167:=1; 
signal conta_ulti : integer:=104_167;			--VALOR PARA 240Hz
signal disp: STD_LOGIC_VECTOR(1 DOWNTO 0):="00";	
begin
	--PROCESO PARA GENERAR SENAL DE 240Hz/4 = 60Hz
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
				CASE disp IS
					WHEN "00" => SEG <= "11110101"&"01111111";
					WHEN "01" => SEG <= "11110111"&"10111111";
					WHEN "10" => SEG <= "00001001"&"11011111";
					WHEN "11" => SEG <= "11010001"&"11101111";
					WHEN OTHERS => SEG <= "11111111"&"11111111";
				END CASE ;
			ELSE
				CASE disp IS
					WHEN "00" => SEG <= "11100011"&"01111111";
					WHEN "01" => SEG <= "01100001"&"10111111";
					WHEN "10" => SEG <= "01110001"&"11011111";
					WHEN "11" => SEG <= "11100001"&"11101111";
					WHEN OTHERS => SEG <= "11111111"&"11111111";
				END CASE ;
			END IF;
			IF (disp = "11") THEN disp <= "00";
			ELSE disp <= disp + "01";
			END IF;
		END IF;
	END PROCESS;

end Behavioral;

