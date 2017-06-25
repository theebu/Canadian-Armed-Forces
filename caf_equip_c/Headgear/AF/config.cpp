class CfgPatches
{
	class caf_equip_rcaf_h
	{
		units[] = {};
		weapons[] = {"H_RCAF_PilotHelmetHeli","H_RCAF_CrewHelmetHeli","H_RCAF_CrewHelmetHeli_01","H_RCAF_CrewHelmetHeli_02","H_RCAF_CrewHelmetHeli_03"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class ItemInfo;
	
	class HeadgearItem;
	
	
	
	
	class H_HelmetB : ItemCore {
		class ItemInfo;	// External class reference
	};
	
	class H_PilotHelmetHeli_B : H_HelmetB {};
	
	class H_RCAF_PilotHelmetHeli : H_PilotHelmetHeli_B {
		displayName = "Heli Pilot Helmet";
		//model = "A3\Characters_F\Common\headgear_helmet_heli_visor_up";
		picture = "\A3\characters_f_beta\Data\UI\icon_H_I_helmet_heli_ca.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_heli_canada_co.paa"};
		
		class ItemInfo : ItemInfo {
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {2, 3};
		};
	};
	
	class H_CrewHelmetHeli_B : H_HelmetB {};
	
	class H_RCAF_CrewHelmetHeli : H_CrewHelmetHeli_B {
		displayName = "Heli Crew Helmet";
		scope = 2;
		picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli_shield";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_heli_canada_co.paa"};
		
		class ItemInfo : ItemInfo {
			mass = 60;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {3, 1};
			armor = 3*0.4;
			passThrough = 0.6;
		};
	};
	
	class H_RCAF_CrewHelmetHeli_01 : H_RCAF_CrewHelmetHeli {
	
		displayName = "Heli Crew Helmet (Skull 01)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_canadian_heli_altskull_heli_co.paa"};
	};
	class H_RCAF_CrewHelmetHeli_02 : H_RCAF_CrewHelmetHeli {
	
		displayName = "Heli Crew Helmet (Skull 02)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_canadian_heli_altskull2_co.paa"};
	};
	class H_RCAF_CrewHelmetHeli_03 : H_RCAF_CrewHelmetHeli {
	
		displayName = "Heli Crew Helmet (Skull 03)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_canadian_heli_altskull3_co.paa"};
	};
};
