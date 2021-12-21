----------------------------------------------------------------------------
--                     Instituto Politecnico Nacional                     --
--           Unidad Profesional Interdisciplinaria en Ingenieria          --
--                         y Tecnologias Avanzadas                        --
-- Materia: Dispositivos Lógicos Programables                             --
-- Proyecto Final: Brazo Robotico de 2 GDL controlado mediante un guante  --
--                 2 DOF Robot Arm controlled by means of a glove         --
-- Equipo: STRIK3R                                                        --
--         * Cisneros Noguez Alan Uriel                                   --
--         * Cuevas Morales Saul Asis                                     --
--         * Gonzalez Zuniga Alexis                                       --
--         * Luna García Bertin                                           --
----------------------------------------------------------------------------
library IEEE;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

entity top is
    Port ( clk : in  STD_LOGIC;
           boton_stop : in  STD_LOGIC;
           SDA : inout  STD_LOGIC;
           SCL : inout  STD_LOGIC;
           RS : out  STD_LOGIC;
           RW : out  STD_LOGIC;
           ENA : out  STD_LOGIC;
           DATA_LCD : out  STD_LOGIC_VECTOR (7 downto 0);
           PWM_gripper : out  STD_LOGIC;
           PWM_base : out  STD_LOGIC;
           ledsR : out  STD_LOGIC_VECTOR (7 downto 0);
           ledsG : out  STD_LOGIC_VECTOR (7 downto 0));
end top;

architecture robot_arm of top is
	signal gripper : std_logic_vector(14 downto 0);
	signal base : std_logic_vector(14 downto 0);
	signal pl : std_logic;
	constant clk_hz : real := 50.0e6; -- AMIIBA2_RevA
	constant pulse_hz : real := 50.0;
	constant min_pulse_us : real := 1000.0; 
	constant max_pulse_us : real := 2000.0; 
	constant step_bits : positive := 8; -- 0 to 255
	constant step_count : positive := 2**step_bits;
	signal gripper_int : integer range 0 to 255;
	signal base_int : integer range 0 to 255;
	
	component ADS1115 is 
   port(
		clk : in std_logic;
		boton_stop : in std_logic;
		SCL : out std_logic;
		SDA : inout std_logic;
		gripper, base : out std_logic_vector(14 downto 0);
		pausar_lectura : out std_logic
   );
  end component;
	
begin

	ledsR <= pl&pl&pl&pl&pl&pl&pl&pl;
	ledsG <= not(pl&pl&pl&pl&pl&pl&pl&pl);
	gripper_int <= to_integer(unsigned(gripper(14 downto 0)));
	base_int <= to_integer(unsigned(base(14 downto 0)));

	ADC : ADS1115
	port map (
    clk => clk,
    boton_stop => boton_stop,
    SCL => SCL,
	 SDA => SDA,
	 gripper => gripper,
	 base => base,
	 pausar_lectura => pl
	);

	Servo_Gripper : entity work.servo
	generic map (
    clk_hz => clk_hz,
    pulse_hz => pulse_hz,
    min_pulse_us => min_pulse_us,
    max_pulse_us => max_pulse_us,
    step_count => step_count
	)
	port map (
    clk => clk,
    rst => pl,
    position => gripper_int,
    pwm => PWM_gripper
	);
  
	Servo_Base : entity work.servo
	generic map (
    clk_hz => clk_hz,
    pulse_hz => pulse_hz,
    min_pulse_us => min_pulse_us,
    max_pulse_us => max_pulse_us,
    step_count => step_count
	)
	port map (
    clk => clk,
    rst => pl,
    position => base_int,
    pwm => PWM_base
	);
	
	LCD_16x2 : entity work.LIB_LCD_INTESC_REVD
	port map (
    CLK => clk,
    gripper => gripper,
    base => base,
    RS => RS,
	 RW => RW,
	 ENA => ENA,
	 DATA_LCD => DATA_LCD
	);

end robot_arm;

