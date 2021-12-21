-- INSTITUTO POLITECNICO NACIONAL
-- 				UPIITA
-- AUTORES: SAUL CUEVAS MORALES
-- 			ALEXIS GONZALEZ ZUNIGA
-- SUMADOR/RESTADOR/MULTIPLICADOR/DIVISOR DE 4 BITS (U2)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity SRM is
port(
		A,B : IN STD_LOGIC_VECTOR(3 DOWNTO 0); --ENTRADAS A Y B
		SEL : IN STD_LOGIC_VECTOR(2 DOWNTO 0); -- +,-,*,/
		SIGNO : OUT STD_LOGIC;
		C : OUT STD_LOGIC_VECTOR(7 DOWNTO 0));
end SRM;

architecture A_SRM of SRM is
begin
PROCESS(A,B,SEL)
	variable q : STD_LOGIC_VECTOR(7 downto 0);
	variable res : STD_LOGIC_VECTOR(3 downto 0);
	variable I: integer range 0 to 15;
	BEGIN
		q := x"00";
		res := A-B;
		SIGNO <= '0';
		case SEL is --SELECTOR EN CODIGO GRAY
		when "000" => C <= ("0000"&A)+("0000"&B); --SUMA
		when "001" => 
			if(A>=B) then SIGNO <= '0'; C <= ("0000"&A)-("0000"&B); --RESTA POSITIVA
			else SIGNO <= '1'; C <= ("0000"&B)-("0000"&A); --RESTA negativo
			end if;
		when "011" => C <= A*B; --MULTIPLICACION
		when "010" => 
			--DIVISION
			C <= x"00";
			if(A>=B) then
				q := x"01";
				for i in 1 to 15 loop
					if(res>=B) then
						res := res - B;
						q := q + 1; 
					else C <= q;
					end if;
				end loop;
			else C <= x"00";
			end if;
		when others => C <= x"00";
		end case;
	END PROCESS;
end A_SRM;