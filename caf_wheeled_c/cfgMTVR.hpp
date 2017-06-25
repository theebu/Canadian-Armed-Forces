class MTVR : Truck
	{
		scope = 0;
		model = "\ca\wheeled2\MTVR\MTVR.p3d";
		picture="\Ca\wheeled2\data\UI\Picture_MTVR_CA.paa";
		Icon="\Ca\wheeled2\data\UI\Icon_MTVR_CA.paa";
		mapSize = 8;
		displayname = $STR_DN_MTVR;
		vehicleClass = "Car";

		class Library {libTextDesc = $STR_LIB_MTVR;};

		side = 1;
		faction=USMC;
		crew = "USMC_Soldier";

		fuelCapacity = 303;
		maxSpeed = 105;
		wheelCircumference=4.172;
		cost=70000;
		terrainCoef=2.0;

		turnCoef=3.7; //3
		steerAheadSimul=0.5;
		steerAheadPlan=0.38;

		armor=32;
		damageResistance = 0.00243;
		// camouflage=4; // 4 = easy to spot, TODO revise
		enableGPS = false;
		weapons[]={TruckHorn};
		magazines[]={};
		threat[]={1, 0.1, 0.4};
		class DestructionEffects:DestructionEffects{};
		class HitPoints : HitPoints
		{
			class HitLFWheel:HitLFWheel{armor=0.3;};
			class HitLBWheel:HitLBWheel{armor=0.3;};
			class HitLMWheel:HitLMWheel{armor=0.3;};


			class HitRFWheel:HitRFWheel{armor=0.3;};
			class HitRBWheel:HitRBWheel{armor=0.3;};
			class HitRMWheel:HitRMWheel{armor=0.3;};


			class HitFuel {armor=1.4;material=-1;name="palivo";visual="";passThrough=1;}; // no palivo selection
		};

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 12;
		driverAction = MTVR_Driver;
		cargoAction[] =
		{
			Truck_Cargo01, Truck_Cargo01, Truck_Cargo04, Truck_Cargo04, Truck_Cargo02, Truck_Cargo03,
			Truck_Cargo04, Truck_Cargo02, Truck_Cargo04, Truck_Cargo04, Truck_Cargo04, Truck_Cargo04
		};
		typicalCargo[]={USMC_Soldier, USMC_Soldier, USMC_Soldier_AT, USMC_Soldier_AT};
		initCargoAngleY=+185; // cargo viewing limitations
		getInAction=GetInHigh;
		getOutAction = GetOutHigh;
		cargoIsCoDriver[] = {true,true,false};

		viewCargoShadow = true;

		SoundGear[]={"",db-55,1};
		soundGetIn[]={"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin",db-3,1};
		soundGetOut[]={"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getout",db-5,1, 50};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\MTVR\int\int-mtvr-start", db-5, 1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-start1", db-5, 1.0, 350};
		soundEngineOffInt[] ={"ca\sounds\vehicles\Wheeled\MTVR\int\int-mtvr-stop", db-5, 1.0};
		soundEngineOffExt[] ={"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-stop", db-5, 1.0, 350};

		buildCrash0[]={"Ca\sounds\Vehicles\Crash\crash_building_01", db-3, 1, 200};
		buildCrash1[]={"Ca\sounds\Vehicles\Crash\crash_building_02", db-3, 1, 200};
 		buildCrash2[]={"Ca\sounds\Vehicles\Crash\crash_building_03", db-3, 1, 200};
 		buildCrash3[]={"Ca\sounds\Vehicles\Crash\crash_building_04", db-3, 1, 200};
 		soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

		WoodCrash0[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", db-3, 1, 200};
		WoodCrash1[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", db-3, 1, 200};
		WoodCrash2[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", db-3, 1, 200};
		WoodCrash3[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", db-3, 1, 200};
		WoodCrash4[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", db-3, 1, 200};
		WoodCrash5[]={"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", db-3, 1, 200};
		soundWoodCrash[]={woodCrash0, 0.166, woodCrash1, 0.166, woodCrash2, 0.166, woodCrash3, 0.166,woodCrash4, 0.166,woodCrash5, 0.166};

		ArmorCrash0[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_01", db-3, 1, 200};
		ArmorCrash1[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_02", db-3, 1, 200};
		ArmorCrash2[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_03", db-3, 1, 200};
		ArmorCrash3[]={"Ca\sounds\Vehicles\Crash\crash_vehicle_04", db-3, 1, 200};
		soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-acceleration1", db-8, 1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-acceleration1", db-5, 1.0, 390};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};

		class Sounds
		{
		/*EXTERNAL SOUNDS MTVR*/
			class Engine
			{
				sound[] =  {"\ca\sounds\Vehicles\Wheeled\MTVR\ext\ext-truck-low2", db0, 1.0, 450};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\ext\ext-truck-high", db0, 0.9, 550};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.5, 0.95])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-idle", db-5, 1.0, 350};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", db-20, 1.0, 50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", db-20, 1.0, 50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", db-20, 1.0, 50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", db-20, 1.0, 50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", db-20, 1.0, 50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", db-20, 1.0, 50};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", db-20, 1.0, 50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
		/* --------------------------------- */
	  //        INTERNAL SOUNDS MTVR	  	 */
		/* --------------------------------- */
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-low2", db0, 1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-high2", db0, 0.9};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.4, 1.0])*(1-camPos)";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\int\int-mtvr-idle1", db-8, 1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", db-15, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", db-15, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", db-15, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", db-15, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", db-15, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", db-15, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", db-15, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)"; //definice INSIDE zvuku
			};
			// original environment sound, suppressed now
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};

		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		class Turrets {};

		class Reflectors
		{
			class Left
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness =0.5;
			};
			class Right
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.5;
			};
		};
		memoryPointExhaust = "vyfuk start";
		memoryPointExhaustDir = "vyfuk konec";
		// TODO add glass damage textures
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\wheeled2\mtvr\data\mtvr_body.rvmat",
				"ca\wheeled2\mtvr\data\mtvr_body_damage.rvmat",
				"ca\wheeled2\mtvr\data\mtvr_body_destruct.rvmat",

				"ca\wheeled2\mtvr\data\mtvr_body2.rvmat",
				"ca\wheeled2\mtvr\data\mtvr_body2_damage.rvmat",
				"ca\wheeled2\mtvr\data\mtvr_body2_destruct.rvmat",

				"ca\wheeled2\mtvr\data\mtvr_interier.rvmat",
				"ca\wheeled2\mtvr\data\mtvr_interier_damage.rvmat",
				"ca\wheeled2\mtvr\data\mtvr_interier_destruct.rvmat",

				"ca\wheeled\data\detailmapy\auta_skla.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_damage.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_damage.rvmat",

				"ca\wheeled\data\detailmapy\auta_skla_in.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat",

				"ca\wheeled2\MTVR\Data\MTVR_tarp.rvmat",
				"ca\wheeled2\MTVR\Data\mtvr_tarp_damage.rvmat",
				"ca\wheeled2\MTVR\Data\mtvr_tarp_destruct.rvmat",

				"ca\wheeled2\MTVR\Data\mtvr_fuel.rvmat",
				"ca\wheeled2\MTVR\Data\mtvr_fuel_damage.rvmat",
				"ca\wheeled2\MTVR\Data\mtvr_fuel_destruct.rvmat",

				"ca\wheeled\data\detailmapy\Ural_repair.rvmat",
				"ca\wheeled\data\detailmapy\ural_repair_damage.rvmat",
				"ca\wheeled\data\detailmapy\ural_repair_destruct.rvmat"
			};
		};
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[] =
		{
			"\ca\wheeled2\mtvr\data\mtvr_body_co.paa",
			"\ca\wheeled2\mtvr\data\mtvr_body2_co.paa",
			"\ca\wheeled2\mtvr\data\mtvr_interier_co.paa",
			"\ca\wheeled2\mtvr\data\mtvr_tarp_co.paa"
		};
	};
	