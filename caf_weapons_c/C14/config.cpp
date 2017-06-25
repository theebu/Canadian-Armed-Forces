class CfgPatches {
	class caf_c14 {
		requiredaddons[] = {"A3_Weapons_F","A3_Data_F"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"caf_c14"};
		magazines[] = {"5Rnd_338_Lapua", "5Rnd_338_Lapua_Tracer"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference

class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons 
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;	// External class reference
	};
	class c14_base : Rifle_Long_Base_F 
	{
		scope = 1;
		model = "caf_weapons\c14.p3d";
		picture = "\caf_weapons_t\inv\gear_tac300tan_x_ca.paa";
		magazines[] = {"5Rnd_338_Lapua", "5Rnd_338_Lapua_Tracer"};
		handAnim[] = {"OFP2_ManSkeleton", "caf_weapons_c\anims\tac300.rtm"};
		displayname = "C14 Timberwolf";
		descriptionshort = "C14 Timberwolf";
		reloadaction = "GestureReloadLRR";
		cursor = "srifle";
		
		dexterity = 1.2;
		initSpeed = 910;
		discretedistance[] = {100, 200, 300, 400};
		discretedistanceinitindex = 1;
		dispersion = 0.0001;
		
		distancezoommax = 300;
		distancezoommin = 300;
		
		optics = 0;
		opticsdisableperipherialvision = 0.67;
		opticsflare = 0;
		opticsid = 0;
		opticsppeffects[] = {};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		
		recoil = "assaultRifleBase";
		recoilprone = "assaultRifleBase";
		
		
		reloadtime = 0.95;
		
		selectionfireanim = "zasleh";
		weaponinfotype = "RscWeaponZeroing";
		weight = 0;
		
		class Library {
			libtextdesc = C14 Timberwolf;
		};
		
		class GunClouds {
			access = 0;
			cloudletaccy = 0;	// vertical acceleration
			cloudletalpha = 0.3;
			cloudletanimperiod = 1;	// animation speed
			cloudletcolor[] = {1, 1, 1, 0};
			cloudletduration = 0.05;	// time to live (not including fades)
			cloudletfadein = 0;	// fade-in time
			cloudletfadeout = 0.1;	// fade-out time
			cloudletgrowup = 0.05;	// grow-up time
			cloudletmaxyspeed = 100;
			cloudletminyspeed = -100;	// vertical speed range
			cloudletshape = "cloudletClouds";
			cloudletsize = 1;
			deltat = 0;
			initt = 0;
			interval = -0.02;
			size = 0.3;
			sourcesize = 0.02;	// size of area from which particles are emitted
			timetolive = 0;
			
			class Table {
				class T0 {
					color[] = {1, 1, 1, 0};
					maxt = 0;
				};
			};
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.45,0.38};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
				iconPosition[] = {0.35,0.5};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {"bipod_01_F_snd","bipod_01_F_blk","bipod_01_F_mtp","bipod_02_F_blk","bipod_02_F_tan","bipod_02_F_hex","bipod_03_F_blk","bipod_03_F_oli"};		
			};	
		};
		
		class GunParticles {
			class FirstEffect {
				directionname = "Konec hlavne";
				effectname = "RifleAssaultCloud";
				positionname = "Usti hlavne";
			};
			class SecondEffect {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 25};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 25};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 25};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 25};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 25};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.562341, 1, 20};
		reloadSound[] = {"caf_weapons_s\c14\TAC300_Bolt", 0.501187, 1, 10};
		reloadMagazineSound[] = {"caf_weapons_s\c14\TAC300_Reload", 0.501187, 1, 10};
		drySound[] = {"caf_weapons_s\c14\TAC300_Dry", 0.501187, 1, 20};
		modes[] = {"Single", "far_optic1", "medium_optic2", "far_optic2"};
		class Single : Mode_SemiAuto 
		{
			dispersion = 0.000125;
			reloadTime = 0.95;
			recoil = "recoil_single_ebr";
			recoilprone = "recoil_single_prone_ebr";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 1.77828, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3", 1.77828, 1, 10};
				closure3[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 1.77828, 1, 10};
				closure4[] = {"A3\sounds_f\weapons\closure\closure_rifle_3", 1.77828, 1, 10};
				soundClosure[] = {"closure1", 0.25, "closure2", 0.25, "closure3", 0.25, "closure4", 0.25};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"caf_weapons_s\c14\TAC300_s1", 1.77828, 1, 1200};
				begin2[] = {"caf_weapons_s\c14\TAC300_s2", 1.77828, 1, 1200};
				begin3[] = {"caf_weapons_s\c14\TAC300_s3", 1.77828, 1, 1200};
				begin4[] = {"caf_weapons_s\c14\TAC300_s4", 1.77828, 1, 1200};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",1.9952624,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",1.0,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 425;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		
		class far_optic1 : Single {
			showToPlayer = 0;
			minRange = 150;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			requiredOpticType = 1;
		};
		
		class medium_optic2 : Single {
			showToPlayer = 0;
			minRange = 250;
			minRangeProbab = 0.1;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 6.0;	// delay between shots at given distance
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		
		class far_optic2 : far_optic1 {
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 1050;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 8;	// delay between shots at given distance
			aiRateOfFireDistance = 2000;
			requiredOpticType = 2;
		};
	};
	
	class caf_c14 : c14_base {
		scope = 2;
		curator = 2;
		model = "\caf_weapons\c14.p3d";
		picture = "\caf_weapons_t\inv\gear_tac300tan_x_ca.paa";
		displayname = "C14 Timberwolf .338";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_weapons_t\tex\tac300_blk_co.paa"};
	};
	class caf_c14_od : c14_base {
		scope = 2;
		curator = 2;
		model = "\caf_weapons\c14.p3d";
		picture = "\caf_weapons_t\inv\gear_tac300tan_x_ca.paa";
		displayname = "C14 Timberwolf .338 (OD)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_weapons_t\tex\tac300_od_co.paa"};
	};
	class caf_c14_tan : c14_base {
		scope = 2;
		curator = 2;
		model = "\caf_weapons\c14.p3d";
		picture = "\caf_weapons_t\inv\gear_tac300tan_x_ca.paa";
		displayname = "C14 Timberwolf .338 (Tan)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_weapons_t\tex\tac300_tan_co.paa"};
	};
};
