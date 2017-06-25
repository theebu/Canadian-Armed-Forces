//#include "basicDefines.hpp"
#include "config_extra.hpp"
#include "config_functions.hpp"

class CfgVehicles
{
	class B_Parachute;	
	class Helicopter;	// External class reference	
	class Helicopter_Base_F : Helicopter 
	{
		class Turrets 
		{
			class MainTurret;	// External class reference
		};
	};
	class Helicopter_Base_H : Helicopter_Base_F 
	{
		class Turrets : Turrets 
		{
			class CopilotTurret;	// External class reference
			class MainTurret;	// External class reference
		};
		class AnimationSources;	// External class reference
		class Eventhandlers;	// External class reference
		class ViewOptics;	// External class reference
		class ViewPilot;	// External class reference
		class HitPoints;	// External class reference
		class NewTurret;	// External class reference
		class DefaultEventhandlers;
		class Reflectors 
		{
			class Right;	// External class reference
		};
		class RotorLibHelicopterProperties;	// External class reference
	};
    // CAF HELICOPTERS //	
	#include "\caf_rotary_wing_c\CH147\BAF_CH47_Armed_M240_Config.hpp"
	#include "\caf_rotary_wing_c\CH147\BAF_CH47_Armed_Ramp_Config.hpp"
	#include "\caf_rotary_wing_c\CH147\BAF_CH47_Unarmed_Config.hpp"	
};