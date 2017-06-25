class CfgPatches
{
	class caf_C8A3
	{
		units[] = {};
		weapons[] = {"caf_c8a3","caf_c8a3_m203","caf_c8a3_tw","caf_c8a3_m203_tw","caf_c8a3_ar","caf_c8a3_m203_ar","caf_c8a3_ac","caf_c8a3_m203_ac"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class SlotInfo;

class CfgWeapons
{
	class Mk20_Base_F;
	class arifle_Mk20C_F : Mk20_Base_F 
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class c8_base : arifle_Mk20C_F
	{
		scope = 0;
		descriptionShort = "C8A3 Carbine made by Colt Canada";
		reloadAction = "GestureReloadSPAR_01";
		reloadTime = 0.15;
		memoryPointCamera = "eye";
		cameraDir = "eye_dir";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		picture="\caf_weapons_t\inv\c8A3_x_ca.paa";
		hiddenSelections[] = {"vert"};
		hiddenSelectionsTextures[] = {""};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"CAF_muzzle_snds_556_blk"};
			};
		};

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
			libTextDesc = "Colt Canada C8A3";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = C8A3;
			onHoverText = "TODO C8A3 DSS";
		};
	};
	
	class caf_c8a3_M203 : c8_base
	{
		scope = 2;
		model = "\caf_weapons\C8A3_M203.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"};
		muzzles[] = {"this", "M203"};
		dexterity = 1.41;
		displayName = "C8A3 M203";
		descriptionShort = "C8A3 with M203 Undermount";
		picture = "\caf_weapons_t\inv\c8A3_m203_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class Library
		{
			libTextDesc = "";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
		};
		
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C8A3 M203";
			onHoverText = "TODO C8A3 M203 DSS";
		};
	};
	
	class caf_c8a3_M203_e : caf_c8a3_M203
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
	
	class caf_c8a3 : C8_Base
	{
		scope = 2;
		displayname = "C8A3";
		model = "\caf_weapons\C8A3.p3d";
		picture="\caf_weapons_t\inv\c8A3_x_ca.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 40;
		};	
		
	};
	
	class caf_c8a3_e : caf_c8a3
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
};