class DefaultEventHandlers;
class CfgPatches
{
	class caf_tracked_m109a8
	{
		units[] = {"CAF_M109_TW","CAF_M109_AR","CAF_M109_AC"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F"};
	};
};
class CfgVehicles
{
	
	
	class B_MBT_01_arty_F;
	
	class CAF_M109_TW : B_MBT_01_arty_F 
	{
		scope = 2;
		_generalMacro = "CAF_M109_TW";
		displayName = "M109A8 Paladin";
		side = 1;
		availableforsupporttypes[] = {"Artillery"};
		crew = "CAF_crewman_TW";
		faction = "CAF_TW";
		hiddenselections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"caf_tracked_t\tex\mbt_cdn_body_co.paa","caf_tracked_t\tex\mbt_cdn_scorcher_co.paa","caf_tracked_t\tex\turret_cdn_co.paa"};
		
	};
	
	class CAF_M109_AR : CAF_M109_TW
	{
	
		_generalMacro = "CAF_M109_AR";
		crew = "CAF_crewman_AR";
		faction = "CAF_AR";
	};
	class CAF_M109_AC : CAF_M109_TW
	{
	
		_generalMacro = "CAF_M109_AC";
		crew = "CAF_crewman_AC";
		faction = "CAF_AC";
	};
};
//};