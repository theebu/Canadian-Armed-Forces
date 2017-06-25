#define _ARMA_

//ndefs=5
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class D:/A3MODS/@CAF_BETA/addons/caf_rotary_wing_c/CH146/config.bin{
class CfgPatches
{
	class caf_griffon
	{
		units[] = {"CAF_CH146_TW","CAF_CH146_AR","CAF_CH146_AC"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgMagazines {
	class 24Rnd_missiles;
		class CAF_19Rnd_FFAR : 24Rnd_missiles {
		
				count = 19;
				
		};
};

class CfgWeapons {
	class M134_minigun;
	
	class caf_M134_R: M134_minigun{
		scope = 1;
		displayname = "M134 Minigun 7.62Â mm";
		magazines[] = {"5000Rnd_762x51_Belt", "5000Rnd_762x51_Yellow_Belt"};
		class GunParticles {
			class FirstEffect {
				directionname = "z_gunR_chamber";
				effectname = "MachineGun2";
				positionname = "z_gunR_muzzle";
			};
			class effect1 {
				directionname = "machinegunR_eject_dir";
				effectname = "MachineGunCartridge";
				positionname = "machinegunR_eject_pos";
			};
		};
	};
	class caf_M134_L: caf_M134_R {
		scope = 1;
		class GunParticles {
			class FirstEffect {
				directionname = "z_gunL_chamber";
				effectname = "MachineGun";
				positionname = "z_gunL_muzzle";
			};
			class effect1 {
				directionname = "machinegunL_eject_dir";
				effectname = "MachineGunCartridge";
				positionname = "machinegunL_eject_pos";
			};
		};
	};
	class missiles_DAGR;
	class FFARLauncher_19: missiles_DAGR {
		displayname = "FFAR Launcher";
		cursor = "EmptyCursor";
		cursoraim = "rocket";
		magazines[] = {"CAF_19Rnd_FFAR"};
	};
	
};

class CfgVehicles
{
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;	
	};
	class Heli_Light_03_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class AnimationSources;
	};
	class CAF_CH146_base_F: Heli_Light_03_base_F
	{
		author = "CAF";
		simulation = "helicopterrtd";
		vehicleclass = "Air";
		_generalMacro = "CAF_CH146_base_F";
		displayName = "CH-146 Griffon";
		model = "";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"caf_rotary_wing_t\tex\ch146_main_co.paa","caf_rotary_wing_t\tex\ch146_ext_co.paa","caf_rotary_wing_t\tex\ch146_ext1_co.paa","caf_rotary_wing_t\tail_numbers\ch146\ch146_decal_400_ca.paa"};
		class textureSources
		{
			class CAF_Green_Camo
			{
				displayName="CAF Green Camo (Default)";
				author= "Theebu";
				textures[]= 
				{
					"caf_rotary_wing_t\tex\ch146_main_co.paa",
					"caf_rotary_wing_t\tex\ch146_ext_co.paa",
					"caf_rotary_wing_t\tex\ch146_ext1_co.paa"
				};
				factions[]= 
				{
					"CAF_TW", "CAF_AR"
				};
			};
		};	
		driveOnComponent[] = {"Skids"};
		picture = "\caf_rotary_wing_c\ui\ch146.paa";
		icon = "\caf_rotary_wing_c\ui\ch146_icon.paa";
		accuracy = 0.5;
		usePreciseGetInAction = 1;
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		cargoGetInAction[] = {"GetInHeli_Transport_01Cargo"};
		cargoCompartments[] = {"Compartment2"};
		cargoGetOutAction[] = {"GetOutLow"};
		GetInAction = "GetInLow";
		GetOutAction = "GetOutLow";
		driverDoor = "DoorR1_Open";
		cargoDoors[] = {};
		driverAction = "pilot_Heli_Transport_01";
		cargoAction[] = {"passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands"};
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";
		ejectdeadcargo = 0;
		ejectdeaddriver = 0;
		castCargoShadow = 1;
		transportSoldier = 8;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		cargoCanEject = 1;
		driverCanEject = 0;
		
		maxSpeed = 300;
		maxFordingDepth = 0.55;
		
		MainRotorSpeed = -0.5;
		backRotorSpeed = 3.0;
		mainBladeRadius = 6.2;
		tailBladeRadius = 1.2;
		
		liftForceCoef = 1.1;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		bodyFrictionCoef = 0.9;

		
		fuelCapacity = 1251;
		fuelConsumptionRate = 0.0939;
		extCameraPosition[] = {0,3,-23};
		gearRetracting = 0;
		gearUpTime = "";
		gearDownTime = "";
		armor = 60;
		damageResistance = 0.00555;
		maximumLoad = 2000;
		memorypointcm[] = {"flare_launcher1","flare_launcher2"};
		memorypointcmdir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		class RotorLibHelicopterProperties
		{
			RTDconfig = "caf_rotary_wing_c\CH146\RTD_Heli_ch146.xml";
			defaultCollective = 0.7;
			autoHoverCorrection[] = {4,3.3,0};
			maxTorque = 2700;
			stressDamagePerSec = 0.0033333332;
			retreatBladeStallWarningSpeed = 87.5;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 110000;
			maxTailRotorStress = 25000;
		};
		class TransportBackpacks{};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_H_RCAF_PilotHelmetHeli
			{
				name = "H_RCAF_PilotHelmetHeli";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_caf_c8a3
			{
				weapon = "caf_c8a3";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556X45_NATO
			{
				magazine = "30Rnd_556X45_NATO";
				count = 8;
			};
		};
		memoryPointSupply = "supplyRadius";
		supplyRadius = -1;
		class MFD{};
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 50;
				name = "NAV_left_red_S";
				drawLight = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 0;
			};
			class PositionRed2: PositionRed
			{
				name = "NAV_leftT_red_S";
			};
			class PositionGreen: PositionRed
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "NAV_right_green_S";
			};
			class PositionGreen2: PositionGreen
			{
				name = "NAV_rightT_green_S";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "NAV_tail_white_S";
				drawLightSize = 0.2;
			};
			class PositionWhite2: PositionWhite
			{
				name = "NAV_top_NV_B";
				blinking = 1;
			};
		};
		class Reflectors
		{
			class Light
			{
				color[] = {8000,6500,3500};
				ambient[] = {80,60,30};
				intensity = 40;
				size = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;
				position = "landinglight01_pos";
				direction = "landinglight01_dir";
				hitpoint = "Light_hitpoint";
				selection = "landingLight01";
				useFlare = 1;
				flareSize = 8;
				flareMaxDistance = 300;
				dayLight = 0;
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
		aggregateReflectors[] = {{ "Left","Right" }};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
			};
		};
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		attenuationEffectType = "OpenHeliAttenuation";

		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1.0,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1.0,1.0,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1.0,1.0,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.7782794,1.0,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.7782794,1.0,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1.0,1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.0,1.0,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound",1.0,1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.0,1.0,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1.0,1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1.0,1.0,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1.0,1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1.0,1.0,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		
		destrType = "DestructWreck";
		class UserActions
		{
			class DoorL1_Open
			{
				userActionID = 50;
				displayName = "open Co-Pilot Door";
				priority = 1.5;
				radius = 2.5;
				radiusView = 2.5;
				position = "action_doorL1";
				showWindow = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "((this DoorPhase 'DoorL1_Open') == 0) && (alive this)";
				statement = "this animatedoor ['DoorL1_Open', 1]";
			};
			class DoorL2_Open: DoorL1_Open
			{
				userActionID = 51;
				displayName = "open Left Aux Door";
				position = "action_doorL2";
				condition = "((this animationPhase 'DoorL2_Open') == 0) && (alive this)";
				statement = "this animate ['DoorL2_Open', 1]";
			};
			class DoorL3_Open: DoorL1_Open
			{
				userActionID = 52;
				displayName = "open Left Main Cabin Door";
				position = "action_doorL3";
				condition = "((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement = "this animatedoor ['DoorL3_Open', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID = 53;
				displayName = "open Pilot Door";
				position = "action_doorR1";
				condition = "((this DoorPhase 'DoorR1_Open') == 0) && (alive this)";
				statement = "this animatedoor ['DoorR1_Open', 1]";
			};
			class DoorR2_Open: DoorL1_Open
			{
				userActionID = 54;
				displayName = "open Right Aux Door";
				position = "action_doorR2";
				condition = "((this animationPhase 'DoorR2_Open') == 0) && (alive this)";
				statement = "this animate ['DoorR2_Open', 1]";
			};
			class DoorR3_Open: DoorL1_Open
			{
				userActionID = 55;
				displayName = "open Right Main Cabin Door";
				position = "action_doorR3";
				condition = "((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement = "this animatedoor ['DoorR3_Open', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID = 56;
				displayName = "Close Co-Pilot Door";
				condition = "((this DoorPhase 'DoorL1_Open') > 0) && (alive this)";
				statement = "this animatedoor ['DoorL1_Open', 0]";
			};
			class DoorL2_Close: DoorL1_Close
			{
				userActionID = 57;
				displayName = "Close Left Aux Door";
				position = "action_doorL2_front";
				condition = "((this animationPhase 'DoorL2_Open') > 0) && (alive this)";
				statement = "this animate ['DoorL2_Open', 0]";
			};
			class DoorL3_Close: DoorL1_Close
			{
				userActionID = 58;
				displayName = "Close Left Main Cabin Door";
				position = "action_doorL3";
				condition = "((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement = "this animatedoor ['DoorL3_Open', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID = 59;
				displayName = "Close Pilot Door";
				position = "action_doorR1";
				condition = "((this DoorPhase 'DoorR1_Open') > 0) && (alive this)";
				statement = "this animatedoor ['DoorR1_Open', 0]";
			};
			class DoorR2_Close: DoorL1_Close
			{
				userActionID = 60;
				displayName = "Close Right Aux Door";
				position = "action_doorR2";
				condition = "((this animationPhase 'DoorR2_Open') > 0) && (alive this)";
				statement = "this animate ['DoorR2_Open', 0]";
			};
			class DoorR3_Close: DoorL1_Close
			{
				userActionID = 61;
				displayName = "Close Right Main Cabin Door";
				position = "action_doorR3";
				condition = "((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement = "this animatedoor ['DoorR3_Open', 0]";
			};
		};
		class AnimationSources: AnimationSources
		{
			class DoorL1_Open
			{
				source = "door";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class DoorL2_Open
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class DoorL3_Open
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class DoorR1_Open: DoorL1_Open{};
			class DoorR2_Open: DoorL2_Open{};
			class DoorR3_Open: DoorL3_Open{};
			class Inspect_Panel1_1
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class Inspect_Panel2_1: Inspect_Panel1_1{};
			class RotorCover_Hide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class Holder
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class Gun_HRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Gun_VRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Minigun
			{
				source = "revolving";
				weapon = "LMG_Minigun";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "LMG_Minigun";
			};
			class Minigun2
			{
				source = "revolving";
				weapon = "LMG_Minigun2";
			};
			class Muzzle_flash2
			{
				source = "ammorandom";
				weapon = "gatling_20mm";
			};
			class LightsLDGButton_On
			{
				source = "user";
				initPhase = 1;
			};
		};
		driverCompartments = "Compartment1";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
		};
		class Armory
		{
			description = "CH-146 Griffon Canadian Armed Forces Medium Tactical Helicopter";
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		enableManualFire = 0;
		class HitPoints
		{
			class HitFuel
			{
				name = "fuel tanks";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitHydraulics
			{
				name = "hydraulics";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitMissiles
			{
				name = "missiles";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitLGlass
			{
				name = "lglass";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitRGlass
			{
				name = "rglass";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitTransmission
			{
				name = "transmission";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitHRotor
			{
				name = "main rotor";
				visual = "main rotor";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.8;
			};
			class HitVRotor
			{
				name = "tail rotor";
				visual = "tail rotor";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.8;
			};
			class HitPitotTube
			{
				name = "Pitot Tube";
				visual = "Pitot Tube";
				armor = 0.4;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.3;
			};
			class HitAvionics
			{
				name = "instruments";
				visual = "instruments";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 0;
				minimalHit = 0.3;
			};
			class HitHull
			{
				name = "hull";
				visual = "zbytek";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitEngine
			{
				armor = 0.6;
				name = "engine1";
				visual = "zbytek";
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.35;
			};
			class HitEngine2
			{
				armor = 0.6;
				name = "engine2";
				visual = "zbytek";
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.35;
			};
			class HitTail
			{
				name = "tail boom";
				visual = "zbytek";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"caf_rotary_wing_t\tex\ch146_rotor.rvmat","caf_rotary_wing_t\tex\ch146_rotor_damage.rvmat","caf_rotary_wing_t\tex\ch146_rotor_destruct.rvmat","caf_rotary_wing_t\tex\ch146_main.rvmat","caf_rotary_wing_t\tex\ch146_main_damage.rvmat","caf_rotary_wing_t\tex\ch146_main_destruct.rvmat","caf_rotary_wing_t\tex\ch146_in.rvmat","caf_rotary_wing_t\tex\ch146_in_damage.rvmat","caf_rotary_wing_t\tex\ch146_in_destruct.rvmat","caf_rotary_wing_t\tex\ch146_glass.rvmat","caf_rotary_wing_t\tex\ch146_glass_damage.rvmat","caf_rotary_wing_t\tex\ch146_glass_damage.rvmat","caf_rotary_wing_t\tex\ch146_ext1.rvmat","caf_rotary_wing_t\tex\ch146_ext1_damage.rvmat","caf_rotary_wing_t\tex\ch146_ext1_destruct.rvmat","caf_rotary_wing_t\tex\ch146_ext.rvmat","caf_rotary_wing_t\tex\ch146_ext_damage.rvmat","caf_rotary_wing_t\tex\ch146_ext_destruct.rvmat","caf_rotary_wing_t\tex\ch146_detail.rvmat","caf_rotary_wing_t\tex\ch146_detail_damage.rvmat","caf_rotary_wing_t\tex\ch146_detail_destruct.rvmat"};
		};
		cost = 1500000;
	};
	class CAF_CH146_TW: CAF_CH146_base_F
	{
		author = "CAF";
		_generalMacro = "CAF_CH146_TRANS";
		scope = 2;
		side = 1;
		faction = "CAF_TW";
		displayname = "CH-146 GRIFFON";
		model = "\caf_rotary_wing\ch146\CAF_CH146_TRANS.p3d";
		crew = "CAF_CH146_PILOT_OD";
		typicalCargo[] = {"CAF_CH146_PILOT_OD"};
		availableForSupportTypes[] = {"Drop","Transport"}; 
		transportSoldier = 8;
		cargoAction[] = {"passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_flatground_generic02","passenger_flatground_generic02","ChopperLight_CB_static_H","ChopperLight_CB_static_H"};
		memoryPointsGetInCargo[] = {"pos Cargo R","pos Cargo L","pos Cargo R","pos Cargo L","pos Cargo R","pos Cargo L","pos Cargo R","pos Cargo L"};
		memoryPointsGetInCargoDir[] = {"pos Cargo dir R","pos Cargo dir L","pos Cargo dir R","pos Cargo dir L","pos Cargo dir R","pos Cargo dir L","pos Cargo dir R","pos Cargo dir L"};
		memoryPointsGetInCargoPrecise[] = {"GetIn_R_Cargo","GetIn_L_Cargo","GetIn_R_Cargo","GetIn_L_Cargo","GetIn_R_Cargo","GetIn_L_Cargo","GetIn_R_Cargo","GetIn_L_Cargo"};
		showNVGCargo[] = {1,1,1};
		ejectDeadCargo = 0;
		weapons[] = {"FFARLauncher_19","CMFlareLauncher"};
		magazines[] = {"CAF_19Rnd_FFAR","168Rnd_CMFlare_Chaff_Magazine"};
		memorypointlmissile = "missile 1";
		memorypointrmissile = "missile 1";
		class UserActions
		{
			class DoorL1_Open
			{
				userActionID = 50;
				displayName = "open Co-Pilot Door";
				priority = 1.5;
				radius = 2.5;
				radiusView = 2.5;
				position = "action_doorL1";
				showWindow = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "((this DoorPhase 'DoorL1_Open') == 0) && (alive this)";
				statement = "this animatedoor ['DoorL1_Open', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID = 53;
				displayName = "open Pilot Door";
				position = "action_doorR1";
				condition = "((this DoorPhase 'DoorR1_Open') == 0) && (alive this)";
				statement = "this animatedoor ['DoorR1_Open', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID = 56;
				displayName = "Close Co-Pilot Door";
				condition = "((this DoorPhase 'DoorL1_Open') > 0) && (alive this)";
				statement = "this animatedoor ['DoorL1_Open', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID = 59;
				displayName = "Close Pilot Door";
				position = "action_doorR1";
				condition = "((this DoorPhase 'DoorR1_Open') > 0) && (alive this)";
				statement = "this animatedoor ['DoorR1_Open', 0]";
			};
		};
		class AnimationSources: AnimationSources
		{
			class DoorL1_Open
			{
				source = "door";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class DoorL3_Open
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class DoorR1_Open: DoorL1_Open{};
			class DoorR3_Open: DoorL3_Open{};
			class Inspect_Panel1_1
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class Inspect_Panel2_1: Inspect_Panel1_1{};
			class RotorCover_Hide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class Holder
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class Gun_HRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class Gun_VRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class GunL_Revolving
			{
				source = "revolving";
				weapon = "CAF_M134_L";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "CAF_M134_L";
			};
			class GunR_Revolving
			{
				source = "revolving";
				weapon = "CAF_M134_R";
			};
			class Muzzle_flash2
			{
				source = "ammorandom";
				weapon = "CAF_M134_R";
			};
			class LightsLDGButton_On
			{
				source = "user";
				initPhase = 1;
			};
		};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		class RenderTargets
		{
			class FLIR2
			{
				renderTarget = "rendertarget1";
				class CameraView2
				{
					pointPosition = "z_FLIR_pos";
					pointDirection = "z_FLIR_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.7;
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInLow";
				gunnergetOutAction = "GetOutLow";
				preciseGetInOut = 0;
				GunnerDoor = "DoorL1_Open";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 3;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment1";
				commanding = -3;
				weapons[] = {};
				magazines[] = {};
				body = "FLIR_HRot";
				gun = "FLIR_VRot";
				animationSourceBody = "FLIR_HRot";
				animationSourceGun = "FLIR_VRot";
				cameraBegin = "z_FLIR_pos";
				cameraEnd = "z_FLIR_dir";
				stabilizedInAxes = 3;
				memoryPointGunnerOptics = "z_FLIR_pos";
				isCopilot = 1;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret";
				turretInfoType = "RscOptics_UAV_gunner";
				primaryObserver = 1;
				turretFollowFreeLook = 1;
				gunnerName = "Co-Pilot";
				driverLeftLegAnimName = "pedalL";
				driverRightLegAnimName = "pedalR";
				proxytype = "CPGunner";
				class ViewOptics;
				class OpticsOut
				{
					class View01: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -80;
						maxAngleX = 80;
						initAngleY = 0;
						minAngleY = -130;
						maxAngleY = 130;
						initFov = 1;
						minFov = 0.4;
						maxFov = 1;
						gunnerOpticsModel = "";
					};
				};
				class OpticsIn
				{
					class View01: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.01;
						maxFov = 1.0;
						visionMode[] = {"Ti","NVG","Normal"};
						thermalMode[] = {0,1,7};
						gunnerOpticsModel = "\caf_rotary_wing\optika_flir.p3d";
					};
				};
				minElev = -74;
				maxElev = 14;
				initElev = -5;
				minTurn = -171;
				maxTurn = 171;
				initTurn = 0;
			};
			class MainTurret: MainTurret
			{
				body = "GunL_HRot";
				gun = "GunL_VRot";
				animationSourceBody = "GunL_HRot";
				animationSourceGun = "GunL_VRot";
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				weapons[] = {"caf_M134_L"};
				magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Belt"};
				selectionFireAnim = "zaslehL";
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = -3;
				maxTurn = 173;
				initTurn = 88;
				gunnerForceOptics = 0;
				gunnerName = "Left Gunner";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				startengine = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				GunnerDoor = "";
				commanding = -2;
				proxyIndex = 1;
				primaryObserver = 0;
				primaryGunner = 1;
				gunnerCompartments = "Compartment1";
				iscopilot = 0;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret2";
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = 0;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				memoryPointsGetInGunner = "pos_gunnerL";
				memoryPointsGetInGunnerDir = "pos_gunnerL_dir";
				gunBeg = "z_gunL_muzzle";
				gunEnd = "z_gunL_chamber";
				memoryPointGun = "z_machinegunL";
				memoryPointGunnerOptics = "z_gunnerviewL";
			};
			class RightTurret: MainTurret
			{
				body = "GunR_HRot";
				gun = "GunR_VRot";
				animationSourceBody = "GunR_HRot";
				animationSourceGun = "GunR_VRot";
				weapons[] = {"caf_M134_R"};
				magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Belt"};
				selectionFireAnim = "zaslehR";
				gunnerName = "Right Gunner";
				commanding = -2;
				primaryGunner = 0;
				proxyIndex = 2;
				gunnerCompartments = "Compartment1";
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				GunnerDoor = "";
				memoryPointsGetInGunnerPrecise = "GetIn_Turret3";
				minElev = -50;
				maxElev = 30;
				initElev = -40;
				minTurn = 183;
				maxTurn = 355;
				initTurn = 270;
				memoryPointsGetInGunner = "pos_gunnerR";
				memoryPointsGetInGunnerDir = "pos_gunnerR_dir";
				gunBeg = "z_gunR_muzzle";
				gunEnd = "z_gunR_chamber";
				memoryPointGun = "z_machinegunR";
				memoryPointGunnerOptics = "z_gunnerviewR";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_gunnerR";
				memoryPointsGetInGunnerDir = "pos_gunnerR_dir";
				gunnerName = "$STR_A3_TURRETS_BENCH_R1";
				proxyIndex = 7;
				maxElev = 45;
				minElev = -45;
				maxTurn = 95;
				minTurn = -95;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				class dynamicViewLimits
				{
					CargoTurret_04[] = {-65,95};
				};
				playerPosition = 4;
				soundAttenuationTurret = "";
				disableSoundAttenuation = 1;
				gunnerGetInAction = "GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos_gunnerL";
				memoryPointsGetInGunnerDir = "pos_gunnerL_dir";
				gunnerName = "$STR_A3_TURRETS_BENCH_L2";
				proxyIndex = 8;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-65,95};
				};
			};
		};
		class Armory
		{
			description = "CH-146 Griffon Canadian Armed Forces Medium Tactical Helicopter";
		};
	};
	class CAF_CH146_AR : CAF_CH146_TW {
		faction = "CAF_AR";
		crew = "CAF_CH146_PILOT_AR";
	};
	class CAF_CH146_AC : CAF_CH146_TW {
		faction = "CAF_AC";
		crew = "CAF_CH146_PILOT_OD";
	};
	
};
//};