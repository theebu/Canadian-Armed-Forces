////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon Nov 19 01:31:47 2012 : Created on Mon Nov 19 01:31:47 2012
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:/abs_rg-31/config.bin{
class CfgPatches
{
	class abs_RG31
	{
		units[] = {"NZX_RG31_D_M240_P_USArmy"};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};
class CfgFactionClasses
{
	access = 1;
	class ONS
	{
		displayName = "Canadian Forces";
		priority = 6;
		side = 1;
	};
};
class CfgVehicleClasses
{
	access = 1;
	class ONS_rg31
	{
		displayName = "CF RG31 (Temperate)";
	};
	class ONS_rg31D
	{
		displayName = "CF RG31 (Arid)";
	};
};
class Extended_Init_EventHandlers
{
	class LAVIII_Base
	{
		LAVIII_Base_Init = "this lock true";
	};
};
class WeaponCloudsMGun;
class AnimationSources;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
	};
	class NZX_RG31_base: Car
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 200;
		nameSound = "truck";
		transportSoldier = 3;
		driverAction = "HMMWV_Driver_EP1";
		transportMaxBackpacks = 5;
		hideWeaponsCargo = 1;
		outsideSoundFilter = 0;
		insideSoundCoef = 1;
		threat[] = {0.9,0.2,0.5};
		brakedistance = 8;
		damperSize = 0.17;
		damperForce = 3.0;
		damperDamping = 3.15;
		maxSpeed = 113;
		fuelCapacity = 240;
		wheelCircumference = 2.82;
		soundGear[] = {"",5.6e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",0.562341,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\get_in2",0.562341,1,20};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_start1",0.177828,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\engine_ON1",0.177828,1.0,100};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\int\int-engine_off2",0.177828,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\ext\engine_OFF2",0.177828,1.0,100};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.707946,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.707946,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.707946,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.707946,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.707946,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.707946,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.707946,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.707946,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.707946,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.707946,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.707946,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.707946,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.707946,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.707946,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-acceleration1",0.1,1.0};
				limit = "0.8";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\turspecial1",0.1,1.0,200};
				limit = "0.8";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1.0,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1.0,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\idle_2",0.562341,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.3, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.316228,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.316228,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.316228,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.316228,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.316228,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.177828,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\idle_2",0.316228,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2";
			};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
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
			class HitRBWheel
			{
				source = "Hit";
				hitpoint = "HitRBWheel";
				raw = 1;
			};
			class Door1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Door2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Door3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Door4
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.15;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.15;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.15;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.15;
			};
			class HitFuel
			{
				armor = 0.14;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.8;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.8;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.8;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.8;
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class NZX_RG31_D_M240_P_USArmy: NZX_RG31_base
	{
		scope = 2;
		side = 1;
		model = "\ABS_RG-31\ABS_RG31_M240_P";
		displayName = "RG-31 Nyala (D)";
		Picture = "\ABS_RG-31\data\ico\ONS_Nyala_ca.paa";
		Icon = "\ABS_RG-31\data\map_ico\ons_nrws_CA.paa";
		mapSize = 10;
		faction = "ONS";
		vehicleClass = "ONS_rg31D";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoIsCoDriver[] = {0};
		driverIsCommander = 1;
		commanderCanSee = 31;
		driverCanSee = 31;
		driverAction = "HMMWV_Driver_EP1";
		damperSize = 0.2;
		damperForce = 1.0;
		damperDamping = 1.5;
		armor = 400;
		hasGunner = 1;
		gunnerCanSee = 31;
		castGunnerShadow = 1;
		gunnerHasFlares = 1;
		laserScanner = "true";
		transportSoldier = 5;
		crew = "ONS_TankCrew_AR";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1"};
		maxSpeed = 105;
		wheelCircumference = 4.513;
		turnCoef = 2.5;
		soundEngine[] = {"\ca\wheeled\Data\Sound\Truck_loop_3b",1.0,1};
		soundGetIn[] = {"\ca\wheeled\Data\Sound\V3S_door_v2",0.1,1};
		soundGetOut[] = {"\ca\wheeled\Data\Sound\V3S_door_v2",0.1,1};
		soundServo[] = {"\ca\wheeled\Data\Sound\servo3",1.7782793e-005,1.0};
		radarType = 4;
		wheelComponentSteerL[] = {"wheel_1_1_damper"};
		wheelComponentSteerR[] = {"wheel_2_1_damper"};
		wheelComponentFixedL[] = {"wheel_1_2_damper"};
		wheelComponentFixedR[] = {"wheel_1_1_damper"};
		class Damage
		{
			tex[] = {};
			mat[] = {"\ABS_RG-31\data\ONS_Nyala.rvmat","\ABS_RG-31\data\ONS_Nyala_Half_D.rvmat","\ABS_RG-31\data\ONS_Nyala_Full_D.rvmat","\ABS_RG-31\data\ONS_Nyala_glass.rvmat","\ABS_RG-31\data\ONS_Nyala_glass_Half_D.rvmat","\ABS_RG-31\data\ONS_Nyala_glass_Half_D.rvmat","\ABS_RG-31\data\ONS_Nyala_glass_in.rvmat","\ABS_RG-31\data\ONS_Nyala_glass_in_Half_D.rvmat","\ABS_RG-31\data\ONS_Nyala_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ABS_RG-31\data\RG31_D_co.paa","\ABS_RG-31\data\RG31_W_co.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"M240_veh","SmokeLauncher"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				magazines[] = {"1200Rnd_762x51_M240"};
				minElev = -25;
				maxElev = 60;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.3;
					minFov = 0.015;
					maxFov = 0.3;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
				gunnerAction = "Stryker_Gunner";
				gunnerOpticsModel = "\ABS_RG-31\data\CROW\optika_CROW1";
				gunnerForceOptics = 0;
				memoryPointGunnerOptics = "gunnerview";
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
			};
		};
	};
};
//};
