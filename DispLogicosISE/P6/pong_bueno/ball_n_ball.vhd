library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity bat_n_ball is

Port ( v_sync : in STD_LOGIC;
	desactivado : in STD_LOGIC; --cancela el movimiento en x
	desactivado2 : in STD_LOGIC; --cancela el movimiento en y
	pixel_row : in STD_LOGIC_VECTOR(9 downto 0);
	pixel_col : in STD_LOGIC_VECTOR(9 downto 0);
	serve: in STD_LOGIC; -- inicia el movimiento
	red : out STD_LOGIC;
	green : out STD_LOGIC;
	blue : out STD_LOGIC);
end bat_n_ball;

architecture Behavioral of bat_n_ball is

signal reactivo : std_logic;

constant bsize: integer:=8; -- tamaño de la pelota en pixeles

-- distancia que se mueve la pelota
constant ball_speed: STD_LOGIC_VECTOR (9 downto 0) := CONV_STD_LOGIC_VECTOR (6,10);

signal ball_on: STD_LOGIC; -- indica la posición actual de la pelota
signal game_on: STD_LOGIC := '0'; -- indica cuando el movimiento inicia

-- posición actual de la pelota, en el centro de la pantalla
signal ball_x: STD_LOGIC_VECTOR(9 downto 0):= CONV_STD_LOGIC_VECTOR(320,10);
signal ball_y: STD_LOGIC_VECTOR(9 downto 0):= CONV_STD_LOGIC_VECTOR(240,10);

--movimiento actual de la pelota
signal ball_x_motion, ball_y_motion: STD_LOGIC_VECTOR(9 downto 0):= ball_speed;

begin

--red <= not bat_on; -- color setup for red ball and cyan bat on white background
green <= not ball_on;
blue <= not ball_on;

-- proceso para dibujar la pelota
balldraw: process (ball_x, ball_y, pixel_row, pixel_col) is
variable vx, vy: STD_LOGIC_VECTOR (9 downto 0);
begin
	if pixel_col <= ball_x then -- vx = |ball_x - pixel_col|
		vx := ball_x - pixel_col;
	else
		vx := pixel_col - ball_x;
	end if;
	
	if pixel_row <= ball_y then -- vy = ball_y - pixel_row|
		vy := ball_y - pixel_row;
	else
		vy := pixel_row - ball_y;
	end if;

	if((vx*vx) + (vy*vy)) < (bsize*bsize) then -- verifica si la distancia radial < bsize
		ball_on <= game_on;
	else
		ball_on <= '0';
	end if;
end process;

-- proceso para mover la pelota
mball: process
variable temp: STD_LOGIC_VECTOR (10 downto 0);
begin

wait until rising_edge(v_sync);

	if serve = '1' and game_on = '0' then -- inicia el movimiento
		game_on <= '1';
		ball_y_motion <= (not ball_speed) + 1;
	elsif ball_y <= bsize then -- rebote de la parte superior
		ball_y_motion <= ball_speed; --
	elsif ball_y + bsize >= 480 then -- rebote parte inferior
		ball_y_motion <= (not ball_speed) + 1; --
	elsif desactivado2 ='1' then
		ball_y_motion <= "0000000000";
	end if;

-- permite el movmiento en x de la pantalla
	if desactivado ='1' then --se desactiva el movimiento
		ball_x_motion <= "0000000000"; -- se coloca al centro de la pantalla
		reactivo <='1';
	elsif desactivado ='0' then -- movimiento activado
		reactivo <='0';
		if ball_x + bsize >= 640 then -- rebote de la pared derecha
			ball_x_motion <= (not ball_speed) +1;
		elsif ball_x <= bsize then -- rebote de la pared izquierda
			ball_x_motion <= ball_speed;
		end if;
	end if;
	
-- calcula la siguiente posición vertical
-- la variable temp agrega un bit mas al cálculo para arreglar los problemas
-- desbordamieto de signo
-- cuando ball_y es cercano a 0 y ball_y_motion es negativo
temp := ('0' & ball_y) + (ball_y_motion(9) & ball_y_motion);
	if game_on = '0' then ball_y <= CONV_STD_LOGIC_VECTOR(440,10);
	elsif temp(10) = '1' then ball_y <= (others=>'0');
	elsif reactivo ='1' then
		ball_y <= CONV_STD_LOGIC_VECTOR(0,10); -- coloca la pelota arriba
	else ball_y <= temp(9 downto 0);
	end if;

-- calcula la siguienteposición horizontal
-- la variable temp agrega un bit mas al cálculo para arreglar los problemas
-- desbordamieto de signo
-- cuando ball_x es cercano a 0 y ball_x_motion es negativo
temp := ('0' & ball_x) + (ball_x_motion(9) & ball_x_motion);
	if temp(10) = '1' then ball_x <= (others=>'0');
	elsif reactivo ='1' then -- reactiva movimiento
		ball_x <=CONV_STD_LOGIC_VECTOR(320,10); --pelota en medio
	else ball_x <= temp(9 downto 0);
	end if;
end process;
end Behavioral;
