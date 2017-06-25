class DefaultEventHandlers;
class CfgPatches
{
	class caf_tracked_c2a6
	{
		units[] = {"CAF_LeopardC2_TW","CAF_LeopardC2_AR","CAF_LeopardC2_AC"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F"};
	};
};
class CfgVehicles
{
	class I_MBT_03_BASE_F;
	class CAF_LeopardC2_TW: I_MBT_03_base_F
	{
		scope = 2;
		_generalMacro = "CAF_LeopardC2_TW";
		displayName = "Leopard C2A6";
		side = 1;
		crew = "CAF_crewman_TW";
		faction = "CAF_TW";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","HideHull","HideTurret","pasoffsetl","pasoffsetp"};
		hiddenSelectionsTextures[] = {"caf_tracked_t\tex\mbt_03_can01_co.paa","caf_tracked_t\tex\mbt_03_can02_co.paa","caf_tracked_t\tex\mbt_03_can_rcws_co.paa","caf_tracked_t\tex\mbt_03_can02_co.paa","caf_tracked_t\tex\mbt_03_can02_co.paa","caf_tracked_t\tex\mbt_03_track_co.paa","caf_tracked_t\tex\mbt_03_track_co.paa"};
		class EventHandlers {
		init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
	};
	class CAF_LeopardC2_AR: CAF_LeopardC2_TW
	{
		scope = 2;
		_generalMacro = "CAF_LeopardC2_AR";
		displayName = "Leopard C2A6";
		crew = "CAF_crewman_AR";
		faction = "CAF_AR";
	};
	class CAF_LeopardC2_AC: CAF_LeopardC2_TW
	{
		scope = 2;
		_generalMacro = "CAF_LeopardC2_AC";
		displayName = "Leopard C2A6";
		crew = "CAF_crewman_AC";
		faction = "CAF_AC";
	};

};
//};