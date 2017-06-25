#define SPEED_STATIC 1e10
class CfgMovesBasic
{
	class DeadState;
    class Crew;     // External class reference
	class DefaultDie;
	class ManActions
	{
		KIA_LAV25_Commander = "KIA_LAV25_Commander";
		KIA_LAV25_Driver = "KIA_LAV25_Driver";
		KIA_LAV25_Gunner = "KIA_LAV25_Gunner";
		
		LAV25_Commander = "LAV25_Commander";
		LAV25_Commander_Out = "LAV25_Commander_Out";
		
		LAV25_Driver = "LAV25_Driver";
		LAV25_Driver_Out = "LAV25_Driver_Out";
		
		LAV25_Gunner = "LAV25_Gunner";
		LAV25_Gunner_turnOut = "LAV25_Gunner_turnOut";
		
		caf_bison_pat = "caf_bison_pat";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		
		/*Patient Cargo*/
		class KIA_caf_bison_pat: DeadState 
		{
			actions = "DeadActions";
			file = "CAF_Bison\Data\Anim\bisonambpat.rtm";
			speed = 0.500000;
			looped = 0;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled = 0;
		};
		class caf_bison_pat: Crew
		{
			file = "CAF_Bison\Data\Anim\bisonambpat.rtm";
			interpolateTo[] = {KIA_caf_bison_pat,1};
		};
		
		/* Driver */
		
 		class KIA_LAV25_Driver: DefaultDie
		{
			actions = DeadActions;
			file="CAF_Bison\Data\Anim\kia_lav25_driver.rtm";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class LAV25_Driver: Crew
		{
			file="CAF_Bison\Data\Anim\lav25_driver.rtm";
			interpolateTo[]={KIA_LAV25_Driver,1};
		};
		class LAV25_Driver_out: Crew
		{
			file="CAF_Bison\Data\Anim\lav25_driver_turnout.rtm";
			interpolateTo[]={KIA_LAV25_Driver,1};
		};
		
		/* Commander */
		
		class KIA_LAV25_Commander: DeadState 
		{
			actions = "DeadActions";
			file = A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\KIA_APC_Wheeled_01_Commander.rtm;
			speed = 0.500000;
			looped = 0;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled = 0;
		};
		class LAV25_Commander: Crew 
		{
			file = "CAF_Bison\Data\Anim\lav25_commander.rtm";
			interpolateTo[] = {KIA_LAV25_Commander,1};
		};
		class LAV25_Commander_Out: LAV25_Commander 
		{
			file = "CAF_Bison\Data\Anim\lav25_commander_turnout.rtm";
			interpolateTo[] = {KIA_LAV25_Commander,1};
		};
		
		/* Gunner */
		
		class KIA_LAV25_Gunner: KIA_LAV25_Commander
		{
			file="A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\KIA_APC_Wheeled_01_Gunner.rtm";
		};
		class LAV25_Gunner: Crew
		{
			file="CAF_Bison\Data\Anim\lav25_commander.rtm";
			interpolateTo[]={KIA_LAV25_Gunner,1};
		};
		class LAV25_Gunner_turnout: Crew
		{
			file="CAF_Bison\Data\Anim\lav25_commander_turnout.rtm";
			interpolateTo[]={KIA_LAV25_Gunner,1};
		};
	};
};