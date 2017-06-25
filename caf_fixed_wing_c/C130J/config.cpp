class CfgPatches
{
	class USAF_C130J
	{
		units[] ={"USAF_C130J","C130J_Cargo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};
class DefaultEventhandlers;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		C130_Pilot = "C130_Pilot";
		C130_Cargo = "C130_Cargo";
		C130_Load = "C130_Load";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_C130_Pilot: DefaultDie
		{
			actions = DeadActions;
			file="\USAF_C130J\DATA\Anim\C130pilotKIA.rtm";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class C130_Pilot: Crew
		{
			file="\USAF_C130J\DATA\Anim\C130Pilot.rtm";
			interpolateTo[]={KIA_C130_Pilot,1};
		};
		class KIA_C130_Cargo: KIA_C130_Pilot {};
		class C130_Cargo: Crew
		{
			file="\USAF_C130J\DATA\Anim\C130Pilot.rtm";
			interpolateTo[]={KIA_C130_Cargo,1};
		};
		class C130_Load: Crew
		{
			file="\USAF_C130J\DATA\Anim\C130load.rtm";
			interpolateTo[]={KIA_C130_Cargo,1};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class Turrets: NewTurret{};
		class ViewPilot;
		class ViewGunner;
		class HitPoints
		{
			class HitHull 
		    {
				armor=1;
				material=50;
				name="telo";
				visual="trup";
				passThrough=1;
			};
		};
	};
	class USAF_C130J_Base: Plane
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				startEngine = 0;
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "";
				gunnerInAction = "";
				gunnerOpticsModel = "\A3\Weapons_F\empty.p3d";
				gunnerForceOptics = 0;
				enableManualFire = 0;
				canEject = 0;
				class ViewPilot: ViewPilot
					{
						minAngleX = -65;
						maxAngleX = 85;
						initAngleX = 0;
						minAngleY = -150;
						maxAngleY = 150;
						initAngleY = 0;
						minFov = 0.3;
						maxFov = 1.2;
						initFov = 1;
					};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						material = 51;
						name = "vez";
						visual = "vez";
						passThrough = 0.3;
					};
					class HitGun
					{
						armor = 0.2;
						material = 51;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
					};
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
	class USAF_C130J: USAF_C130J_Base
	{
		destrType="DestructWreck";
		scope = 2;
		side = 1;
		cabinOpening = false;
		watereffect = "HeliWater";
		displayname = "C-130J Super Hercules";
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		vehicleClass = "Air";
		faction = "USAF";
		crew = "USAF_SFS_Officer_Green";
		model = "\USAF_C130J\USAF_C130J.p3d";
		picture = "\USAF_C130J\data\UI\picture_c130j_CA.paa";
		icon= "\USAF_C130J\data\UI\icon_c130j_CA.paa";
		mapSize = 25;
		maxSpeed = 643;
		accuracy = 0.15;
		cost = 20000;
		incomingMissileDetectionSystem = 16;
		lockDetectionSystem = 8;
		armor = 370;
		armorWheels = 4000.0;
		armorStructured = 1;
		aileronSensitivity = 1.2;
		elevatorSensitivity = 1.2;
		gearRetracting =1;
		getInRadius = 2.5;
		driverAction = "C130_Pilot";
		driverLeftHandAnimName = "stick_pilot";
		driverRightHandAnimName = "stick_pilot";
		cargocaneject = 1;
		cargoIsCoDriver[] = {0,0};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo01","Truck_Cargo04","C130_Load"};
		getinaction = "GetInLow";
		getoutaction = "GetInLow";
		gunnerhasflares = 1;
		crewVulnerable = "true";
		transportSoldier = 43;
		gunnerUsesPilotView = 1;
		driverCompartments = Compartment1;
		cargoCompartments[] = {Compartment2};
		hiddenSelections[] = {"camo1","camo2","Decal"};
		hiddenSelectionsTextures[] = {"USAF_C130J\data\tex\c130j_body_co.paa","USAF_C130J\data\tex\c130j_wings_co.paa","USAF_C130J\data\tex\C130J_Decals.paa"};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 14;
			};
		};
		soundGetIn[] = {"\USAF_C130J\DATA\sounds\Air\C130\close",0.31622776,1};
		soundGetOut[] = {"\USAF_C130J\DATA\sounds\Air\C130\open",0.31622776,1,40};
		soundDammage[] = {"\USAF_C130J\DATA\sounds\Air\C130\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"\USAF_C130J\DATA\sounds\Air\C130\int_start_1",0.39810717,1.0};
		soundEngineOnExt[] = {"\USAF_C130J\DATA\sounds\Air\C130\ext_start_1",0.39810717,1.0,700};
		soundEngineOffInt[] = {"\USAF_C130J\DATA\sounds\Air\C130\int_stop_1",0.39810717,1.0};
		soundEngineOffExt[] = {"\USAF_C130J\DATA\sounds\Air\C130\ext_stop_1",0.39810717,1.0,700};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.1,1.5};
		audible = 6;
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\ext_engine_low",1.7782794,1,900};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\ext_engine_hi",1.7782794,1,1100};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\ext_forsage_1",1.4125376,1,1500};
				frequency = "1";
				volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
				cone[] = {1.14,3.92,2.0,0.4};
			};
			class WindNoiseOut
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\ext-wind1",0.001,0.6,150};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "camPos*(speed factor[1, 100])";
			};
			class EngineLowIn
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\int_engine_low",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\int_engine_hi",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\int_forsage_1",1.4125376,1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"\USAF_C130J\DATA\sounds\Air\C130\int-wind1",0.001,0.6};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "(1-camPos)*(speed factor[1, 100])";
			};
		};
		 class Exhausts
        {
	    class Exhaust_left
        {
               position = "Exhaust1";
               direction = "Exhaust1_dir";
               effect = "ExhaustsEffectPlane";
        };
        class Exhaust_right
        {
               position = "Exhaust2";
               direction = "Exhaust2_dir";
               effect = "ExhaustsEffectPlane";
        };                
		class Exhaust_left2
        {
               position = "Exhaust3";
               direction = "Exhaust3_dir";
               effect = "ExhaustsEffectPlane";
        };
        class Exhaust_right2
        {
               position= "Exhaust4";
               direction= "Exhaust4_dir";
               effect = "ExhaustsEffectPlane";
        };
        };
		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 50.0;
				useFlare = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
			class Right
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
				useFlare = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
			class Left2
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				position = "L2 svetlo";
				direction = "konec L2 svetla";
				hitpoint = "L2 svetlo";
				selection = "L2 svetlo";
				size = 1;
				brightness = 1.0;
				useFlare = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
			class Right2
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				position = "P2 svetlo";
				direction = "konec P2 svetla";
				hitpoint = "P2 svetlo";
				selection = "P2 svetlo";
				size = 1;
				brightness = 1.0;
				useFlare = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};	
		threat[] = {0.1, 0.5, 0.8};
		ejectSpeed[] = {0, 0, 0};
		landingAoa = "rad 7";
		landingSpeed = 200;
		extCameraPosition[]={0,5,-40};
		envelope[] = {0.0,0.5,1.0,2.0,4.0,4.5,5.0,5.3,5.6,6.0,6.2,6.5,6.7,0};
		flapsFrictionCoef = 2;
		wheelSteeringSensitivity = 5.0;
		noseDownCoef = 1;
		gearUpTime = 4.5;
		gearDownTime = 3;
		driveOnComponent[] = {"wheel_1_1","wheel_2_1","wheel_2_2","wheel_3_1","wheel_3_2"};
		canFloat = false;  
		waterResistanceCoef = 0.004;
		waterLeakiness = 25.0;  
		/* class Wheels
		{
			class L1
			{		
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "1.4";
				mass = 187.5;
				MOI = 50;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 45000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1125;
				mMaxDroop = 0.1125;
				sprungMass = 3090;
				springStrength = 110000;
				springDamperRate = 27900;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {
				{ 0,1 },
				{ 0.5,1 },
				{ 1,1 }};
			};
			class L2: L1
			{		
				boneName = "wheel_2_1_damper";
				side = "left";
				steering = 0;
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
			};
			class L3: L1
			{		
				boneName = "wheel_3_1_damper";
				steering = 0;
				side = "left";
				center = "wheel_3_1_axis";
				boundary = "wheel_3_1_bound";
				suspForceAppPointOffset = "wheel_3_1_axis";
				tireForceAppPointOffset = "wheel_3_1_axis";
			};
			class R1: L1
			{		
				boneName = "wheel_2_2_damper";
				steering = 0;
				side = "right";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R2: L1
			{		
				boneName = "wheel_3_2_damper_damper";
				steering = 0;
				side = "right";
				center = "wheel_3_2_axis";
				boundary = "wheel_3_2_bound";
				suspForceAppPointOffset = "wheel_3_2_axis";
				tireForceAppPointOffset = "wheel_3_2_axis";
			};
		};*/
		class EventHandlers
		{
		init="_this execVM '\USAF_C130J\scripts\jumplight.sqf';";
		};
		class AnimationSources
		{
			class door_2_2
			{
				source = "user";
				animPeriod = 10;
			};
			class door_2_1:door_2_2{};
			class door_1:door_2_2{};
			class ramp_bottom
			{
				source = "user";
				initPhase = 0;
				animPeriod = 10;
			};
			class fuel_probe 
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.0001;
			};
			class Ramp_top
			{
				source = "user";
				initPhase = 0;
				animPeriod = 10;
			};
			class CollisionLightRed_source
			{
				source = "MarkerLight";
				markerLight = "CollisionRed";
			};
			class CollisionLightWhite_source
			{
				source = "MarkerLight";
				markerLight = "CollisionWhite";
			};
			class lightred
			{
				source = "user";
				initPhase = 1;
				animPeriod = 1;
			};
			class lightgreen
			{
				source = "user";
				initPhase = 1;
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenRamp
			{
				displayName = "Open Cargo Ramp";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow=0;
				condition = "(this animationPhase ""ramp_bottom"" == 0) AND Alive(this)";
				statement = "this animate [""ramp_bottom"",1];this animate [""ramp_top"",1];";
			};
			class CloseRamp: OpenRamp
			{
				displayName = "Close Cargo Ramp";
				condition = "(this animationPhase ""ramp_bottom"" == 1) AND Alive(this)";
				statement = "this animate [""ramp_bottom"",0];this animate [""ramp_top"",0];";
			};
			class OpenLdoor
			{
				displayName = "Open Left Door";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow=0;
				condition = "(this animationPhase ""door_2_1"" == 0) AND Alive(this)";
				statement = "this animate [""door_2_1"",1]";
			
			};
			class extendrefueling 
			{
				displayName = "<t color='#0088ff'>Open Refueling Hatch</t";
				onlyforplayer = 0;
				position = "pilotcontrol";
				radius = 5;
				showWindow = 0;
				condition = "player in this and this animationPhase ""fuel_probe"" < 0.5 and speed this > 100";
				statement = "this animate [""fuel_probe"",1]";
			};
			class retractrefueling 
			{
				onlyforplayer = 0;
				displayName = "<t color='#0088ff'>Close Refueling Hatch</t";
				position = "pilotcontrol";
				radius = 5;
				showWindow = 0;
				condition = "player in this and this animationPhase ""fuel_probe"" > 0.5";
				statement = "this animate [""fuel_probe"",0]";
			};
			class OpenRdoor: OpenLdoor
			{
				displayName = "Open Right Door";
				condition = "(this animationPhase ""door_2_2"" == 0) AND Alive(this)";
				statement = "this animate [""door_2_2"",1]";
			};
			class Closeldoor: OpenLdoor
			{
				displayName = "Close Left Door";
				condition = "(this animationPhase ""door_2_1"" == 1) AND Alive(this)";
				statement = "this animate [""door_2_1"",0]";
			};
			class Closerdoor: OpenLdoor
			{
				displayName = "Close Right Door";
				condition = "(this animationPhase ""door_2_2"" == 1) AND Alive(this)";
				statement = "this animate [""door_2_2"",0]";
			};
			class openfdoor: OpenLdoor
			{
				displayName = "Open Crew Door";
				condition = "(this animationPhase ""door_1"" == 0) AND Alive(this)";
				statement = "this animate [""door_1"",1]";
			};
			class closefdoor: OpenLdoor
			{
				displayName = "Close Crew Door";
				condition = "(this animationPhase ""door_1"" == 1) AND Alive(this)";
				statement = "this animate [""door_1"",0]";
			};
			class lightred
			{
				displayName = "Red Light";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow=0;
				condition = "(this animationPhase ""lighted"" == 1) AND Alive(this)";
				statement = "this animate [""lightred"",0]";
			};
			class lightgreen
			{
				displayName = "Green Light";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow=0;
				condition = "(this animationPhase ""lightred"" == 0) AND Alive(this)";
				statement = "this animate [""lightred"",1];this animate [""lightgreen"",0]";
			};
			class lightoff
			{
				displayName = "Jump Light Off";
				position = "pos_gunner";
				onlyforplayer = 1;
				radius = 6;
				showwindow=0;
				condition = "(this animationPhase ""lightred"" == 0) OR (this animationPhase ""lightgreen"" == 0)";
				statement = "this animate [""lightred"",1];this animate [""lightgreen"",1]";
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				name = "PositionLight_Red_1_pos";
				drawLight = 1;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 0;
			};
			class lightRed
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				name = "beacon_red";
				drawLight = 1;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 1;
			};
			class lightgreen
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				name = "beacon_green";
				drawLight = 1;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 1;
			};
			class PositionGreen: PositionRed
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "PositionLight_Green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "PositionLight_White_1_pos";
				drawLightSize = 0.4;
			};
			class PositionWhite2: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "PositionLight_White_2_pos";
				drawLightSize = 0.4;
			};
			class PositionWhite3: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "PositionLight_White_3_pos";
				drawLightSize = 0.4;
			};
			class PositionWhite4: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "PositionLight_White_4_pos";
				drawLightSize = 0.4;
			};
			class CollisionRed: PositionRed
			{
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				name = "CollisionLight_Red_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.08;
			};
			class CollisionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "CollisionLight_White_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.04;
			};
		};
		class HitPoints
		{
			 class HitLFWheel
			{
				armor = 1;
				material = -1;
				name = "wheel_1_1";
				visual = "";
				passThrough = 0;
			};
			class HitLF2Wheel: HitLFWheel
			{
				name = "wheel_2_1";
			};
			class HitLRF2Wheel: HitLFWheel
			{
				name = "wheel_2_2";
			};
			class HitLBWheel: HitLFWheel
			{
				name = "wheel_3_1";
			};
			class HitRBWheel: HitLFWheel
			{
				name = "wheel_3_2";
			};
		};
		class MFD 
		{
			class HUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5, 0.3};
					pos10[] = {0.9, 0.75};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1.0,0.15,1.0};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5, 0.34};
					};
					class WeaponAim : Pos10Vector
					{
						source = "weapon";
					};
					class Target : Pos10Vector 
					{
						source = "target";
					};
					class Velocity : Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.3};
						pos10[] = {0.9, 0.75};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5, 0.3};
						pos3[] = {0.62, 0.3};
					};
					class ILS_W : ILS_H
					{
						pos3[] = {0.5, 0.435};
					};
					class Level0 : Pos10Vector
					{
						pos0[] = {0.5, 0.34};
						pos10[] = {0.9, 0.79};
						type = "horizon";
						angle = 0;
					};
					class LevelP5 : Level0 
					{
						angle = 5;
					};
					class LevelM5 : Level0
					{
						angle = -5;
					};
					class LevelP10 : Level0
					{
						angle = 10;
					};
					class LevelM10 : Level0
					{
						angle = -10;
					};
					class LevelP15 : Level0 
					{
						angle = 15;
					};
					class LevelM15 : Level0 
					{
						angle = -15;
					};
					class LevelP20 : Level0 
					{
						angle = 20;
					};
					class LevelM20 : Level0
					{
						angle = -20;
					};
					class LevelP25 : Level0
					{
						angle = 25;
					};
					class LevelM25 : Level0
					{
						angle = -25;
					};
					class LevelP30 : Level0 
					{
						angle = 30;
					};
					class LevelM30 : Level0
					{
						angle = -30;
					};
					class LevelP35 : Level0 
					{
						angle = 35;
					};
					class LevelM35 : Level0 
					{
						angle = -35;
					};
					class LevelP40 : Level0
					{
						angle = 40;
					};
					class LevelM40 : Level0 
					{
						angle = -40;
					};
					class LevelP45 : Level0
					{
						angle = 45;
					};
					class LevelM45 : Level0
					{
						angle = -45;
					};
					class LevelP50 : Level0 
					{
						angle = 50;
					};
					class LevelM50 : Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					condition = "on";
					alpha = 1;
					color[] = {0.15,1.0,0.15,1.0};
					class StallGroup
					    {
						type = "group";
						condition = "stall";
						color[] = {1.0,0.0,0.0};
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 9;
							pos[] = {
								{ 0.5,0.25 },1};
							right[] = {
								{ 0.54,0.25 },1};
							down[] = {
								{ 0.5,0.29 },1};
						};
					};
					class PlaneW 
					{
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"PlaneW", {-0.08, 0}, 1}, {"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.015, 0.03375}, 1}, {"PlaneW", {0.0, 0}, 1}, {"PlaneW", {0.015, 0.03375}, 1}, {"PlaneW", {0.03, 0}, 1}, {"PlaneW", {0.08, 0}, 1}};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"Velocity", {0, -0.0225}, 1}, {"Velocity", {0.014, -0.01575}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.014, 0.01575}, 1}, {"Velocity", {0, 0.0225}, 1}, {"Velocity", {-0.014, 0.01575}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.014, -0.01575}, 1}, {"Velocity", {0, -0.0225}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.045}, 1}, {"Velocity", {0, -0.0225}, 1}, {}};
					};
					class Static
					{
						clipTL[] = {0.0, 0.1};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{{0.21, 0.52}, 1}, {{0.19, 0.5}, 1}, {{0.21, 0.48}, 1}, {}, {{0.18, 0.2}, 1}, {{0.18, 0.85}, 1}, {}, {{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.82, 0.2}, 1}, {{0.82, 0.85}, 1}, {}, {{0.52, 0.08+0.01}, 1}, {{0.5, 0.06+0.01}, 1}, {{0.48, 0.08+0.01}, 1}, {}, {{0.2, 0.055+0.01}, 1}, {{0.8, 0.055+0.01}, 1}, {}};
					};
					class Horizont
					{
						clipTL[] = {0.0, 0.0};
						clipBR[] = {1.0, 1.0};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								down[] = {"Level0", {-0.23, 0.025}, 1};
							};
							class VALM_2_0 : VALM_1_0 
							{
								align = "right";
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
								down[] = {"Level0", {0.22, 0.025}, 1};
							};
							class LevelM5 : Level0 
							{
								type = "line";
								points[] = {{"LevelM5", {-0.2, -0.03}, 1}, {"LevelM5", {-0.2, 0}, 1}, {"LevelM5", {-0.15, 0}, 1}, {}, {"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {-0.05, 0}, 1}, {}, {"LevelM5", {0.05, 0}, 1}, {"LevelM5", {0.1, 0}, 1}, {}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.2, 0}, 1}, {"LevelM5", {0.2, -0.03}, 1}};
							};
							class VALM_1_5 
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5", {-0.23, -0.085}, 1};
								right[] = {"LevelM5", {-0.13, -0.085}, 1};
								down[] = {"LevelM5", {-0.23, -0.035}, 1};
							};
							class VALM_2_5 : VALM_1_5 
							{
								align = "right";
								pos[] = {"LevelM5", {0.22, -0.085}, 1};
								right[] = {"LevelM5", {0.32, -0.085}, 1};
								down[] = {"LevelM5", {0.22, -0.035}, 1};
							};
							class LevelP5 : Level0
							{
								type = "line";
								points[] = {{"LevelP5", {-0.2, 0.03}, 1}, {"LevelP5", {-0.2, 0}, 1}, {"LevelP5", {-0.05, 0}, 1}, {}, {"LevelP5", {0.05, 0}, 1}, {"LevelP5", {0.2, 0}, 1}, {"LevelP5", {0.2, 0.03}, 1}};
							};
							class VALP_1_5 
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5", {-0.23, 0.035}, 1};
								right[] = {"LevelP5", {-0.13, 0.035}, 1};
								down[] = {"LevelP5", {-0.23, 0.085}, 1};
							};
							class VALP_2_5 : VALP_1_5
							{
								align = "right";
								pos[] = {"LevelP5", {0.22, 0.035}, 1};
								right[] = {"LevelP5", {0.32, 0.035}, 1};
								down[] = {"LevelP5", {0.22, 0.085}, 1};
							};
							class LevelM10 : Level0 
							{
								type = "line";
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
							};
							class VALM_1_10 
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
							};
							class VALM_2_10 : VALM_1_10 
							{
								align = "right";
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
								down[] = {"LevelM10", {0.22, -0.035}, 1};
							};
							class LevelP10 : Level0 
							{
								type = "line";
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
							};
							class VALP_2_10 : VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
								down[] = {"LevelP10", {0.22, 0.085}, 1};
							};
							class LevelM15 : Level0 
							{
								type = "line";
								points[] = {{"LevelM15", {-0.2, -0.03}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {-0.15, 0}, 1}, {}, {"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {-0.05, 0}, 1}, {}, {"LevelM15", {0.05, 0}, 1}, {"LevelM15", {0.1, 0}, 1}, {}, {"LevelM15", {0.15, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.03}, 1}};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15", {-0.23, -0.085}, 1};
								right[] = {"LevelM15", {-0.13, -0.085}, 1};
								down[] = {"LevelM15", {-0.23, -0.035}, 1};
							};
							class VALM_2_15 : VALM_1_15 
							{
								align = "right";
								pos[] = {"LevelM15", {0.22, -0.085}, 1};
								right[] = {"LevelM15", {0.32, -0.085}, 1};
								down[] = {"LevelM15", {0.22, -0.035}, 1};
							};
							class LevelP15 : Level0 
							{
								type = "line";
								points[] = {{"LevelP15", {-0.2, 0.03}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {-0.05, 0}, 1}, {}, {"LevelP15", {0.05, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.03}, 1}};
							};
							class VALP_1_15 
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15", {-0.23, 0.035}, 1};
								right[] = {"LevelP15", {-0.13, 0.035}, 1};
								down[] = {"LevelP15", {-0.23, 0.085}, 1};
							};
							class VALP_2_15 : VALP_1_15
							{
								align = "right";
								pos[] = {"LevelP15", {0.22, 0.035}, 1};
								right[] = {"LevelP15", {0.32, 0.035}, 1};
								down[] = {"LevelP15", {0.22, 0.085}, 1};
							};
							class LevelM20 : Level0
							{
								type = "line";
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
							};
							class VALM_1_20 
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
							};
							class VALM_2_20 : VALM_1_20 
							{
								align = "right";
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
								down[] = {"LevelM20", {0.22, -0.035}, 1};
							};
							class LevelP20 : Level0 
							{
								type = "line";
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
							};
							class VALP_1_20 
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
							};
							class VALP_2_20 : VALP_1_20 
							{
								align = "right";
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
								down[] = {"LevelP20", {0.22, 0.085}, 1};
							};
							class LevelM25 : Level0 
							{
								type = "line";
								points[] = {{"LevelM25", {-0.2, -0.03}, 1}, {"LevelM25", {-0.2, 0}, 1}, {"LevelM25", {-0.15, 0}, 1}, {}, {"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {-0.05, 0}, 1}, {}, {"LevelM25", {0.05, 0}, 1}, {"LevelM25", {0.1, 0}, 1}, {}, {"LevelM25", {0.15, 0}, 1}, {"LevelM25", {0.2, 0}, 1}, {"LevelM25", {0.2, -0.03}, 1}};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25", {-0.23, -0.085}, 1};
								right[] = {"LevelM25", {-0.13, -0.085}, 1};
								down[] = {"LevelM25", {-0.23, -0.035}, 1};
							};
							class VALM_2_25 : VALM_1_25
							{
								align = "right";
								pos[] = {"LevelM25", {0.22, -0.085}, 1};
								right[] = {"LevelM25", {0.32, -0.085}, 1};
								down[] = {"LevelM25", {0.22, -0.035}, 1};
							};
							class LevelP25 : Level0 
							{
								type = "line";
								points[] = {{"LevelP25", {-0.2, 0.03}, 1}, {"LevelP25", {-0.2, 0}, 1}, {"LevelP25", {-0.05, 0}, 1}, {}, {"LevelP25", {0.05, 0}, 1}, {"LevelP25", {0.2, 0}, 1}, {"LevelP25", {0.2, 0.03}, 1}};
							};
							class VALP_1_25 
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25", {-0.23, 0.035}, 1};
								right[] = {"LevelP25", {-0.13, 0.035}, 1};
								down[] = {"LevelP25", {-0.23, 0.085}, 1};
							};
							class VALP_2_25 : VALP_1_25
							{
								align = "right";
								pos[] = {"LevelP25", {0.22, 0.035}, 1};
								right[] = {"LevelP25", {0.32, 0.035}, 1};
								down[] = {"LevelP25", {0.22, 0.085}, 1};
							};
							class LevelM30 : Level0 
							{
								type = "line";
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
							};
							class VALM_1_30 
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
							};
							class VALM_2_30 : VALM_1_30 
							{
								align = "right";
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
								down[] = {"LevelM30", {0.22, -0.035}, 1};
							};
							class LevelP30 : Level0 
							{
								type = "line";
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
							};
							class VALP_2_30 : VALP_1_30 
							{
								align = "right";
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
								down[] = {"LevelP30", {0.22, 0.085}, 1};
							};
							class LevelM35 : Level0
							{
								type = "line";
								points[] = {{"LevelM35", {-0.2, -0.03}, 1}, {"LevelM35", {-0.2, 0}, 1}, {"LevelM35", {-0.15, 0}, 1}, {}, {"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {-0.05, 0}, 1}, {}, {"LevelM35", {0.05, 0}, 1}, {"LevelM35", {0.1, 0}, 1}, {}, {"LevelM35", {0.15, 0}, 1}, {"LevelM35", {0.2, 0}, 1}, {"LevelM35", {0.2, -0.03}, 1}};
							};
							class VALM_1_35 
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35", {-0.23, -0.085}, 1};
								right[] = {"LevelM35", {-0.13, -0.085}, 1};
								down[] = {"LevelM35", {-0.23, -0.035}, 1};
							};
							class VALM_2_35 : VALM_1_35 
							{
								align = "right";
								pos[] = {"LevelM35", {0.22, -0.085}, 1};
								right[] = {"LevelM35", {0.32, -0.085}, 1};
								down[] = {"LevelM35", {0.22, -0.035}, 1};
							};
							class LevelP35 : Level0 
							{
								type = "line";
								points[] = {{"LevelP35", {-0.2, 0.03}, 1}, {"LevelP35", {-0.2, 0}, 1}, {"LevelP35", {-0.05, 0}, 1}, {}, {"LevelP35", {0.05, 0}, 1}, {"LevelP35", {0.2, 0}, 1}, {"LevelP35", {0.2, 0.03}, 1}};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35", {-0.23, 0.035}, 1};
								right[] = {"LevelP35", {-0.13, 0.035}, 1};
								down[] = {"LevelP35", {-0.23, 0.085}, 1};
							};
							class VALP_2_35 : VALP_1_35
							{
								align = "right";
								pos[] = {"LevelP35", {0.22, 0.035}, 1};
								right[] = {"LevelP35", {0.32, 0.035}, 1};
								down[] = {"LevelP35", {0.22, 0.085}, 1};
							};
							class LevelM40 : Level0 
							{
								type = "line";
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
							};
							class VALM_2_40 : VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
								down[] = {"LevelM40", {0.22, -0.035}, 1};
							};
							class LevelP40 : Level0
							{
								type = "line";
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
							};
							class VALP_2_40 : VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
								down[] = {"LevelP40", {0.22, 0.085}, 1};
							};
							class LevelM45 : Level0
							{
								type = "line";
								points[] = {{"LevelM45", {-0.2, -0.03}, 1}, {"LevelM45", {-0.2, 0}, 1}, {"LevelM45", {-0.15, 0}, 1}, {}, {"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {-0.05, 0}, 1}, {}, {"LevelM45", {0.05, 0}, 1}, {"LevelM45", {0.1, 0}, 1}, {}, {"LevelM45", {0.15, 0}, 1}, {"LevelM45", {0.2, 0}, 1}, {"LevelM45", {0.2, -0.03}, 1}};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45", {-0.23, -0.085}, 1};
								right[] = {"LevelM45", {-0.13, -0.085}, 1};
								down[] = {"LevelM45", {-0.23, -0.035}, 1};
							};
							class VALM_2_45 : VALM_1_45
							{
								align = "right";
								pos[] = {"LevelM45", {0.22, -0.085}, 1};
								right[] = {"LevelM45", {0.32, -0.085}, 1};
								down[] = {"LevelM45", {0.22, -0.035}, 1};
							};
							class LevelP45 : Level0 
							{
								type = "line";
								points[] = {{"LevelP45", {-0.2, 0.03}, 1}, {"LevelP45", {-0.2, 0}, 1}, {"LevelP45", {-0.05, 0}, 1}, {}, {"LevelP45", {0.05, 0}, 1}, {"LevelP45", {0.2, 0}, 1}, {"LevelP45", {0.2, 0.03}, 1}};
							};
							class VALP_1_45 
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45", {-0.23, 0.035}, 1};
								right[] = {"LevelP45", {-0.13, 0.035}, 1};
								down[] = {"LevelP45", {-0.23, 0.085}, 1};
							};
							class VALP_2_45 : VALP_1_45
							{
								align = "right";
								pos[] = {"LevelP45", {0.22, 0.035}, 1};
								right[] = {"LevelP45", {0.32, 0.035}, 1};
								down[] = {"LevelP45", {0.22, 0.085}, 1};
							};
							class LevelM50 : Level0
							{
								type = "line";
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
							};
							class VALM_1_50 
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
							};
							class VALM_2_50 : VALM_1_50 
							{
								align = "right";
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
								down[] = {"LevelM50", {0.22, -0.035}, 1};
							};
							class LevelP50 : Level0
							{
								type = "line";
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
							};
							class VALP_1_50 
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
							};
							class VALP_2_50 : VALP_1_50 
							{
								align = "right";
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
								down[] = {"LevelP50", {0.22, 0.085}, 1};
							};
						};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86, 0.82};
						right[] = {0.94, 0.82};
						down[] = {0.86, 0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = "false";
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class SpeedScale
					{
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06, 0.82-0.85+0.2};
						right[] = {0.14, 0.82-0.85+0.2};
						down[] = {0.06, 0.87-0.85+0.2};
						lineXleft = 0.18 + 0.82 - 0.825;
						lineYright = 0.18 + 0.82 - 0.835;
						lineXleftMajor = 0.18 + 0.82 - 0.825;
						lineYrightMajor = 0.18 + 0.82 - 0.845;
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = "false";
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class Gear 
					{
						condition = "ils";
						class text 
						{
							type = "text";
							source = "static";
							text = GEAR;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.88}, 1};
							right[] = {{0.9, 0.88}, 1};
							down[] = {{0.84, 0.92}, 1};
						};
					};
					class Flaps 
					{
						condition = "flaps";
						class text
						{
							type = "text";
							source = "static";
							text = FLAPS;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.93}, 1};
							right[] = {{0.9, 0.93}, 1};
							down[] = {{0.84, 0.97}, 1};
						};
					};
					class VspeedNumber 
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {{0.86, 0.52-0.4}, 1};
						right[] = {{0.94, 0.52-0.4}, 1};
						down[] = {{0.86, 0.57-0.4}, 1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {0.21-0.01, 0.0};
						right[] = {0.29-0.01, 0.0};
						down[] = {0.21-0.01, 0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = 18/9;
						StepSize = (0.80- 0.2)/20;
						horizontal = "true";
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class ILS 
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0.0, 0.0};
							clipBR[] = {1.0, 1.0};
							class ILS 
							{
								type = "line";
								points[] = {{ILS_W, {-0.24, 0}, 1}, {ILS_W, {0.24, 0}, 1}, {}, {ILS_W, {0, 0.027}, 1}, {ILS_W, {0, -0.027}, 1}, {}, {ILS_W, {0.12, 0.027}, 1}, {ILS_W, {0.12, -0.027}, 1}, {}, {ILS_W, {0.24, 0.027}, 1}, {ILS_W, {0.24, -0.027}, 1}, {}, {ILS_W, {-0.12, 0.027}, 1}, {ILS_W, {-0.12, -0.027}, 1}, {}, {ILS_W, {-0.24, 0.027}, 1}, {ILS_W, {-0.24, -0.027}, 1}, {}, {ILS_H, {0, -0.27}, 1}, {ILS_H, {0, 0.27}, 1}, {}, {ILS_H, {0.024, 0}, 1}, {ILS_H, {-0.024, 0}, 1}, {}, {ILS_H, {0.024, 0.135}, 1}, {ILS_H, {-0.024, 0.135}, 1}, {}, {ILS_H, {0.024, 0.27}, 1}, {ILS_H, {-0.024, 0.27}, 1}, {}, {ILS_H, {0.024, -0.135}, 1}, {ILS_H, {-0.024, -0.135}, 1}, {}, {ILS_H, {0.024, -0.27}, 1}, {ILS_H, {-0.024, -0.27}, 1}};
							};
						};
					};
				};
			};
			class HUD2 : HUD 
		    {
			   topLeft = "HUD2 LH";
			   topRight = "HUD2 PH";
			   bottomLeft = "HUD2 LD";
		    };
		};
		class Turrets: Turrets
		{
			class MainTurret;
			class CopilotTurret: MainTurret
				{
					isCopilot = 1;
					primaryGunner = 0;
					canEject = 0;
					body = "";
					gun = "";
					animationSourceBody = "";
					animationSourceGun = "";
					weapons[] = {};
					magazines[] = {};
					gunnerAction = "C130_Cargo";
					gunnerInAction = "C130_Cargo";
					gunnerName = "$STR_A3_COPILOT";
					gunnerNotSpawned = 1;
					gunnerUsesPilotView = 1;
					hasGunner = 0;
					memoryPointsGetInGunner = "pos gunner";
					memoryPointsGetInGunnerDir = "pos gunner dir";
					minElev = -50;
					maxElev = 30;
					initElev = 11;
					minTurn = -170;
					maxTurn = 170;
					initTurn = 0;
					maxHorizontalRotSpeed = 3;
					maxVerticalRotSpeed = 3;
					class ViewGunner: ViewGunner
					{
						minAngleX = -65;
						maxAngleX = 85;
						initAngleX = 0;
						minAngleY = -150;
						maxAngleY = 150;
						initAngleY = 0;
						minFov = 0.3;
						maxFov = 1.2;
						initFov = 1;
					};
					commanding = -1;
					gunnerLeftHandAnimName = "stick_copilot";
					gunnerRightHandAnimName = "stick_copilot";
					gunnerLeftLegAnimName = "";
					gunnerRightLegAnimName = "";
					turretCanSee = 15;
				};
			};
		};
	class USAF_C130J_Cargo	: USAF_C130J
	{
		displayname = "C-130J Super Hercules(Cargo)";
		model = "\USAF_C130J\USAF_C130J_Cargo.p3d";
		transportSoldier = 0;
		hiddenSelections[] = {"camo1","camo2","Decal"};
		hiddenSelectionsTextures[] = {"USAF_C130J\data\tex\c130j_body_texas_co.paa","USAF_C130J\data\tex\c130j_wings_texas_co.paa","USAF_C130J\data\tex\C130J_Decals_texas.paa"};
	};
};