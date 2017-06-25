
class CfgPatches
{
	class caf_MP5
	{
		units[] = {};
		weapons[] = {"caf_MP5A5"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class SMG_02_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MP5_Base: SMG_02_base_F
	{
		scope = 0;
		magazines[] = {"30Rnd_9x19_MP5"};
		reloadAction = "GestureReloadSMG_01";
		cursor = "smg";
		discreteDistance[] = {100,200,300};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8.0;
		aiDispersionCoefX = 9.0;
		
		descriptionShort = "Mp5 A5";
		
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot{compatibleItems[] = {};};
			class PointerSlot{compatibleItems[] = {};};
		};
		
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
	};
	class caf_MP5A5: MP5_Base
	{
		scope = 2;
		model = "\caf_weapons\HKM5_A5.p3d";
		dexterity = 1000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
		};
		displayName = "MP5A5";
		picture = "\caf_weapons_t\inv\w_hkm5_a5_ca.paa";
		UiPicture = "\caf_weapons_t\inv\w_hkm5_a5_ca.paa";

		descriptionShort = "MP5A5 9mm";
	};
	
};
class cfgAmmo
{
	class BulletBase;
	class B_9x19_Ball: BulletBase
	{
		hit = 5;
		cartridge = "FxCartridge_9mm";
		cost = 100;
		typicalSpeed = 380;
		airFriction = -0.0014;
		caliber = 1.7;
		deflecting = 45;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		visibleFire = 3;
		audibleFire = 5;
	};
};

class cfgMagazines
{
	class CA_Magazine;
	class 30Rnd_9x19_MP5: CA_Magazine
	{
		scope = 2;
		curator = 2;
		displayName = "30rd MP5 9mm";
		initSpeed = 400;
		ammo = B_9x19_Ball;
		picture="\caf_weapons_t\inv\m_HKM5_CA.paa";
		descriptionShort = "30rd MP5 9mm";
	};
};