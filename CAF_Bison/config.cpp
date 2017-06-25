#define _ARMA_

//#define VIEW_GUNNER 1000
//#define VIEW_PILOT 1100
//#define VIEW_CARGO 1200

#include "CrewAnimations.hpp"



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
class CfgPatches
{
	class CAF_Bison
	{
		units[] = {"Bison_HQ"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Wheeled_APC_F: Car_F
	{
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
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Sounds;
		class complexGearbox;
		class Wheels;
		class ViewOptics;
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets {};
				class ViewOptics;
				class OpticsIn;
				class HitPoints;
			};
		};
		class AnimationSources;
		class Damage;
		class Reflectors;
		class RenderTargets;
		class EventHandlers;
	};	
	class CAF_Bison_HQ: APC_Wheeled_01_base_F
	{
		scope = 2;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F"};
		side = 1;
		faction = "CAF_TW";
		mapSize = 6.48;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_APC_s"};
				speechPlural[] = {"veh_vehicle_APC_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_apc_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_apc_p";
		nameSound = "veh_vehicle_APC_s";
		author = "CAF";
		_generalMacro = "CAF_Bison_HQ";
		displayName = "Cdn Bison CP";
		class Library
		{
			libTextDesc = "The Bison Armoured Vehicle is an eight-wheeled armoured vehicle originally designed as an infantry section carrier. Today, the Bison Armoured Vehicle is an adaptable vehicle with variants that support the light armoured vehicle (LAV) IIIs.";
		};
		model = "\caf_bison\bison_hq";
		picture = "\caf_bison\data\pic_bison_hq_ca.paa";
		Icon = "\caf_bison\data\icon_bison_hq_ca.paa";
		transportMaxBackpacks = 8;
		vehicleClass = "car";
		transportSoldier = 2;
		crewVulnerable = 0;
		crewCrashProtection = 0.15;
		armor = 120;
		cost = 500000;
		threat[] = {0.8,0.6,0.3};
		memorypointsgetindriver = "pos driver";
		memorypointsgetindriverdir = "pos driver dir";
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		aggregateReflectors[] = {
			{ "Left","Right"}};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectHTruck";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"A3\soft_f\MRAP_01\Data\MRAP_01_adds.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_adds_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_adds_destruct.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_destruct.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_int.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_int_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_int_destruct.rvmat",
				"A3\Data_F\Glass_veh.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat",
				"A3\Data_F\Glass_veh_int.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat"
			};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\caf_bison\data\tex\lavbody_co.paa",
			"\CAF_Bison\Data\tex\lavbody2_co.paa",
			"\CAF_Bison\Data\tex\lav_hq_co.paa"
		};
		#include "physx.hpp"
		class AnimationSources: AnimationSources
		{
			class Antena1
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class userramp 
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class Proxy	/// name of animation source in model.cfg
			{
				source		 = "user"; 	/// what is the animation source based on, this time it is user input
				animPeriod	 = 1;		/// how long does it take to switch from 0 to 1 (or vice versa) if used by script
				initPhase	 = 0;		/// what is the value of animation source to start with
			};		
			class Beacons {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Antena2:Antena1{};
			class Antena3:Antena1{};
			class ReloadAnim{source="reload"; weapon="caf_c6gpmg";};
			class ReloadMagazine{source="reloadmagazine"; weapon="caf_c6gpmg";};
			class Revolving{source="revolving"; weapon="caf_c6gpmg";};
		};
		class UserActions 
		{
			class OpenRamp 
			{
				displayName = "Open Ramp";
				position = "pos cargo";
				onlyforplayer = 1;
				radius = 6;
				condition = "(this animationPhase ""userramp"" == 0) AND Alive(this)"; 
				statement = "this animate [""userramp"",1];";
			};
			class CloseRamp : OpenRamp 
			{
				displayName = "Close Ramp";
				condition = "(this animationPhase ""userramp"" == 1) AND Alive(this)";
				statement = "this animate [""userramp"",0];";
			};
			class ExtendMast
			{
    			displayName = "Extend Antenna";
				position = "pos cargo";
    			onlyforplayer = 1;
        		radius = 7;
				condition	= "((this animationPhase 'Antena1') == 0) AND ((this animationPhase 'Antena2') == 0) AND ((this animationPhase 'Antena3') == 0) AND Alive(this)";//AND driver this == player";
 				statement	= "this animate [""Antena1"",1];this animate [""Antena2"",1];this animate [""Antena3"",1];";				
   			};
  			class RetractMast : ExtendMast 
			{
    			displayName = "Retract Antenna";
				condition	= "((this animationPhase 'Antena1') == 1) AND ((this animationPhase 'Antena2') == 1) AND ((this animationPhase 'Antena3') == 1) AND Alive(this)";// AND driver this == player";
 				statement	= "this animate [""Antena1"",0];this animate [""Antena2"",0];this animate [""Antena3"",0];";
  			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel {armor = 0.12;	explosionShielding = 0.8;};
			class HitLF2Wheel: HitLF2Wheel {armor = 0.12; explosionShielding = 0.8;};
			class HitRFWheel: HitRFWheel {armor = 0.12;	explosionShielding = 0.8;};
			class HitRF2Wheel: HitRF2Wheel {armor = 0.12; explosionShielding = 0.8;};
			class HitLMWheel: HitLMWheel {armor = 0.12;	explosionShielding = 0.8;};
			class HitLBWheel: HitLBWheel {armor = 0.12; explosionShielding = 0.8;};
			class HitRMWheel: HitRMWheel {armor = 0.12;	explosionShielding = 0.8;};
			class HitRBWheel: HitRBWheel {armor = 0.12; explosionShielding = 0.8;};
			class HitFuel
			{
				armor = 0.1;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
				explosionShielding = 0.3;
			};
			class HitEngine
			{
				armor = 0.12;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
				explosionShielding = 0.5;
			};
			class HitBody 
			{
				armor = 1;
				material = -1;
				name = "karoserie";
				passthrough = 1;
				visual = "";
			};
		};
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		
		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "stopa PLL"; 
		// front left track, right offset
		memoryPointTrackFLR = "stopa PLP"; 
		// back left track, left offset
		memoryPointTrackBLL = "stopa ZLL"; 
		// back left track, right offset
		memoryPointTrackBLR = "stopa ZLR"; 
		// front right track, left offset
		memoryPointTrackFRL = "stopa PPL"; 
		// front right track, right offset
		memoryPointTrackFRR = "stopa PPP"; 
		// back right track, left offset
		memoryPointTrackBRL = "stopa ZPL"; 
		// back right track, right offset
		memoryPointTrackBRR = "stopa ZPP"; 
		
		driverAction = "crew_tank01_out";
		driverInAction = "LAV25_Driver";
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		cargoAction[] = 
		{
			"passenger_generic01_foldhands",
			//"passenger_apc_narrow_generic02",
			//"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03",
			//"passenger_apc_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic02"
		};
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutMRAP_01";
		cargoGetInAction[] = {"GetInMRAP_01_cargo"};
		cargoGetOutAction[] = {"GetOutMRAP_01"};
		commanderCanSee = 31;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		animationSourceHatch = "HatchDriver"; //driverDoor = "HatchDriver";
		cargoDoors[] = {};
		terrainCoef = 1.5;
		turnCoef = 3;
		precision = 15;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		
		#include "sounds.hpp"

		class RenderTargets
		{
			class Driver_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 2;
					renderQuality = 2;
					fov = 0.7;
				};
			};
		};
		supplyRadius = 5;
		transportMaxMagazines = 100;
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
		};
		class TransportItems{};
		class TransportWeapons{};
		class Turrets: Turrets{};
	};
	class Caf_Bison_Amb: Caf_Bison_HQ
	{
		author = "CAF";
		_generalMacro = "Caf_Bison_Amb";
		displayName = "CAF Bison Ambulance";
		DriverAction = "LAV25_Driver_OUT";
		driverInAction = "LAV25_Driver";
		model= "\caf_bison\bison_amb"
		Icon = "\caf_bison\data\icon_bison_amb_ca.paa";
		vehicleClass = "Support";
		scope = 2;
		crew = "CAF_medic_TW";
		typicalCargo[] = {"CAF_medic_TW"};
		side = 1;
		faction = "CAF_TW";
		driverForceOptics = false;
		hiddenSelectionsTextures[] = 
		{
			"\caf_bison\data\tex\lavbody_co.paa",
			"\CAF_Bison\Data\tex\lavbody2_co.paa",
			"\CAF_Bison\Data\tex\lav_hq_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						body = "";
						gun = "";
						gunBeg = "";
						gunEnd = "";
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
						gunnerAction = "LAV25_Commander_out";
						gunnerInAction = "passenger_generic01_foldhands";
						memorypointsgetingunner = "pos commander";
						memorypointsgetingunnerdir = "pos commander dir";
						viewGunnerInExternal = 1;
						castGunnerShadow = 1;
						stabilizedInAxes = 3;
						gunnerlefthandanimname = "";
						gunnerrighthandanimname = "";
						memoryPointGunnerOptics = "PIP1_pos"; //"gunnerview";
						memoryPointGunnerOutOptics = "";
						gunnerOpticsModel = "";
						gunnerOutOpticsModel = "";
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						gunnerForceOptics = 0;
						primary = 1;
						primarygunner = 1;
						primaryobserver = 1;
						proxyindex = 1;
						proxytype = "CPCommander";
						commanding = 1;
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						turretInfoType = "";
						usePip = 0;
						minElev = -25;
						maxElev = 60;
						class ViewOptics;
						class ViewGunner: ViewOptics
						{
							initAngleX = -15;
							minAngleX = -45;
							maxAngleX = 45;
							initFov = 0.9;
							minFov = 0.42;
							maxFov = 0.9;
							visionMode[] = {};
						};
						gunnerName= "Commander"
						gunnerDoor = "";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerHasFlares = 1;
						class Turrets {};
					};
				};
				body = "";
				gun = "";
				gunBeg = "";
				gunEnd = "";
				weapons[] = {};
				magazines[] = {};
				forceHideGunner = 1;
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				gunnerAction = "passenger_generic01_foldhands";
				gunnerInAction = "passenger_generic01_foldhands";
				memorypointsgetingunner = "pos cargo";
				memorypointsgetingunnerdir = "pos cargo dir";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				gunnerlefthandanimname = "";
				gunnerrighthandanimname = "";
				memoryPointGunnerOptics = ""; //"gunnerview";
				memoryPointGunnerOutOptics = "";
				gunnerOpticsModel = "";
				gunnerOutOpticsModel = "";
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				gunnerForceOptics = 0;
				primary = 0;
				primarygunner = 0;
				primaryobserver = 0;
				proxyindex = 1;
				proxytype = "CPGunner";
				commanding = -1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "";
				usePip = 0;
				minElev = -25;
				maxElev = 60;
				class ViewOptics;
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
				gunnerName= "Medic"
				gunnerDoor = "";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerHasFlares = 0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Beacons 
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};	
		};
		class UserActions 
		{
			class OpenRamp 
			{
				displayName = "Open Ramp";
				position = "pos cargo";
				onlyforplayer = 1;
				radius = 6;
				condition = "(this animationPhase ""userramp"" == 0) AND Alive(this)"; 
				statement = "this animate [""userramp"",1];";
			};
			class CloseRamp : OpenRamp 
			{
				displayName = "Close Ramp";
				condition = "(this animationPhase ""userramp"" == 1) AND Alive(this)";
				statement = "this animate [""userramp"",0];";
			};
			class beacons_start
			{
				userActionID 		 = 50;								/// just some unique number
				displayName 		 = "Beacons On";	/// what is displayed in the action menu
				position			 = "mph_axis";						/// at what memory point of the ship is the used as center of the radius
				priority 			 = 1.5;								/// sorting of action menu
				radius				 = 1.8;								/// radius around position where the action is avaliable
				animPeriod			 = 2;								/// how long does the animation source take to go from 0 to 1
				onlyForPlayer		 = false;							/// it is usable even by AI
				condition			 = "this animationPhase ""BeaconsStart"" < 0.5 AND Alive(this) AND driver this == player"; /// at what condition is the action displayed
				statement			 = "this animate [""BeaconsStart"",1];"; /// and what happens when the action is used
			};	
			class beacons_stop: beacons_start
			{
				userActionID 		 = 51;
				displayName 		 = "Beacons Off";
				condition			 = "this animationPhase ""BeaconsStart"" > 0.5 AND Alive(this) AND driver this == player";
				statement			 = "this animate [""BeaconsStart"",0];";
			};				
		};
		cargoAction[] = {"caf_bison_pat","caf_bison_pat"};
	};
};