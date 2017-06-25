////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.91
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_
#include "CrewAnimations.hpp"
#include "basicDefines_A3.hpp"


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

class DefaultEventhandlers;
class Extended_Init_EventHandlers 
{
	class LAVIII_Base 
	{
		LAVIII_Base_Init = "this lock true";
	};
};
class CfgPatches
{
	class caf_wheeled
	{
		units[] = {"caf_wheeled_isc","caf_wheeled_eng","caf_wheeled_rss","caf_wheeled_isc_9c","caf_wheeled_isc_11B","caf_wheeled_eng_e11A","caf_wheeled_isc_11"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F","A3_Soft_F"};
	};
};
/****************   AMMO   *******************/

class CfgAmmo 
{
	class Grenade;
	//C6 and COAX:
	class B_762x51_Ball;
	class CAF_B_762x51_Ball: B_762x51_Ball {};
	//242 HE
	class B_30mm_HE_Tracer_Green;
	class CAF_LAV_B_25mm_HE_M242: B_30mm_HE_Tracer_Green {}; 
	//242 AP FSDS
	class B_30mm_APFSDS_Tracer_Yellow;
	class CAF_LAV_B_25mm_APFSDS_M242: B_30mm_APFSDS_Tracer_Yellow {}; 
	//242 AP 
	class B_30mm_AP_Tracer_Yellow; 
	class CAF_LAV_B_25mm_APDS_M242: B_30mm_AP_Tracer_Yellow {};
	//smokes
	class BulletBase;
	class SmokeLauncherAmmo: BulletBase {};
	class 76mm_smoke: SmokeLauncherAmmo {};
	//grenade dispensor
	class 76mm_grenade: Grenade {};
};

/****************   MAGAZINES   *******************/

class CfgMagazines 
{
	class SmokeLauncherMag; 

	class 76mm_Magazine_Smoke: SmokeLauncherMag 
	{
		count = 4;
		displayName = "76mm Smokes";
		ammo = "76mm_smoke";
		initSpeed = 15;
		scope = 2;
		nameSound = "smokeshell";
		value = 1;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		selectionFireAnim = "";
		maxLeadSpeed = 23;
	};
	class 76mm_Magazine_HE: 76mm_Magazine_Smoke 
	{
		count = 4;
		displayName = "76mm HE";
		ammo = "76mm_grenade";
		model = "\A3\weapons_F\ammo\mini_frag.p3d";
	};
	
	class 220rnd_762x51_Belt;
	
	class CAF_LAV_220Rnd_762x51mm_C6: 220rnd_762x51_Belt
	{
		ammo = "CAF_B_762x51_Ball";
		scope = 2;
		displayName = "C6-220Rnd-7.62mm";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort = "C6-220Rnd";
	};
	class CAF_LAV_440Rnd_762x51mm_COAX: CAF_LAV_220Rnd_762x51mm_C6 
	{
		count = 440;
		displayName = "COAX-440Rnd-7.62mm";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort = "COAX-440Rnd-7.62mm";
	};
	
	class 250Rnd_30mm_HE_shells;
	
	class CAF_LAV_150Rnd_25mm_HE_M242: 250Rnd_30mm_HE_shells
	{
		scope = 2;	
		ammo = "CAF_LAV_B_25mm_HE_M242";	
		initSpeed = 1100;	
		count = 150;
		displayName = "HEI-T/150Rnd";		
		descriptionShort = "HEI-T/150Rnd";		
	};
	class CAF_LAV_60Rnd_25mm_HE_M242: CAF_LAV_150Rnd_25mm_HE_M242
	{
		count = 60;
		displayName = "HEI-T/60Rnd";		
		descriptionShort = "HEI-T/60Rnd";		
	};
	
	class 60Rnd_30mm_APFSDS_shells;
	
	class CAF_LAV_150Rnd_25mm_APFSDS_M242: 60Rnd_30mm_APFSDS_shells 
	{
		count = 150;
		initSpeed = 1100;	
		ammo = "CAF_LAV_B_25mm_APFSDS_M242";
		displayName = "APFSDS-T/150Rnd";		
		descriptionShort = "APFSDS-T/150Rnd";			
	};
	class CAF_LAV_60Rnd_25mm_APFSDS_M242: CAF_LAV_150Rnd_25mm_APFSDS_M242 
	{
		count = 60;
		ammo = "CAF_LAV_B_25mm_APFSDS_M242";
		displayName = "APFSDS-T/60Rnd";		
		descriptionShort = "APFSDS-T/60Rnd";			
	};
	
	class 250Rnd_30mm_APDS_shells;
	
	class CAF_LAV_150Rnd_25mm_APDS_M242: 250Rnd_30mm_APDS_shells  
	{
		count = 150;
		initSpeed = 1100;	
		ammo = "CAF_LAV_B_25mm_APDS_M242";
		displayName = "APDS-T/150Rnd";		
		descriptionShort = "APDS-T/150Rnd";			
	};
	class CAF_LAV_60Rnd_25mm_APDS_M242: CAF_LAV_150Rnd_25mm_APDS_M242
	{
		count = 60;
		ammo = "CAF_LAV_B_25mm_APDS_M242";
		displayName = "APDS-T/60Rnd";		
		descriptionShort = "APDS-T/60Rnd";	
	};
};
class Mode_SemiAuto;
class Single;
class Mode_Burst: Mode_SemiAuto {};
class Mode_FullAuto: Mode_SemiAuto {};
class cfgWeapons 
{
////////////////////////////////////////////////	
	class SmokeLauncher;	
	
	class 76wegman: SmokeLauncher 
	{
		scope = 2;
		displayName = "76MM CM/HE";
		magazines[] = {"76MM_Magazine_Smoke","76MM_Magazine_HE"};
	};

		class 76wegman2: SmokeLauncher 
	{
		scope = 2;
		displayName = "76MM Grenades";
		magazines[] = {"76MM_Magazine_HE"};
	};

////////////////////////////////////////////////
	class caf_c6gpmg;
	class MGun;
	class LAVIII_C6: caf_c6gpmg 
	{
		scope = 2;
		magazines[] = {"CAF_LAV_220Rnd_762x51mm_C6"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Konec hlavne3";
				directionName = "Usti hlavne3";
			};
			class effect1
            {
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
                effectName = "MachineGunCartridge";
            };
		};
	};
	class LAVIII_COAX: LAVIII_C6 
	{
		displayName = "C6 GPMG COAX";
		magazines[] = {"CAF_LAV_440Rnd_762x51mm_COAX"};
		selectionFireAnim = "coaxend";
		shotFromTurret = 1;	
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Konec hlavne2";
				directionName = "Usti hlavne2";
			};
		};
	};
////////////////////////////////////////////////////////////////////////
	class gatling_30mm;
	class M242_Primary: gatling_30mm  
	{
		scope = 2;
		displayName = "M242 Primary";
		magazines[] = {"CAF_LAV_150Rnd_25mm_HE_M242","CAF_LAV_150Rnd_25mm_APFSDS_M242","CAF_LAV_150Rnd_25mm_APDS_M242"};
		modes[] = {"HighROF", "Single"};
		nameSound = "cannon";
		class HighROF: Mode_SemiAuto 
		{
			displayName = "Auto";
			sound[] = {"caf_wheeled_s\Sounds\M242_s",1.0,1,1000};
			//sound[] = {"A3\Sounds_F\weapons\gatling\gatling1v1",1.0,1,1000};
			weaponSoundEffect = "DefaultRifle";
			//burst = 1;
			soundContinuous = 0;
			reloadTime = 0.290000;
			flash = "gunfire";
			flashSize = 0.001000;
			//recoil = "Empty";
			maxLeadSpeed = 600;
			autoFire = 1;
			aiDispersionCoefX = 2;
			ffMagnitude = 0.200000;
			ffFrequency = 2;
			ffCount = 1;
			dispersion = 0.001000;
			minRange = 1;
			minRangeProbab = 0.100000;
			midRange = 1200;
			midRangeProbab = 0.700000;
			maxRange = 3000;
			maxRangeProbab = 0.040000;
		};
		class Single: HighROF 
		{
			displayName = "Single";
			burst = 1;
			multiplier = 1;
			reloadTime = 0.160000;
			autoFire = 0;
			aiRateOfFire = 0.250000;
		};
/*
		class manual: MGun
		{
			reloadTime = 0.3;
		};
*/
		class GunParticles
		{
			class Effect
			{
				effectName = "AutoCannonFired";
				positionName = "Konec hlavne";
				directionName = "Usti hlavne";
			};
		};
	};
	class M242_Secondary: M242_Primary
	{
		displayName = "M242 Secondary";
		magazines[] = {"CAF_LAV_60Rnd_25mm_HE_M242","CAF_LAV_60Rnd_25mm_APFSDS_M242","CAF_LAV_60Rnd_25mm_APDS_M242"};
	};
	class M242_Safe_Mode: M242_Primary
	{
		displayName = "M242 Safe Mode";
		magazines[] = {};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F {};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F {};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F {};
	class caf_wheeled_base: B_APC_Wheeled_01_cannon_F 
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_base";
		scope = 2;
		#include "sounds.hpp"
		#include "physx.hpp"
		#include "pip.hpp"
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_11a.paa","caf_wheeled_t\tex\caf_body01_co.paa","caf_wheeled_t\tex\caf_body02_co.paa","caf_wheeled_t\tex\caf_body03_co.paa","caf_wheeled_t\tex\caf_body04_co.paa","caf_wheeled_t\tex\hatches_co.paa","caf_wheeled_t\tex\stryker_alfa_ca.paa","caf_wheeled_t\tex\stryker_body2_co.paa"};
	};
	class caf_wheeled_isc: caf_wheeled_base 
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_isc_base";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 11A";
		attendant = 1;
		class Library
		{
			libTextDesc = "LAVIII ISC 11A";
		};
		model = "\caf_wheeled\caf_wheeled_isc.p3d";
		picture = "\caf_wheeled_t\tex\pic_LAV3_ca.paa";
		icon = "\caf_wheeled_t\tex\icon_LAV3_ca.paa";
		driverForceOptics = 0;
		driverOpticsModel = "";
		DriverAction = "LAV25_Driver_turnOut";
		DriverInAction = "LAV25_Driver";
		driverlefthandanimname = "drivewheel";
		driverleftleganimname = "drivewheel";
		destrType = DestructWreck;
		memorypointsgetindriver = "pos_Driver";
		memorypointsgetindriverdir = "pos_Driver_dir";
		memorypointsgetincargo = "pos_Cargo";
		memorypointsgetincargodir = "pos_Cargo_dir";
		getinradius = 3;
		getinaction = "GetInLow";
		getoutaction = "GetOutLow";
		
		transportmaxbackpacks = 13;
		transportmaxmagazines = 100;
		transportmaxweapons = 10;
		transportsoldier = 7;
		transportAmmo = 300000;
		supplyRadius = 7;
		selectionBackLights = "back_lights";
		selectionBrakeLights = "light_brake";		
		
		//cargogetinaction = "GetInLow";
		//cargogetoutaction = "GetOutLow";
		cargoAction[] = 
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic02"
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {2,2,2}; //{5,5,5};
				position = "Light_1_1_source";
				direction = "Light_1_1_target";
				hitpoint = "";
				selection = "Light_L";
				size = 1; //0.9;
				innerAngle = 40;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 0.5;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0; //0.3;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 1;
					hardLimitEnd = 100;
				};
			};
			class Right: Left
			{
				position = "Light_1_2_source";
				direction = "Light_1_2_target";
				hitpoint = "";
				selection = "Light_R";
			};
			class cargo_Light01
			{
				color[] 		= {1,0.1,0.1,1};		/// approximate colour of standard lights
				ambient[]		= {0.6,0,0.15,1};				/// nearly a white one
				position 		= "cargoL01_pos";				/// memory point for start of the light and flare
				direction 		= "cargoL01_dir";				/// memory point for the light direction
				hitpoint 		= "cargoL01";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "cargoL01";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 60;						/// angle of full light
				outerAngle 		= 60;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 0.7;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 0.7;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 1.5;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 1.5;		/// this allows adding more lights into scene
				};	
			};
			class cargo_Light02
			{
				color[] 		= {1,0.1,0.1,1};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "cargoL02_pos";				/// memory point for start of the light and flare
				direction 		= "cargoL02_dir";				/// memory point for the light direction
				hitpoint 		= "cargoL02";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "cargoL02";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 60;						/// angle of full light
				outerAngle 		= 60;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 0.8;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 0.7;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 1.5;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 1.5;		/// this allows adding more lights into scene
				};	
			};
			class cargo_Light03
			{
				color[] 		= {1,0.1,0.1,1};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "cargoL03_pos";				/// memory point for start of the light and flare
				direction 		= "cargoL03_dir";				/// memory point for the light direction
				hitpoint 		= "cargoL03";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "cargoL03";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 60;						/// angle of full light
				outerAngle 		= 60;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 0.8;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 0.7;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 1.5;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 1.5;		/// this allows adding more lights into scene
				};	
			};	
			class cargo_Light04
			{
				color[] 		= {1,0.1,0.1,1};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "cargoL04_pos";				/// memory point for start of the light and flare
				direction 		= "cargoL04_dir";				/// memory point for the light direction
				hitpoint 		= "cargoL04";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "cargoL04";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 60;						/// angle of full light
				outerAngle 		= 60;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 0.8;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 0.7;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 1.5;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 1.5;		/// this allows adding more lights into scene
				};	
			};	
			class cargo_Light05
			{
				color[] 		= {1,0.1,0.1,1};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "cargoL05_pos";				/// memory point for start of the light and flare
				direction 		= "cargoL05_dir";				/// memory point for the light direction
				hitpoint 		= "cargoL05";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "cargoL05";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 0.7;						/// size of the light point seen from distance
				innerAngle 		= 40;						/// angle of full light
				outerAngle 		= 40;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 0.8;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 0.7;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 1;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 1;		/// this allows adding more lights into scene
				};	
			};									
		};
		class AnimationSources
		{
			class muzzle_hide
			{
				source = "reload";
				weapon = "M242_Primary";
			};
			class muzzle_hide2
			{
				source = "reload";
				weapon = "M242_Secondary";
			};
			class userramp 
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class hatchCargo_1: userramp 
			{
				animPeriod = 0.500000;
			};
			class hatchCargo_2: hatchCargo_1 {};
			class recoil_source 
			{
				source = "recoil_source";
				weapon = "M242_Primary";
			};
			class recoil_source2: recoil_source 
			{
				source = "recoil_source";
				weapon = "M242_Secondary";
			};
			class HitLFWheel
			{
			source = "Hit";
			hitpoint = "HitLFWheel";
			raw = 1;
			};
			class HitLF2Wheel
			{
			source = "Hit";
			hitpoint = "HitLF2Wheel";
			raw = 1;
			};
			class HitLMWheel
			{
			source = "Hit";
			hitpoint = "HitLMWheel";
			raw = 1;
			};
			class HitLBWheel
			{
			source = "Hit";
			hitpoint = "HitLBWheel";
			raw = 1;
			};
			class HitRFWheel
			{
			source = "Hit";
			hitpoint = "HitRFWheel";
			raw = 1;
			};
			class HitRF2Wheel
			{
			source = "Hit";
			hitpoint = "HitRF2Wheel";
			raw = 1;
			};
			class HitRMWheel
			{
			source = "Hit";
			hitpoint = "HitRMWheel";
			raw = 1;
			};
			class HitRBWheel
			{
			source = "Hit";
			hitpoint = "HitRBWheel";
			raw = 1;
			};
		};
		class UserActions 
		{
			class OpenRamp 
			{
				displayName = "Open Ramp";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				condition = "(this animationPhase ""rampdoor"" == 0) AND Alive(this)"; 
				statement = "this animate [""rampdoor"",1];";
			};
			class CloseRamp : OpenRamp 
			{
				displayName = "Close Ramp";
				condition = "(this animationPhase ""rampdoor"" == 1) AND Alive(this)";
				statement = "this animate [""rampdoor"",0];";
			};
			class Open_HatchCargo_1 : CloseRamp	
			{
				displayName = "Open Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",1];";
			};
			class Close_HatchCargo_1 : Open_HatchCargo_1 
			{
				displayName = "Close Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",0];";
			};
			class Open_HatchCargo_2 : Close_HatchCargo_1 
			{
				displayName = "Open Right Hatch";
				condition = "(this animationPhase ""HatchCargo_2"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_2"",1];";
			};
			class  Close_HatchCargo_2 : Open_HatchCargo_2 
			{
				displayName = "Close Right Hatch";
				condition = "(this animationPhase ""HatchCargo_2"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_2"",0];";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext2.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext2_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext2_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_alpha.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_alpha_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_ext_alpha_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_int.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_int_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\APC_Wheeled_03_int_destruct.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\RCWS30.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\RCWS30_damage.rvmat",
				"a3\armor_f_gamma\APC_Wheeled_03\Data\RCWS30_destruct.rvmat"
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_NATO
			{
				magazine = "30Rnd_556x45_NATO";
				count = 25;
			};
			class _xx_30Rnd_556x45_T_stanag
			{
				magazine = "30Rnd_556x45_T_stanag";
				count = 25;
			};
			class _xx_200Rnd_556x45_belt
			{
				magazine = "200Rnd_556x45_belt";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 20;
			};
			class _xx_1Rnd_M72a6
			{
				magazine = "1Rnd_M72a6";
				count = 8;
			};
		};
		class TransportItems
		{

			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 14;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_caf_m72a6
			{
				weapon = "caf_m72a6";
				count = 8;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret 
					{
						animationsourcebody = "obsTurret";
						animationsourcecamelev = "";
						animationsourcegun = "obsGun";
						animationsourcehatch = "hatchCommander";
						body = "obsTurret";
						commanding = 2;
						gun = "obsGun";
						gunbeg = "pintleend";
						gunend = "pintlemuz";
						gunnergetinaction = "GetInHigh";
						gunnergetoutaction = "GetOutHigh";
						gunnername = "Commander";
						gunneropticseffect[] = {};
						gunneropticsmodel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerForceOptics = 1;
						gunneroutforceoptics = 0;
						gunneroutopticscolor[] = {0, 0, 0, 1};
						gunneroutopticseffect[] = {};
						gunneroutopticsmodel = "\A3\weapons_f\reticle\optics_empty";
						gunneroutopticsshowcursor = 1;
						gunnerAction = "LAV25_Commander_turnOut";
						gunnerInAction = "LAV25_Commander";
						gunnerlefthandanimname = "c6_barrel";
						gunnerrighthandanimname = "c6_grip";
						gunnerhasflares = 1;
						ingunnermayfire = 0;
						initelev = 0;
						initturn = 0;
						maxelev = 60;
						maxturn = 50;
						memorypointgun = "muzzleflash";
						memorypointgunneroptics = "commanderview";
						memorypointgunneroutoptics = "commander_out_view";
						memorypointsgetingunner = "pos_commander";
						memorypointsgetingunnerdir = "pos_commander_dir";
						minelev = -30;
						minturn = -50;
						outgunnermayfire = 1;
						primarygunner = 0;
						primaryobserver = 0;
						proxyindex = 2;
						proxytype = "CPGunner";
						selectionfireanim = "zasleh_1";
						soundservo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
						stabilizedinaxes = 0;
						turretInfoType = "RscWeaponRangeFinder";
						turretfollowfreelook = 0;
						viewgunnerinexternal = 1;
						weapons[] = 
						{
							"LAVIII_C6",
							"76wegman"
						};
						magazines[] = 
						{
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"76mm_Magazine_Smoke",
							"76mm_Magazine_Smoke",
						};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
						};
						class ViewGunner: ViewCargo 
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
						};
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.2;
								material = -1;
								name = "";
								visual = "";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
							class HitGun
							{
								armor = 0.2;
								material = -1;
								name = "";
								visual = "";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
						};
					};
				};
				body = "mainTurret";
				gun = "mainGun";
				gunbeg = "cannon_muzzle";
				gunend = "cannon_chamber";
				weapons[] = {"M242_Safe_Mode", "M242_Primary", "LAVIII_COAX", "M242_Secondary", "76wegman2", "Laserdesignator"};
				magazines[] = 
				{
					// M242 Primary
					"CAF_LAV_150Rnd_25mm_HE_M242", 
					"CAF_LAV_150Rnd_25mm_HE_M242",
					"CAF_LAV_150Rnd_25mm_APFSDS_M242", 
					"CAF_LAV_150Rnd_25mm_APFSDS_M242", 
					"CAF_LAV_150Rnd_25mm_APDS_M242",
					"CAF_LAV_150Rnd_25mm_APDS_M242",					

					// M242 Seconday
					"CAF_LAV_60Rnd_25mm_HE_M242", 
					"CAF_LAV_60Rnd_25mm_HE_M242", 	
					"CAF_LAV_60Rnd_25mm_APFSDS_M242", 
					"CAF_LAV_60Rnd_25mm_APDS_M242",

					// MGun - COAXIAL
					"CAF_LAV_440Rnd_762x51mm_coax", 
					"CAF_LAV_440Rnd_762x51mm_coax", 
					"CAF_LAV_440Rnd_762x51mm_coax", 
					"CAF_LAV_440Rnd_762x51mm_coax",

					// Grenade Canisters
					"76mm_Magazine_HE",
					"76mm_Magazine_HE",
					
					// Laser Designator Batteries
					"Laserbatteries"
				};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				commanding = 2;
				minElev = -10;
				initElev = 0;
				maxElev = 60;
				proxytype = "CPGunner";
				proxyIndex = 1;
				primarygunner = 1;
				gunnerAction = "LAV25_Commander_turnOut";
				gunnerInAction = "LAV25_Commander";
				gunnerGetInAction = "GetInHigh";//"GetInAMV_cargo";
				gunnerGetOutAction = "GetOutHigh";//"GetOutLow";
				gunnerhasflares = 1;
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel = "\caf_wheeled\prox\optika_laviii_gunner.p3d";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponRangeZeroing";
				memoryPointGunnerOptics = "gunnerview";
				memorypointsgetingunner = "pos_gunner";
				memorypointsgetingunnerdir = "pos_gunner_dir";
				memorypointsgetingunnerprecise = "pos_gunner";
				selectionFireAnim = "zasleh2";
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"TI","NVG","Normal"};
					thermalMode[] = {0,1,2,3};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov = 0.234;
						minFov = 0.234;
						maxFov = 0.234;
						gunnerOpticsModel = "\caf_wheeled\prox\optika_laviii_gunner2.p3d";
					};
					class Narrow1: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
						gunnerOpticsModel = "\caf_wheeled\prox\optika_laviii_gunner3.p3d";
					};
					class Narrow2: Wide
					{
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
						gunnerOpticsModel = "\caf_wheeled\prox\optika_laviii_gunner4.p3d";
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.4;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.2;
						minimalHit = 0.03;
						explosionShielding = 0.3;
						radius = 0.3;
					};
					class HitGun
					{
						armor = 0.2;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.3;
						radius = 0.15;
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				armor = 0.6;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.40;
				explosionShielding = 1;
				radius = 0.6;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.30;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.30;
				explosionShielding = 0.2;
				radius = 0.15;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_1_1_damper";
				visual = "";
				passThrough = 0.3;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_1_2_damper";
				visual = "";
				passThrough = 0.3;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_1_3_damper";
				visual = "";
				passThrough = 0.3;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_1_4_damper";
				visual = "";
				passThrough = 0.3;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_2_1_damper";
				visual = "";
				passThrough = 0.3;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_2_2_damper";
				visual = "";
				passThrough = 0.3;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_2_3_damper";
				visual = "";
				passThrough = 0.3;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.80;
				material = -1;
				name = "wheel_2_4_damper";
				visual = "";
				passThrough = 0.3;
			};
		};
		canFloat = 0;
		waterangulardampingcoef = 0;
		waterdamageengine = 0.2;
		waterleakiness = 0.5;
		waterlineardampingcoefx = 0;
		waterlineardampingcoefy = 0;
		waterppinvehicle = 1;
		waterresistance = 10;
		waterresistancecoef = 0.5;		
		threat[] = {1,1,0.3};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_11a.paa"};
	};
	class caf_wheeled_isc_11: caf_wheeled_isc 
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_isc_11";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 11";
		class Library
		{
			libTextDesc = "LAVIII ISC 11";
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_11.paa"};
	};
	class caf_wheeled_isc_11B: caf_wheeled_isc
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_isc_11B";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 11B";
		class Library
		{
			libTextDesc = "LAVIII ISC 11B";
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_11B.paa"};
	};
	class caf_wheeled_isc_9C: caf_wheeled_isc 
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_isc_9C";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 9C";
		class Library
		{
			libTextDesc = "LAVIII ISC 9C";
		};
		transportRepair = 200000;
		transportFuel = 3000;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_9C.paa"};
	};
	class caf_wheeled_RSS: caf_wheeled_isc 
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_RSS";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII RSS";
		class Library
		{
			libTextDesc = "LAVIII RSS";
		};
		model = "\caf_wheeled\caf_wheeled_rss.p3d";
		transportsoldier = 2;
		transportAmmo = 300;
		transportRepair = 200;
		transportFuel = 300;
		supplyRadius = 10;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_41.paa"};
		cargoAction[] = 
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic01",
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret 
					{
						animationsourcebody = "obsTurret";
						animationsourcecamelev = "";
						animationsourcegun = "obsGun";
						animationsourcehatch = "hatchCommander";
						body = "obsTurret";
						commanding = 2;
						gun = "obsGun";
						gunbeg = "pintleend";
						gunend = "pintlemuz";
						gunnergetinaction = "GetInHigh";
						gunnergetoutaction = "GetOutHigh";
						gunnername = "Commander";
						gunneropticseffect[] = {};
						gunneropticsmodel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerForceOptics = 0;
						gunneroutforceoptics = 0;
						gunneroutopticscolor[] = {0, 0, 0, 1};
						gunneroutopticseffect[] = {};
						gunneroutopticsmodel = "\A3\weapons_f\reticle\optics_empty";
						gunneroutopticsshowcursor = 0;
						gunnerAction = "LAV25_Commander_turnOut";
						gunnerInAction = "LAV25_Commander";
						ingunnermayfire = 1;
						initelev = 0;
						initturn = 0;
						maxelev = 20;
						maxturn = 100;
						memorypointgun = "muzzleflash";
						memorypointgunneroptics = "commanderview";
						memorypointgunneroutoptics = "commander_out_view";
						memorypointsgetingunner = "pos_commander";
						memorypointsgetingunnerdir = "pos_commander_dir";
						minelev = -4;
						minturn = -100;
						outgunnermayfire = 1;
						primarygunner = 0;
						primaryobserver = 0;
						proxyindex = 2;
						proxytype = "CPGunner";
						selectionfireanim = "zasleh_1";
						soundservo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
						stabilizedinaxes = 0;
						turretInfoType = "RscOptics_UAV_gunner"; //"RscWeaponRangeFinder";
						turretfollowfreelook = 0;
						viewgunnerinexternal = 1;
						weapons[] = 
						{
							"LAVIII_C6",
							"76wegman"
						};
						magazines[] = 
						{
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"76mm_Magazine_Smoke",
							"76mm_Magazine_Smoke",
							"76mm_Magazine_HE",
							"76mm_Magazine_HE"
						};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
						};
						class ViewGunner: ViewCargo 
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
						};
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.2;
								material = -1;
								name = "";
								visual = "";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
							class HitGun
							{
								armor = 0.2;
								material = -1;
								name = "";
								visual = "";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
						};
					};
					class LRSSOptics: NewTurret//: CommanderOptics 
					{
						animationsourcecamelev = "";//"camElev";
						animationsourcehatch = "";
						animationsourcebody = "lavrssTurret"; //"lavrssGun";
						animationsourcegun = "lavrssGun"; //"lavrssTurret";
						body = "lavrss_Turret";
						commanding = 0;
						gun = "lavrss_Gun";
						gunbeg = "gun_beg";
						gunend = "gun_end";
						gunnergetinaction = "GetInAMV_cargo";
						gunnergetoutaction = "GetOutLow";
						gunnername = "RSS Operator";
						gunneropticseffect[] = {};
						gunnerOpticsModel = "\caf_wheeled\prox\optika_laviii_gunner2.p3d";
						gunneroutforceoptics = 0;
						gunneroutopticscolor[] = {0, 0, 0, 1};
						gunneroutopticseffect[] = {};
						gunneroutopticsmodel = "\A3\weapons_f\reticle\optics_empty";
						gunneroutopticsshowcursor = 0;
						gunnerAction = "passenger_apc_generic01";
						gunnerInAction = "passenger_apc_generic01"; 
						gunnerdoor = "";
						gunnerhasflares = 0;
						gunnerforceoptics = 0;
						gunnercansee = "1+2+4+8+16+32";
						gunAxis = "lavrss_Main_axis";
						hideweaponsgunner = 1;
						memorypointgunneroptics = "lrssview";
						magazines[] = {"Laserbatteries"};
						memorypointgun = "gun_end";
						memorypointsgetingunner = "pos LAVRSS gunner";
						memorypointsgetingunnerdir = "pos LAVRSS Gunner Dir";
						outgunnermayfire = 1;
						primary = 0;
						primarygunner = 0;
						primaryobserver = 1;
						proxyindex = 3;
						proxytype = "CPGunner";
						showalltargets = 1;
						startengine = 0;
						soundservo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
						stabilizedinaxes = 0;
						turretfollowfreelook = 0;
						turretInfoType = "RscOptics_UAV_gunner";
						turretAxis="lavrss_turret_axis";
						viewgunnerinexternal = 1;
						weapons[] = {"Laserdesignator_mounted"};			
						class ViewOptics: ViewOptics 
						{
							initanglex = 0;
							initangley = 0;
							initfov = 0.3;
							maxanglex = 30;
							maxangley = 100;
							maxfov = 1.0;
							maxmovex = 0;
							maxmovey = 0;
							maxmovez = 0;
							minanglex = -30;
							minangley = -100;
							minfov = 0.01;
							minmovex = 0;
							minmovey = 0;
							minmovez = 0;	
							visionMode[] = {"Normal","TI","NVG"};
							thermalMode[] = {0,1,2,3,4,5,6,7};
						};
						class ViewGunner: ViewCargo 
						{
							initanglex = 5;
							initangley = 0;
							initfov = 0.7;
							maxanglex = 85;
							maxangley = 150;
							maxfov = 0.85;
							maxmovex = 0;
							maxmovey = 0;
							maxmovez = 0;
							minanglex = -85;
							minangley = -150;
							minfov = 0.42;
							minmovex = 0;
							minmovey = 0;
							minmovez = 0;
						};
						minElev	= -20; minTurn	= -360; 
						maxElev = +20; maxTurn = 360; 
						initElev = 0; initTurn = 0;
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.2;
								material = -1;
								name = "recce";
								visual = "recce";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
							class HitGun
							{
								armor = 0.2;
								material = -1;
								name = "recce2";
								visual = "recce2";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
						};
					};
				};
			};
		};
		class RenderTargets: RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";

				class View01
				{
					pointPosition= "lrssview";
					pointDirection= "lrssview_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.7;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class UserMast 
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class muzzle_hide
			{
				source = "reload";
				weapon[] = {"M242_Primary"};
			};
			class muzzle_hide2
			{
				source = "reload";
				weapon[] = {"M242_Secondary"};
			};
			class userramp 
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class hatchCargo_1: userramp 
			{
				animPeriod = 10;
			};
			class hatchCargo_2: hatchCargo_1 
			{
				animPeriod = 2;
			};
			class recoil_source 
			{
				source = "recoil";
				weapon[] = {"M242_Primary"};
			};
			class recoil_source2: recoil_source 
			{
				source = "recoil";
				weapon[] = {"M242_Secondary"};
			};
			class HitLFWheel
			{
			source = "Hit";
			hitpoint = "HitLFWheel";
			raw = 1;
			};
			class HitLF2Wheel
			{
			source = "Hit";
			hitpoint = "HitLF2Wheel";
			raw = 1;
			};
			class HitLMWheel
			{
			source = "Hit";
			hitpoint = "HitLMWheel";
			raw = 1;
			};
			class HitLBWheel
			{
			source = "Hit";
			hitpoint = "HitLBWheel";
			raw = 1;
			};
			class HitRFWheel
			{
			source = "Hit";
			hitpoint = "HitRFWheel";
			raw = 1;
			};
			class HitRF2Wheel
			{
			source = "Hit";
			hitpoint = "HitRF2Wheel";
			raw = 1;
			};
			class HitRMWheel
			{
			source = "Hit";
			hitpoint = "HitRMWheel";
			raw = 1;
			};
			class HitRBWheel
			{
			source = "Hit";
			hitpoint = "HitRBWheel";
			raw = 1;
			};
		};
		class UserActions: userActions 
		{
			class OpenRamp 
			{
				displayName = "Open Ramp";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				condition = "(this animationPhase ""rampdoor"" == 0) AND Alive(this)"; 
				statement = "this animate [""rampdoor"",1];";
			};
			class CloseRamp : OpenRamp 
			{
				displayName = "Close Ramp";
				condition = "(this animationPhase ""rampdoor"" == 1) AND Alive(this)";
				statement = "this animate [""rampdoor"",0];";
			};
			class Open_HatchCargo_1 : CloseRamp	
			{
				displayName = "Open Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",1];";
			};
			class Close_HatchCargo_1 : Open_HatchCargo_1 
			{
				displayName = "Close Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",0];";
			};
			class Open_HatchCargo_2 : Close_HatchCargo_1 
			{
				displayName = "Open Right Hatch";
				condition = "(this animationPhase ""HatchCargo_2"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_2"",1];";
			};
			class  Close_HatchCargo_2 : Open_HatchCargo_2 
			{
				displayName = "Close Right Hatch";
				condition = "(this animationPhase ""HatchCargo_2"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_2"",0];";
			};
  			class ExtendMast
			{
    			displayName = "Extend Mast";
				position = "pos_cargo";
    			onlyforplayer = 1;
        		radius = 7;
				condition	= "((this animationPhase 'HatchCargo_1') == 0) AND ((this animationPhase 'MAST5') == 0) AND ((this animationPhase 'MAST4') == 0) AND ((this animationPhase 'MAST3') == 0) AND ((this animationPhase 'MAST2') == 0) AND Alive(this)";//AND driver this == player";
 				statement	= "this animate [""HatchCargo_1"",1];this animate [""MAST5"",1];this animate [""MAST4"",1];this animate [""MAST3"",1];this animate [""MAST2"",1];";				
   			};
  			class RetractMast : ExtendMast 
			{
    			displayName = "Retract Mast";
				condition	= "((this animationPhase 'HatchCargo_1') == 1) AND ((this animationPhase 'MAST5') == 1) AND ((this animationPhase 'MAST4') == 1) AND ((this animationPhase 'MAST3') == 1) AND ((this animationPhase 'MAST2') == 1) AND Alive(this)";// AND driver this == player";
 				statement	= "this animate [""MAST5"",0];this animate [""MAST4"",0];this animate [""MAST3"",0];this animate [""MAST2"",0];this animate [""HatchCargo_1"",0];";				
			};
   		};
	};
	class caf_wheeled_eng: caf_wheeled_isc 
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_eng";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAV3-Eng-E11";
		class Library
		{
			libTextDesc = "LAVIII RSS";
		};
		model = "\caf_wheeled\caf_wheeled_eng.p3d";
		transportmaxbackpacks = 13;
		transportmaxmagazines = 100;
		transportmaxweapons = 10;
		transportsoldier = 10;
		transportAmmo = 300;
		transportRepair = 200;
		transportFuel = 300;
		supplyRadius = 7;
		hiddenSelections[] = {"camo1"};
		//hiddenselectionsmaterials[] = {"caf_wheeled\mat\camo1_11.rvmat"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_E11.paa"};
		cargoAction[] =
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03",
			"passenger_apc_generic02"
		};
		class UserActions: userActions 
		{
			class OpenRamp 
			{
				displayName = "Open Ramp";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				condition = "(this animationPhase ""rampdoor"" == 0) AND Alive(this)"; 
				statement = "this animate [""rampdoor"",1];";
			};
			class CloseRamp : OpenRamp 
			{
				displayName = "Close Ramp";
				condition = "(this animationPhase ""rampdoor"" == 1) AND Alive(this)";
				statement = "this animate [""rampdoor"",0];";
			};
			class Open_HatchCargo_1 : CloseRamp	
			{
				displayName = "Open Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",1];";
			};
			class Close_HatchCargo_1 : Open_HatchCargo_1 
			{
				displayName = "Close Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",0];";
			};
   		};
		class Turrets
		{
			class CommanderOptics: NewTurret 
			{
				animationsourcebody = "obsTurret";
				animationsourcecamelev = "";
				animationsourcegun = "obsGun";
				animationsourcehatch = "hatchCommander";
				body = "obsTurret";
				commanding = 1;
				gun = "obsGun";
				gunbeg = "pintleend";
				gunend = "pintlemuz";
				gunnergetinaction = "GetInHigh";
				gunnergetoutaction = "GetOutHigh";
				gunnername = "Commander";
				gunneropticseffect[] = {};
				gunneropticsmodel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerForceOptics = 0;
				gunneroutforceoptics = 0;
				gunneroutopticscolor[] = {0, 0, 0, 1};
				gunneroutopticseffect[] = {};
				gunneroutopticsmodel = "\A3\weapons_f\reticle\optics_empty";
				gunneroutopticsshowcursor = 0;
				gunnerAction = "Stryker_GunnerOut"; //"commander_apcwheeled1_out";
				gunnerInAction = "Stryker_Gunner"; //"commander_apcwheeled1_in";
				ingunnermayfire = 1;
				initelev = 0;
				initturn = 0;
				maxelev = 45;
				maxturn = 180;
				memorypointgun = "muzzleflash";
				memorypointgunneroptics = "commanderview";
				memorypointgunneroutoptics = "commander_out_view";
				memorypointsgetingunner = "pos_commander";
				memorypointsgetingunnerdir = "pos_commander_dir";
				minelev = -30;
				minturn = -180;
				outgunnermayfire = 1;
				primary = 1;
				primarygunner = 1;
				primaryobserver = 1;
				proxyindex = 1;
				proxytype = "CPGunner";
				selectionfireanim = "zasleh_1";
				soundservo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
				stabilizedinaxes = 0;
				turretInfoType = "RscWeaponRangeFinder";
				turretfollowfreelook = 0;
				viewgunnerinexternal = 1;
				weapons[] = {"LAVIII_C6","SmokeLauncher","76wegman"};
				magazines[] = {"CAF_LAV_220Rnd_762x51mm_C6","CAF_LAV_220Rnd_762x51mm_C6","CAF_LAV_220Rnd_762x51mm_C6","CAF_LAV_220Rnd_762x51mm_C6","76mm_Magazine_Smoke","76mm_Magazine_Smoke","76mm_Magazine_Smoke","76mm_Magazine_Smoke","76mm_Magazine_HE","76mm_Magazine_HE"};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.5;
					minFov = 0.01;
					maxFov = 1.00;
					visionMode[] = {"Normal","TI"};
					thermalMode[] = {0,1};
				};
				class ViewGunner: ViewCargo 
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -180;
					maxAngleY = 180;
					initFov = 1.00;
					minFov = 0.9;
					maxFov = 1.00;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						material = -1;
						name = "";
						visual = "";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 0.2;
						material = -1;
						name = "";
						visual = "";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.2;
					};
				};
			};
		};
	};
	class caf_wheeled_eng_E11A: caf_wheeled_eng
	{
		author = "CAF";
		_generalMacro = "caf_wheeled_eng_E11A";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAV3-Eng-E11A";
		class Library
		{
			libTextDesc = "LAV3-Eng-E11";
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_E11A.paa"};
	};
	
// Arid Versions

	class caf_AR_lav3_ISC: caf_wheeled_isc 
	{
		author = "CAF";
		_generalMacro = "caf_AR_lav3_base";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 11A(AR)";
		class Library
		{
			libTextDesc = "LAVIII ISC 11";
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_11a.paa","caf_wheeled_t\tex\ar\caf_body01_co.paa","caf_wheeled_t\tex\ar\caf_body02_co.paa","caf_wheeled_t\tex\ar\caf_body03_co.paa","caf_wheeled_t\tex\ar\caf_body04_co.paa","caf_wheeled_t\tex\ar\hatches_co.paa","caf_wheeled_t\tex\ar\stryker_alfa_ca.paa","caf_wheeled_t\tex\ar\stryker_body2_co.paa"};
	};


	class caf_AR_lav3_isc_11: caf_AR_lav3_ISC 
	{
		author = "CAF";
		_generalMacro = "caf_AR_lav3_isc_11";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 11(AR)";
		class Library
		{
			libTextDesc = "LAVIII ISC 11";
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_11.paa","caf_wheeled_t\tex\ar\caf_body01_co.paa","caf_wheeled_t\tex\ar\caf_body02_co.paa","caf_wheeled_t\tex\ar\caf_body03_co.paa","caf_wheeled_t\tex\ar\caf_body04_co.paa","caf_wheeled_t\tex\ar\hatches_co.paa","caf_wheeled_t\tex\ar\stryker_alfa_ca.paa","caf_wheeled_t\tex\ar\stryker_body2_co.paa"};
	};
	class caf_AR_lav3_isc_11B: caf_AR_lav3_ISC
	{
		author = "CAF";
		_generalMacro = "caf_AR_lav3_isc_11B";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 11B(AR)";
		class Library
		{
			libTextDesc = "LAVIII ISC 11B";
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_11B.paa","caf_wheeled_t\tex\ar\caf_body01_co.paa","caf_wheeled_t\tex\ar\caf_body02_co.paa","caf_wheeled_t\tex\ar\caf_body03_co.paa","caf_wheeled_t\tex\ar\caf_body04_co.paa","caf_wheeled_t\tex\ar\hatches_co.paa","caf_wheeled_t\tex\ar\stryker_alfa_ca.paa","caf_wheeled_t\tex\ar\stryker_body2_co.paa"};
	};
	class caf_AR_lav3_isc_9C: caf_AR_lav3_ISC 
	{
		author = "CAF";
		_generalMacro = "caf_AR_lav3_isc_9C";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII ISC 9C(AR)";
		class Library
		{
			libTextDesc = "LAVIII ISC 9C";
		};
		transportRepair = 200000;
		transportFuel = 3000;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_9C.paa","caf_wheeled_t\tex\ar\caf_body01_co.paa","caf_wheeled_t\tex\ar\caf_body02_co.paa","caf_wheeled_t\tex\ar\caf_body03_co.paa","caf_wheeled_t\tex\ar\caf_body04_co.paa","caf_wheeled_t\tex\ar\hatches_co.paa","caf_wheeled_t\tex\ar\stryker_alfa_ca.paa","caf_wheeled_t\tex\ar\stryker_body2_co.paa"};
	};
	class caf_AR_lav3_RSS: caf_AR_lav3_ISC 
	{
		author = "CAF";
		_generalMacro = "caf_AR_lav3_RSS";
		scope = 2;
		accuracy = 0.3;
		displayName = "LAVIII RSS(AR)";
		class Library
		{
			libTextDesc = "LAVIII RSS";
		};
		model = "\caf_wheeled\caf_wheeled_rss.p3d";
		transportsoldier = 2;
		transportAmmo = 300;
		transportRepair = 200;
		transportFuel = 300;
		supplyRadius = 10;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_41.paa","caf_wheeled_t\tex\ar\caf_body01_co.paa","caf_wheeled_t\tex\ar\caf_body02_co.paa","caf_wheeled_t\tex\ar\caf_body03_co.paa","caf_wheeled_t\tex\ar\caf_body04_co.paa","caf_wheeled_t\tex\ar\hatches_co.paa","caf_wheeled_t\tex\ar\stryker_alfa_ca.paa","caf_wheeled_t\tex\ar\stryker_body2_co.paa"};
		cargoAction[] = 
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic01",
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret 
					{
						animationsourcebody = "obsTurret";
						animationsourcecamelev = "";
						animationsourcegun = "obsGun";
						animationsourcehatch = "hatchCommander";
						body = "obsTurret";
						commanding = 2;
						gun = "obsGun";
						gunbeg = "pintleend";
						gunend = "pintlemuz";
						gunnergetinaction = "GetInHigh";
						gunnergetoutaction = "GetOutHigh";
						gunnername = "Commander";
						gunneropticseffect[] = {};
						gunneropticsmodel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerForceOptics = 0;
						gunneroutforceoptics = 0;
						gunneroutopticscolor[] = {0, 0, 0, 1};
						gunneroutopticseffect[] = {};
						gunneroutopticsmodel = "\A3\weapons_f\reticle\optics_empty";
						gunneroutopticsshowcursor = 0;
						gunnerAction = "LAV25_Commander_turnOut";
						gunnerInAction = "LAV25_Commander";
						ingunnermayfire = 1;
						initelev = 0;
						initturn = 0;
						maxelev = 20;
						maxturn = 100;
						memorypointgun = "muzzleflash";
						memorypointgunneroptics = "commanderview";
						memorypointgunneroutoptics = "commander_out_view";
						memorypointsgetingunner = "pos_commander";
						memorypointsgetingunnerdir = "pos_commander_dir";
						minelev = -4;
						minturn = -100;
						outgunnermayfire = 1;
						primarygunner = 0;
						primaryobserver = 0;
						proxyindex = 2;
						proxytype = "CPGunner";
						selectionfireanim = "zasleh_1";
						soundservo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
						stabilizedinaxes = 0;
						turretInfoType = "RscOptics_UAV_gunner"; //"RscWeaponRangeFinder";
						turretfollowfreelook = 0;
						viewgunnerinexternal = 1;
						weapons[] = 
						{
							"LAVIII_C6",
							"76wegman"
						};
						magazines[] = 
						{
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"CAF_LAV_220Rnd_762x51mm_C6",
							"76mm_Magazine_Smoke",
							"76mm_Magazine_Smoke",
							"76mm_Magazine_HE",
							"76mm_Magazine_HE"
						};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
						};
						class ViewGunner: ViewCargo 
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
						};
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.2;
								material = -1;
								name = "";
								visual = "";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
							class HitGun
							{
								armor = 0.2;
								material = -1;
								name = "";
								visual = "";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
						};
					};
					class LRSSOptics: NewTurret//: CommanderOptics 
					{
						animationsourcecamelev = "";//"camElev";
						animationsourcehatch = "";
						animationsourcebody = "lavrssTurret"; //"lavrssGun";
						animationsourcegun = "lavrssGun"; //"lavrssTurret";
						body = "lavrss_Turret";
						commanding = 0;
						gun = "lavrss_Gun";
						gunbeg = "gun_beg";
						gunend = "gun_end";
						gunnergetinaction = "GetInAMV_cargo";
						gunnergetoutaction = "GetOutLow";
						gunnername = "RSS Operator";
						gunneropticseffect[] = {};
						gunnerOpticsModel = "\caf_wheeled\prox\optika_laviii_gunner2.p3d";
						gunneroutforceoptics = 0;
						gunneroutopticscolor[] = {0, 0, 0, 1};
						gunneroutopticseffect[] = {};
						gunneroutopticsmodel = "\A3\weapons_f\reticle\optics_empty";
						gunneroutopticsshowcursor = 0;
						gunnerAction = "passenger_apc_generic01";
						gunnerInAction = "passenger_apc_generic01"; 
						gunnerdoor = "";
						gunnerhasflares = 0;
						gunnerforceoptics = 0;
						gunnercansee = "1+2+4+8+16+32";
						gunAxis = "lavrss_Main_axis";
						hideweaponsgunner = 1;
						memorypointgunneroptics = "lrssview";
						magazines[] = {"Laserbatteries"};
						memorypointgun = "gun_end";
						memorypointsgetingunner = "pos LAVRSS gunner";
						memorypointsgetingunnerdir = "pos LAVRSS Gunner Dir";
						outgunnermayfire = 1;
						primary = 0;
						primarygunner = 0;
						primaryobserver = 1;
						proxyindex = 3;
						proxytype = "CPGunner";
						showalltargets = 1;
						startengine = 0;
						soundservo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
						stabilizedinaxes = 0;
						turretfollowfreelook = 0;
						turretInfoType = "RscOptics_UAV_gunner";
						turretAxis="lavrss_turret_axis";
						viewgunnerinexternal = 1;
						weapons[] = {"Laserdesignator_mounted"};			
						class ViewOptics: ViewOptics 
						{
							initanglex = 0;
							initangley = 0;
							initfov = 0.3;
							maxanglex = 30;
							maxangley = 100;
							maxfov = 1.0;
							maxmovex = 0;
							maxmovey = 0;
							maxmovez = 0;
							minanglex = -30;
							minangley = -100;
							minfov = 0.01;
							minmovex = 0;
							minmovey = 0;
							minmovez = 0;	
							visionMode[] = {"Normal","TI","NVG"};
							thermalMode[] = {0,1,2,3,4,5,6,7};
						};
						class ViewGunner: ViewCargo 
						{
							initanglex = 5;
							initangley = 0;
							initfov = 0.7;
							maxanglex = 85;
							maxangley = 150;
							maxfov = 0.85;
							maxmovex = 0;
							maxmovey = 0;
							maxmovez = 0;
							minanglex = -85;
							minangley = -150;
							minfov = 0.42;
							minmovex = 0;
							minmovey = 0;
							minmovez = 0;
						};
						minElev	= -20; minTurn	= -360; 
						maxElev = +20; maxTurn = 360; 
						initElev = 0; initTurn = 0;
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.2;
								material = -1;
								name = "recce";
								visual = "recce";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
							class HitGun
							{
								armor = 0.2;
								material = -1;
								name = "recce2";
								visual = "recce2";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.4;
								radius = 0.2;
							};
						};
					};
				};
			};
		};
		class RenderTargets: RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";

				class View01
				{
					pointPosition= "lrssview";
					pointDirection= "lrssview_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.7;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class UserMast 
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class muzzle_hide
			{
				source = "reload";
				weapon[] = {"M242_Primary"};
			};
			class muzzle_hide2
			{
				source = "reload";
				weapon[] = {"M242_Secondary"};
			};
			class userramp 
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class hatchCargo_1: userramp 
			{
				animPeriod = 10;
			};
			class hatchCargo_2: hatchCargo_1 
			{
				animPeriod = 2;
			};
			class recoil_source 
			{
				source = "recoil";
				weapon[] = {"M242_Primary"};
			};
			class recoil_source2: recoil_source 
			{
				source = "recoil";
				weapon[] = {"M242_Secondary"};
			};
			class HitLFWheel
			{
			source = "Hit";
			hitpoint = "HitLFWheel";
			raw = 1;
			};
			class HitLF2Wheel
			{
			source = "Hit";
			hitpoint = "HitLF2Wheel";
			raw = 1;
			};
			class HitLMWheel
			{
			source = "Hit";
			hitpoint = "HitLMWheel";
			raw = 1;
			};
			class HitLBWheel
			{
			source = "Hit";
			hitpoint = "HitLBWheel";
			raw = 1;
			};
			class HitRFWheel
			{
			source = "Hit";
			hitpoint = "HitRFWheel";
			raw = 1;
			};
			class HitRF2Wheel
			{
			source = "Hit";
			hitpoint = "HitRF2Wheel";
			raw = 1;
			};
			class HitRMWheel
			{
			source = "Hit";
			hitpoint = "HitRMWheel";
			raw = 1;
			};
			class HitRBWheel
			{
			source = "Hit";
			hitpoint = "HitRBWheel";
			raw = 1;
			};
		};
		class UserActions: userActions 
		{
			class OpenRamp 
			{
				displayName = "Open Ramp";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				condition = "(this animationPhase ""rampdoor"" == 0) AND Alive(this)"; 
				statement = "this animate [""rampdoor"",1];";
			};
			class CloseRamp : OpenRamp 
			{
				displayName = "Close Ramp";
				condition = "(this animationPhase ""rampdoor"" == 1) AND Alive(this)";
				statement = "this animate [""rampdoor"",0];";
			};
			class Open_HatchCargo_1 : CloseRamp	
			{
				displayName = "Open Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",1];";
			};
			class Close_HatchCargo_1 : Open_HatchCargo_1 
			{
				displayName = "Close Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",0];";
			};
			class Open_HatchCargo_2 : Close_HatchCargo_1 
			{
				displayName = "Open Right Hatch";
				condition = "(this animationPhase ""HatchCargo_2"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_2"",1];";
			};
			class  Close_HatchCargo_2 : Open_HatchCargo_2 
			{
				displayName = "Close Right Hatch";
				condition = "(this animationPhase ""HatchCargo_2"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_2"",0];";
			};
  			class ExtendMast
			{
    			displayName = "Extend Mast";
				position = "pos_cargo";
    			onlyforplayer = 1;
        		radius = 7;
				condition	= "((this animationPhase 'HatchCargo_1') == 0) AND ((this animationPhase 'MAST5') == 0) AND ((this animationPhase 'MAST4') == 0) AND ((this animationPhase 'MAST3') == 0) AND ((this animationPhase 'MAST2') == 0) AND Alive(this)";//AND driver this == player";
 				statement	= "this animate [""HatchCargo_1"",1];this animate [""MAST5"",1];this animate [""MAST4"",1];this animate [""MAST3"",1];this animate [""MAST2"",1];";				
   			};
  			class RetractMast : ExtendMast 
			{
    			displayName = "Retract Mast";
				condition	= "((this animationPhase 'HatchCargo_1') == 1) AND ((this animationPhase 'MAST5') == 1) AND ((this animationPhase 'MAST4') == 1) AND ((this animationPhase 'MAST3') == 1) AND ((this animationPhase 'MAST2') == 1) AND Alive(this)";// AND driver this == player";
 				statement	= "this animate [""MAST5"",0];this animate [""MAST4"",0];this animate [""MAST3"",0];this animate [""MAST2"",0];this animate [""HatchCargo_1"",0];";				
			};
   		};
	};
	class caf_AR_lav3_eng: caf_AR_lav3_ISC 
	{
		author = "CAF";
		_generalMacro = "caf_AR_lav3_eng";
		scope = 2;
		accuracy = 0.3;
		displayName = "E-LAV-E11(AR)";
		class Library
		{
			libTextDesc = "LAVIII RSS";
		};
		model = "\caf_wheeled\caf_wheeled_eng.p3d";
		transportmaxbackpacks = 13;
		transportmaxmagazines = 100;
		transportmaxweapons = 10;
		transportsoldier = 10;
		transportAmmo = 300;
		transportRepair = 200;
		transportFuel = 300;
		supplyRadius = 7;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_E11.paa","caf_wheeled_t\tex\ar\caf_body01_co.paa","caf_wheeled_t\tex\ar\caf_body02_co.paa","caf_wheeled_t\tex\ar\caf_body03_co.paa","caf_wheeled_t\tex\ar\caf_body04_co.paa","caf_wheeled_t\tex\ar\hatches_co.paa","caf_wheeled_t\tex\ar\stryker_alfa_ca.paa","caf_wheeled_t\tex\ar\stryker_body2_co.paa"};
		cargoAction[] =
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03",
			"passenger_apc_generic02"
		};
		class UserActions: userActions 
		{
			class OpenRamp 
			{
				displayName = "Open Ramp";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				condition = "(this animationPhase ""rampdoor"" == 0) AND Alive(this)"; 
				statement = "this animate [""rampdoor"",1];";
			};
			class CloseRamp : OpenRamp 
			{
				displayName = "Close Ramp";
				condition = "(this animationPhase ""rampdoor"" == 1) AND Alive(this)";
				statement = "this animate [""rampdoor"",0];";
			};
			class Open_HatchCargo_1 : CloseRamp	
			{
				displayName = "Open Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 0) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",1];";
			};
			class Close_HatchCargo_1 : Open_HatchCargo_1 
			{
				displayName = "Close Left Hatch";
				condition = "(this animationPhase ""HatchCargo_1"" == 1) AND Alive(this)"; 
				statement = "this animate [""HatchCargo_1"",0];";
			};
   		};
		class Turrets
		{
			class CommanderOptics: NewTurret 
			{
				animationsourcebody = "obsTurret";
				animationsourcecamelev = "";
				animationsourcegun = "obsGun";
				animationsourcehatch = "hatchCommander";
				body = "obsTurret";
				commanding = 1;
				gun = "obsGun";
				gunbeg = "pintleend";
				gunend = "pintlemuz";
				gunnergetinaction = "GetInHigh";
				gunnergetoutaction = "GetOutHigh";
				gunnername = "Commander";
				gunneropticseffect[] = {};
				gunneropticsmodel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerForceOptics = 0;
				gunneroutforceoptics = 0;
				gunneroutopticscolor[] = {0, 0, 0, 1};
				gunneroutopticseffect[] = {};
				gunneroutopticsmodel = "\A3\weapons_f\reticle\optics_empty";
				gunneroutopticsshowcursor = 0;
				gunnerAction = "Stryker_GunnerOut"; //"commander_apcwheeled1_out";
				gunnerInAction = "Stryker_Gunner"; //"commander_apcwheeled1_in";
				ingunnermayfire = 1;
				initelev = 0;
				initturn = 0;
				maxelev = 45;
				maxturn = 180;
				memorypointgun = "muzzleflash";
				memorypointgunneroptics = "commanderview";
				memorypointgunneroutoptics = "commander_out_view";
				memorypointsgetingunner = "pos_commander";
				memorypointsgetingunnerdir = "pos_commander_dir";
				minelev = -30;
				minturn = -180;
				outgunnermayfire = 1;
				primary = 1;
				primarygunner = 1;
				primaryobserver = 1;
				proxyindex = 1;
				proxytype = "CPGunner";
				selectionfireanim = "zasleh_1";
				soundservo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
				stabilizedinaxes = 0;
				turretInfoType = "RscWeaponRangeFinder";
				turretfollowfreelook = 0;
				viewgunnerinexternal = 1;
				weapons[] = {"LAVIII_C6","SmokeLauncher","76wegman"};
				magazines[] = {"CAF_LAV_220Rnd_762x51mm_C6","CAF_LAV_220Rnd_762x51mm_C6","CAF_LAV_220Rnd_762x51mm_C6","CAF_LAV_220Rnd_762x51mm_C6","76mm_Magazine_Smoke","76mm_Magazine_Smoke","76mm_Magazine_Smoke","76mm_Magazine_Smoke","76mm_Magazine_HE","76mm_Magazine_HE"};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.5;
					minFov = 0.01;
					maxFov = 1.00;
					visionMode[] = {"Normal","TI"};
					thermalMode[] = {0,1};
				};
				class ViewGunner: ViewCargo 
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -180;
					maxAngleY = 180;
					initFov = 1.00;
					minFov = 0.9;
					maxFov = 1.00;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						material = -1;
						name = "";
						visual = "";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 0.2;
						material = -1;
						name = "";
						visual = "";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.2;
					};
				};
			};
		};
	};
	class caf_AR_lav3_eng_E11A: caf_AR_lav3_eng
	{
		author = "CAF";
		_generalMacro = "caf_AR_lav3_eng_E11A";
		scope = 2;
		accuracy = 0.3;
		displayName = "E-LAV-E11A(AR)";
		class Library
		{
			libTextDesc = "LAV3-Eng-E11";
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"caf_wheeled_t\tex\camo1_E11A.paa","caf_wheeled_t\tex\ar\caf_body01_co.paa","caf_wheeled_t\tex\ar\caf_body02_co.paa","caf_wheeled_t\tex\ar\caf_body03_co.paa","caf_wheeled_t\tex\ar\caf_body04_co.paa","caf_wheeled_t\tex\ar\hatches_co.paa","caf_wheeled_t\tex\ar\stryker_alfa_ca.paa","caf_wheeled_t\tex\ar\stryker_body2_co.paa"};
	};
};