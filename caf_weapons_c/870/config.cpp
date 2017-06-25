
class CfgPatches
{
	class fs_wp
	{
		units[] = {};
		weapons[] = {"caf_870"};
		requiredAddons[] = {"A3_Weapons_F"};
	};
};


class cfgrecoils 
{
	recoil_shotgun[] = {0.04, 0.006*(  (9/7)), 0.05*.5*(  (9/7)), 0.04, 0.006*(  (9/7)), 0.05*.5*(  (9/7))};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		GestureReloadM4SSAS = "GestureReloadM4SSAS";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadM4SSAS[] = {"GestureReloadM4SSAS","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadM4SSAS[] = {"GestureReloadLRRProne","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadM4SSAS[] = {"GestureReloadLRRProne","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadM4SSAS[] = {"GestureReloadLRRProne","Gesture"};

		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadM4SSAS[] = {"GestureReloadLRRProne","Gesture"};
		};
	};
};
class PointerSlot;
class Mode_SemiAuto;	// External class reference		
class cfgweapons 
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class caf_870: Rifle_Base_F
	{
		scope = 2;
		model = "caf_weapons\870";
		picture = "caf_weapons_t\inv\870.paa";
		magazineReloadTime = 6;
		magazines[] = {"6Rnd_870_Slug_12GA", "6Rnd_870_BeanBag_12GA", "6Rnd_870_Buck_12GA"};
		iscreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{compatibleItems[] = {};};
			class CowsSlot{compatibleItems[] = {};};
			class PointerSlot: PointerSlot /// default accessories for this slot
			{
				iconPosition[] = {0.20, 0.45};
				iconScale = 0.25;
				compatibleItems[] ={"acc_flashlight"};
			};
		};
		reloadaction = "GestureReloadLRR";
		displayname = "Remington Model 870";
		modes[] = {"Single"};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.63095737,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.63095737,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.63095737,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.63095737,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.63095737,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.63095737,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.63095737,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.63095737,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.63095737,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.63095737,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.63095737,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.63095737,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1.0,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_dry",0.25118864,1,20};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.39810717,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.39810717,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Type115_Shot_SoundSet","Type115_Tail_SoundSet","Type115_interiorTail_SoundSet"};
			};
			
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 1;			
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil =          "recoil_single_primary_9outof10";
			recoilProne =     "recoil_single_primary_prone_8outof10";
		};
		
		handAnim[] = {"OFP2_ManSkeleton", "caf_weapons_c\Anims\M24.rtm"};
		
		class Library {
			libTextDesc = "The Remington Model 870 is a U.S.-made pump-action shotgun manufactured by Remington Arms Company, Inc. It is widely used by the public for sport shooting, hunting, and self-defense. It is also commonly used by law enforcement and military organizations worldwide.";
		};
	};	
};	