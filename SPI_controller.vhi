
-- VHDL Instantiation Created from source file SPI_controller.vhd -- 19:13:07 11/25/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT SPI_controller
	PORT(
		send : IN std_logic;
		clock : IN std_logic;
		data_in : IN std_logic_vector(31 downto 0);
		MISO : IN std_logic;
		force_cs : IN std_logic;
		command_type : IN std_logic_vector(1 downto 0);          
		data_out : OUT std_logic_vector(7 downto 0);
		CS : OUT std_logic;
		MOSI : OUT std_logic;
		SClK : OUT std_logic;
		busy : OUT std_logic;
		data_out_valid : OUT std_logic
		);
	END COMPONENT;

	Inst_SPI_controller: SPI_controller PORT MAP(
		send => ,
		clock => ,
		data_in => ,
		MISO => ,
		force_cs => ,
		command_type => ,
		data_out => ,
		CS => ,
		MOSI => ,
		SClK => ,
		busy => ,
		data_out_valid => 
	);


