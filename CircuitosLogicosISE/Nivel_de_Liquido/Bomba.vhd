--
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;

entity Bomba is
    Port ( CLK : in STD_LOGIC;										--RELOJ
			  SENSORES : in  STD_LOGIC_VECTOR(7 DOWNTO 0);		--SENSORES DE NIVEL DE CONTENEDOR 1
           VUMMER : out  STD_LOGIC_VECTOR(7 DOWNTO 0);		--VUMETRO DE LEDS
           MOTOBOMBA : out  STD_LOGIC_VECTOR(1 DOWNTO 0);	--BITS PARA ENCENDER LA MOTOBOMBA
			  CONTENEDOR : in STD_LOGIC; 								--CONTENEDOR ES UN SENSOR DE SEGURIDAD PARA REVISAR SI ESTA VACIO EL CONTENEDOR 2 Y NO QUEMAR LA BOMBA
			  LEDCONTENEDOR : out STD_LOGIC
			  );
end Bomba;

architecture Behavioral of Bomba is
SIGNAL PWM : STD_LOGIC;
SIGNAL UP : INTEGER RANGE 1 TO 10; --"TIEMPO" EN ALTO
SIGNAL CONTA : INTEGER RANGE 0 TO 9; --CONTADOR
begin
	
	PROCESS(CLK) BEGIN
		IF RISING_EDGE(CLK) THEN
			IF CONTA=9 THEN 
				CONTA <= 0;
			ELSIF UP > CONTA THEN 
				PWM <= '1';
				CONTA <= CONTA + 1;
			ELSE
				PWM <= '0';
				CONTA <= CONTA + 1;
			END IF;
		END IF;
	END PROCESS;
	
	PROCESS(CLK, SENSORES) BEGIN
		IF RISING_EDGE(CLK) THEN
			IF(CONTENEDOR = '0') THEN MOTOBOMBA <= b"00"; UP <= 1; --EL CONTENEDOR 2 NO TIENE AGUA, NO SE ACTIVA LA BOMBA
			ELSE
				CASE SENSORES IS
					WHEN "00000000" => 
						UP <= 10;	--NIVEL MINIMO -> PRENDE LA BOMBA AL MAXIMO
						IF(PWM='1') THEN MOTOBOMBA <= b"10";
						ELSE MOTOBOMBA <= b"00";
						END IF;
					WHEN "00000001" => 
						UP <= 8;		--NIVEL BAJO -> PRENDE LA BOMBA AL 80%
						IF(PWM='1') THEN MOTOBOMBA <= b"10"; 
						ELSE MOTOBOMBA <= b"00";
						END IF;
					WHEN "00000011" => 
						UP <= 5;		--NIVEL BAJO -> PRENDE LA BOMBA AL 50%
						IF(PWM='1') THEN MOTOBOMBA <= b"10";
						ELSE MOTOBOMBA <= b"00";
						END IF;
					WHEN "00000111" => 
						UP <= 5;		--NIVEL BAJO -> PRENDE LA BOMBA AL 50%
						IF(PWM='1') THEN MOTOBOMBA <= b"10";
						ELSE MOTOBOMBA <= b"00";
						END IF;
					WHEN OTHERS => MOTOBOMBA <= b"00"; UP <= 1;
					END CASE;
			END IF;
		END IF;
	END PROCESS;
	
	VUMMER(7 DOWNTO 0) <= SENSORES(7 DOWNTO 0);
	LEDCONTENEDOR <= NOT(CONTENEDOR); --SE ENCIENDE SI EL CONTENEDOR ESTA VACIO
end Behavioral;
