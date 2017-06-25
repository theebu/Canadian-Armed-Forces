class CfgPatches
{
	class CAF_ELCAN
	{
		units[] = {};
		weapons[] = {"optic_elcan"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_Exp"};
	};
};
class SlotInfo;
class CowsSlot: SlotInfo
{
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
	compatibleItems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F"};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_elcan: ItemCore
	{
		displayName = "Elcan";
		scope = 2;
		scopeArsenal = 2;
		picture = "\caf_weapons_t\inv\elcan.paa";
		model = "\caf_weapons\elcan3d";
		descriptionShort = "Elcan";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			RMBhint = "Elcan";
			opticType = 1;
			optics = 1;
			modelOptics = "\caf_equip\optic";
			class OpticsModes
			{
				class battle
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Elcan: battle
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					memoryPointCamera = "opticEye";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
				};
			};
			/*class OpticsModes
			{
				class Elcan
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0723;
					opticsZoomMax = 0.0723;
					opticsZoomInit = 0.0723;
					memoryPointCamera = "opticeye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 800;
					discreteDistance[] = {300, 400, 500, 600, 700, 800};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
				};
				class battle: Elcan
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};*/
		};
	};
};