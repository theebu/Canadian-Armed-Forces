////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.02
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=13
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
	destructbuilding = 1
};

//Class C:/Program Files (x86)/Steam/SteamApps/common/Arma 3/@CAF/addons/caf_carlg/caf_carlg/config.bin{
class CfgPatches
{
	class CAF_M3
	{
		units[] = {};
		weapons[] = {"M3CG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgAmmo
{
	class RocketBase;
	class R_TBG32V_F;
	class R_PG32V_F;
	
	class HEDP_441 : R_TBG32V_F
	{
		sideairfriction = 0.075;
		thrust = 255;
		thrusttime = 0.4;
		timetolive = 10;
		maxspeed = 255;
		
	};

	class HEAT_551 : R_PG32V_F
	{
		model = "\caf_weapons\HEDP_fly.p3d";
		sideairfriction = 0.075;
		thrust = 255;
		thrusttime = 0.4;
		timetolive = 10;
		maxspeed = 255;
	};
	

};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class FFV551_HEAT: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "FFV551 HEAT";
		model = "\caf_weapons\HEAT_fly.p3d";
		modelSpecial = "\caf_weapons\M3CG_Loaded_HEAT.p3d";
		picture = "\caf_weapons_t\inv\HEAT.paa";
		descriptionShort = "84mm High Explosive Anti Tank Round";
		ammo = "HEAT_551";
		type = 2*        256;
        mass = 88.20;
		initSpeed = 255;
	};
	
	class FFV441_HEDP: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "FFV441 HEDP";
		model = "\caf_weapons\HEDP_Fly.p3d";
		modelSpecial = "\caf_weapons\M3CG_Loaded_HEDP.p3d";
		picture = "\caf_weapons_t\inv\HEDP.paa";
		descriptionShort = "84mm High Explosive Dual Purpose Round";
		ammo = "HEDP_441";
		type = 2*        256;
        mass = 72.77;
		initSpeed = 230;
	};
	
	class FFV469C_SMOKE : CA_LauncherMagazine
	{
		scope = 2;
		displayName = "FFV469C SMOKE";
		descriptionShort = "FFV469C Smoke Round";
		model = "\caf_weapons\HEDP_Fly.p3d";
		modelSpecial = "\caf_weapons\M3CG_Loaded_HEDP.p3d";
		ammo = "smokeShell";
		type = 2*        256;
        mass = 68.36;
		initSpeed = 230;
	};
	
	class FFV545C_ILLUM : CA_LauncherMagazine
	{
		scope = 2;
		displayName = "FFV545C ILLUM";
		descriptionShort = "84mm Illumination Round";
		model = "\caf_weapons\HEDP_Fly.p3d";
		modelSpecial = "\caf_weapons\M3CG_Loaded_HEDP.p3d";
		ammo = "F_40mm_White";
		type = 2*        256;
        mass = 71.83;
		initSpeed = 230;
	};
	
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CAF_M3CG: Launcher_Base_F
	{
	
		ace_overpressure_angle = 50;
		ace_overpressure_range = 12;
		ace_overpressure_damage = 0.7;
	
		scope = 2;
		displayName = "M3 Carl Gustav";
		model = "\CAF_weapons\M3CG";
		//modelSpecial = "\caf_weapons\CAF_M3CG_Loaded";
		handAnim[] = {"OFP2_ManSkeleton","\caf_weapons_c\anims\carlG.rtm"};
		modeloptics = "\caf_weapons\M3_optic_3x.p3d";
		visionMode[] = {"Normal"};
		
		maxZeroing = 900;
		weaponInfoType = "RscWeaponZeroing";
		distanceZoomMin = 100;
		distanceZoomMax = 900;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900};
		discreteDistanceInitIndex = 0;
		
		magazines[] = {"FFV551_HEAT","FFV441_HEDP"};
		magazineReloadTime = 3;
		sounds[] = {"StandardSound"};
		class StandardSound {
			begin1[] = {"\caf_weapons_s\84\carlGustav.ogg",10.0,1,1200};
			soundBegin[] = {"begin1", 1};
			weaponSoundEffect = "DefaultRifle";
		};
		//drySound[] = {"A3\sounds_f\weapons\other\dry6.wss",0.0316228,1,10};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1.wss",0.316228,1.5,700};
		picture = "\caf_weapons_t\inv\M2CG_x_ca.paa";
		recoil = "recoil_recoiless_weapon";
		minRange = 10;
		midRange = 450;
		maxRange = 900;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 400;
		inertia = 0.5;
		
		class Library
		{
			libTextDesc = "84mm Anti Tank Weapon";
		};
		descriptionShort = "M3CG";
		
	};
	
};

class CfgVehicles
{

		class B_AssaultPack_rgr;
	
		class B_caf_84_AmmoBag_HEAT : B_AssaultPack_rgr {
		
			displayName = "HEAT Ammo Bag";
			maximumload = 100;
			class TransportMagazines {
			
				class FFV551_HEAT {
					magazine = FFV551_HEAT;
					count = 2;
				};
			};
		};
		class B_caf_84_AmmoBag_HEDP : B_AssaultPack_rgr {
		
			displayName = "HEDP Ammo Bag";
			maximumload = 100;
			class TransportMagazines {
			
				class FFV441_HEDP {
					magazine = FFV441_HEDP;
					count = 2;
				};
			};
		};
};