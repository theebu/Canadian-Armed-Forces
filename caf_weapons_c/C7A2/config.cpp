class CfgPatches
{
	class caf_C7A2
	{
		units[] = {};
		weapons[] = {"caf_C7A2","caf_C7A2_M203"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAF_ELCAN","A3_Weapons_F","caf_weapons"};
	};
};

class SlotInfo;
class CowsSlot;
class CfgWeapons
{
	class Mk20_Base_F;
	class arifle_Mk20_F : Mk20_Base_F 
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class c7_base: arifle_Mk20_F
	{
		scope = 0;
		descriptionShort = "C7A2 made by Colt Canada";
		reloadAction = "GestureReloadSPAR_01";
		reloadTime = 0.15;
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		picture = "\caf_weapons_t\inv\C7A2_x_ca.paa";
		hiddenSelections[] = {"vert"};
		hiddenSelectionsTextures[] = {""};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot {};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
		};
		modes[] = {"Single","FullAuto"};

		class M203 : UGL_F {
			displayName = M203;
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3"};
			discreteDistanceInitIndex = 1;
			sound[] = {"A3\sounds_f\Weapons\grenades\ugl_shot_4", 1.12202, 1, 200};
			reloadMagazineSound[] = {"A3\sounds_f\Weapons\grenades\ugl_reload", 0.501187, 1, 20};
			reloadAction = "GestureReloadMk20UGL";
			drySound[] = {"A3\sounds_f\Weapons\other\sfx5", 1.0, 1, 30};
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		class Library
		{
			libTextDesc = "Colt Canada C7A2";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C7A2";
			onHoverText = "TODO C7A2 DSS";
		};
	};
	class caf_C7A2_M203: c7_base
	{
		scope = 2;
		model = "\caf_weapons\C7A2_M203.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"};
		muzzles[] = {"this","M203"};
		dexterity = 1.41;
		displayName = "C7A2 M203";
		descriptionShort = "C7A2 with M203 Undermount";
		picture = "\caf_weapons_t\inv\C7A2_m203_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class Library
		{
			libTextDesc = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
		};
		
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C7A2 M203";
			onHoverText = "TODO C7A2 M203 DSS";
		};
	};
	
	class caf_C7A2_M203_e: caf_C7A2_M203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	class caf_C7A2: c7_base
	{
		scope = 2;
		displayname = "C7A2";
		model = "\caf_weapons\C7A2.p3d";
		picture = "\caf_weapons_t\inv\C7A2_x_Ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 40;
		};
	};
	
	class caf_C7A2_e: caf_C7A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
};