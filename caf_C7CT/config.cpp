////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.21
//Mon Dec 09 15:35:12 2013 : Source 'file' date Mon Dec 09 15:35:12 2013
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=14
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	ordinalenum = 2,
	destructbuilding = 1
};

//Class C:/Program Files (x86)/Steam/SteamApps/common/Arma 3/@CAF/addons/caf_c7a2/caf_c7a2/config.bin{
class CfgPatches
{
	class caf_C7CT
	{
		units[] = {};
		weapons[] = {"caf_C7CT"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","caf_C8A3","caf_optics"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class c7ct_base: Rifle_Base_F
	{
		scope = 0;
		magazines[] = {"30Rnd_556X45_NATO","30Rnd_556x45_T_stanag","30rnd_556x45_stanag"};
		descriptionShort = "C7CT made by Colt Canada";
		reloadAction = "GestureReloadMX";
		reloadTime = 0.1;
		handAnim[] = {"OFP2_ManSkeleton","\caf_C7CT\data\Anim\c7ct.rtm"};
		picture = "\caf_C7CT\data\inv\C7CT_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Arco","optic_aco","optic_ACO_grn","optic_hamr","optic_Holosight","optic_carryhandle","optic_elcan","optic_SOS","optic_elcan_3d","optic_tws","optic_Nightstalker","optic_NVS"};
			};
			class PointerSlot: PointerSlot{};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01.wav",0.1,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02.wav",0.1,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03.wav",0.177828,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04.wav",0.177828,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01.wav",0.1,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02.wav",0.1,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03.wav",0.1,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04.wav",0.1,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01.wav",0.01,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02.wav",0.01,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03.wav",0.01,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04.wav",0.01,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"caf_C8A3\data\sound\c8_a1",1.77828,1,900};
			begin2[] = {"caf_C8A3\data\sound\c8_a2",1.77828,1,900};
			begin3[] = {"caf_C8A3\data\sound\c8_a3",1.77828,1,900};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wav",3.16228,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wav",3.16228,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.096;
			recoil = "recoil_single_sdar";
			recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.00093;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 20;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"caf_C8A3\data\sound\c8_a1",1.77828,1,900};
			begin2[] = {"caf_C8A3\data\sound\c8_a2",1.77828,1,900};
			begin3[] = {"caf_C8A3\data\sound\c8_a3",1.77828,1,900};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wav",3.16228,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wav",3.16228,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.07;
			recoil = "recoil_auto_sdar";
			recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.00093;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		drySound[] = {"A3\sounds_f\weapons\Other\dry6.wav",0.01,1};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\sdar\sdar_reload_2",0.398107,1,15};
		class Library
		{
			libTextDesc = "Colt Canada C7CT";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C7CT";
			onHoverText = "TODO C7CT DSS";
		};
	};
	class caf_C7CT: c7ct_base
	{
		scope = 2;
		displayname = "C7CT";
		model = "\caf_C7ct\C7CT.p3d";
		picture = "\caf_C7CT\data\inv\C7CT_i_Ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 40;
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
};
//};
