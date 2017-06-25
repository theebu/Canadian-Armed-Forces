
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
class CfgPatches
{
class CAF_M72A6
{
units[] = {};
weapons[] = {"M72A6"};
requiredVersion = 0.1;
requiredAddons[] = {"A3_Weapons_F"};
};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class CfgAmmo {
	
		
				
		class R_PG32V_F;
		class R_60MM_HE;
		class RocketBase;
	class 60MM_ROCKET: RocketBase {
		
		hit = 150;
		indirectHit = 50;
		indirectHitRange = 5;
		cost = 300;
		airfriction = -0.0005;
		sideAirFriction = 0.05;
		maxSpeed = 120;
		initTime = 0;
		thrust = 100;
		thrusttime = 5;
		fuseDistance = 100;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		model = "\CAF_weapons\firedRound.p3d";
		
	};
};

class CfgMagazines
{
class Default {
		caf_disposable = 0;
	};
class CA_Magazine;
class CA_LauncherMagazine;
class RPG32_F;

	class 1Rnd_M72a6 : CA_LauncherMagazine {
		allowedSlots[] = {701,801,901};
		caf_disposable = 1;
		displayName = "M72A6";
		scope = 2;
		count = 1;
		ammo = "60MM_ROCKET";
		picture = "\caf_weapons_t\inv\60mm_rocket.paa";
		modelSpecial = "\CAF_weapons\CAF_M72a6_launcher_loaded";
		model = "\CAF_weapons\firedRound.p3d";
		initSpeed = 145;
		descriptionShort = "1Rnd M72a6";
		mass = 0;
		
	};
	
	class caf_m72a6_USED : 1Rnd_M72A6 {
		scope = 1;
		count = 0;
		type = 0;
		CAF_disposable = 0;
		displayName = M72A6 Used;
	};
};



class CfgWeapons {

	class Default {
		caf_disposable = 0;
	};	// External class reference

	class Launcher;	// External class reference
	
	class Launcher_Base_F : Launcher {
		class WeaponSlotsInfo;	// External class reference
	
	};
	class launch_RPG32_F;
	
	class caf_m72a6 : Launcher  {
	
		//CSE VALUES
		cse_backblastAngle = 75;
   		cse_backblastDamage = 0.7;
   		cse_backblast_maxDistance = 40;
   		cse_backblast_noObjectDistance = 15;
	
		scope = 2;
		CAF_disposable=1;
		CAF_disposable_used = "caf_m72a6_USED";
		CAF_disposable_tube = "CAF_M72a6_USED_TUBE";
		autoReload = false;
		displayName = M72A6;
		model = "\CAF_weapons\CAF_M72a6_collapsed";
		modelSpecial = "\CAF_weapons\CAF_M72a6_launcher_loaded";
		handAnim[] = {"OFP2_ManSkeleton", "\CAF_weapons_c\anims\bog_std_launcher.rtm"};
		modelOptics = "-";
		magazines[] = {"1Rnd_M72a6"};
		magazineReloadTime = 3;
		sounds[] = {"StandardSound"};
		class StandardSound {
			begin1[] = {"\CAF_weapons_s\m72a6\m72a6Fire.ogg", 2.0, 1, 800};
			soundBegin[] = {"begin1", 1};
			weaponSoundEffect = "DefaultRifle";
		};
		reloadMagazineSound[] = {"\CAF_weapons_s\m72a6\m72a6_load.ogg", 0.316228, 1, 20};
		drySound[] = {"A3\sounds_f\weapons\other\dry6.wss", 0.0316228, 1, 10};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1.wss", 0.316228, 1.5, 700};
		picture = "\caf_weapons_t\inv\m72a6.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		recoil = "launcherBase";
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;
		//weaponInfoType = "RscWeaponZeroing";
		//discreteDistance[] = {100, 200, 300};
		//discreteDistanceInitIndex = 0;
		class Library {
			libTextDesc = M72A6 Short Range Anti Tank Weapon;
		};
		descriptionShort = M72A6;
		
		class WeaponSlotsInfo {
			mass = 100;
			allowedSlots[] = {901};
		};
	
		class ItemInfo {
			priority = 3;
			RMBhint = M72A6;
			onHoverText = "TODO M72A6 DSS";
		};
		
	};
		class caf_m72a6_USED : caf_m72a6 {
		scope = 1;
		caf_disposable = 0;
		magazines[] = {"caf_m72a6_USED"};
		displayName = "M72A6 (USED)";
		model = "\caf_weapons\caf_M72a6_launcher";
	};
	
	
	
};
	
	
class Extended_Fired_EventHandlers
{
	class Man
	{
		caf_disposable = "if ((local (_this select 0)) && (getNumber (configFile >> 'CfgWeapons' >> _this select 1 >> 'caf_disposable') == 1)) then { _this spawn caf_disposable_fired };";
	};
};

class Extended_PostInit_EventHandlers
{
	class caf_disposable
	{
		init = "call compile preProcessFileLineNumbers 'caf_weapons_c\m72a6\scripts\XEH_PostInit_Once.sqf'";
	};
};

class CfgVehicles {

	class Thing; // External class reference
	

		class CAF_M72a6_USED_TUBE : Thing {
		scope = 1;
		side = -1;
		model = "caf_weapons\caf_M72a6_launcher_loaded.p3d";
		icon = "";
		displayName = "";
		nameSound = "";
		destrType = "DestructNo";
		simulation = "thingx";
		mapSize = 0;
		accuracy = 0;
		armor = 5;
		weight = 200;
		airFriction2[] = {0.3, 0.3, 0.3};
		airFriction1[] = {0.3, 0.3, 0.3};
		airFriction0[] = {0.3, 0.3, 0.3};
	};


};

