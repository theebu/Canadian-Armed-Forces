class CfgPatches
{
	class caf_equip_c
	{
		units[] = {};
		weapons[] = {"caf_MNVG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F", "A3_characters_F"};
	};
};

class DefaultEventhandlers;	// External class reference
class CfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class HeadgearItem; // External class reference
	class NVGoggles;

	class caf_MNVG : NVGoggles 
	{
		displayName = "PVS 14";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\caf_equip\HMNVS_UP";
		picture = "\caf_equip_t\inv\INV_pvs14_CA.paa";
		descriptionUse = "$STR_A3_cfgweapons_Default_NVGoggles1";
		
		class Library 
		{
			libTextDesc = $STR_LIB_NV_GOGGLES;
		};
		descriptionShort = $STR_DSS_NV_GOGGLES;
		
		class ItemInfo 
		{
			type = 616;
			hmdType = 0;
			uniformModel = "caf_equip\HMNVS_DOWN.p3d";
			modelOff = "caf_equip\HMNVS_UP.p3d";
			mass = 4;
		};
	};
};