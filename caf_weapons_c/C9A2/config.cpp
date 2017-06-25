class CfgPatches
{
	class CAF_C9A2
	{
		units[] = {};
		weapons[] = {"caf_c9a2"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class SlotInfo;
class CowsSlot;

class CfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class caf_c9a2: LMG_Mk200_F
	{
		
		deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
		hasBipod         = 1;          /// a weapon with bipod obviously has a bipod
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
		soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
		afmax = 0;
		aidispersioncoefx = 14;
		aidispersioncoefy = 14;
		descriptionshort = "Light machine gun <br/>Caliber: 5.56x45mm NATO";
		dexterity = 1.21;
		scope = 2;
		model = "\caf_weapons\C9A2_LMG.p3d";
		displayName = "C9A2";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		minRange = 2;
		midRange = 400;
		maxRange = 800;
		autoFire = "true";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		picture = "\caf_weapons_t\inv\c9a2_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx_afg.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 1;
		type = 1;
		magazines[] = {"200rnd_556x45_Belt","30Rnd_556x45_NATO"};
		reloadAction = "GestureReloadM200";
		reloadMagazineSound[] = {"caf_weapons_s\C9\reload", 0.446684, 1, 20};


		class WeaponSlotsInfo: WeaponSlotsInfo
		{	
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			mass = 40;
		};
		
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C9A2";
			onHoverText = "TODO C9A2 DSS";
		};
	};
	class caf_C9A2_e: caf_C9A2
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