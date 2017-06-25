class CfgPatches
{
	class caf_ammo
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgAmmo
{
 class BulletBase;
	class R_12GA_Slug : BulletBase {
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		visibleFire = 18;	// how much is visible when this weapon is fired
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
		scope = 2;
	};
	
	class R_12GA_BeanBag : BulletBase {
		hit = 2;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		visibleFire = 18;	// how much is visible when this weapon is fired
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
		scope = 2;
	};
	
	class R_12GA_Buck : BulletBase {
		hit = 8;
		indirectHit = 1;
		indirectHitRange = 1.5;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		visibleFire = 18;	// how much is visible when this weapon is fired
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
		scope = 2;
	};
};







class CfgMagazines
{
	class CA_Magazine;
	
	class 30Rnd_556x45_stanag;
	class 30Rnd_556X45_NATO : 30Rnd_556x45_stanag
{
		displayName = "30Rnd 556x45 Mag NATO";
		ammo = "B_556x45_Ball_Tracer_Red";
		tracersEvery = 0;
		lastRoundsTracer = 2;
	};
	
		class 200Rnd_556x45_Belt: CA_Magazine
	{
		ammo = "B_762x51_Tracer_Red";
		count = 200;
		descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200 <br/>Used in: C9A2";
		displayname = "200Rnd C9 Belt";
		model = "\caf_weapons\Beltbag.p3d";
		initspeed = 915;
		lastroundstracer = 5;
		namesound = "mgun";
		picture = "\caf_weapons_t\inv\beltbag.paa";
		scope = 2;
		tracersevery = 4;
		type = "2* 256";
		mass = 16;
	};
	
	 class 220Rnd_762x51_Belt : CA_Magazine 
	 {
		scope = 2;
		displayName = "220Rnd C6 Belt";
		picture = "\caf_weapons_t\inv\beltbox.paa";
		model = "\caf_weapons\beltbox.p3d";
		count = 220;
		type = 2*		256;
		ammo = "B_762x51_Tracer_Red";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 10;
		nameSound = "mgun";
		descriptionShort = "220 Rounds of linked 7.62x51mm NATO rounds for the C6 GPMG";
		mass = 18;
	
	};
	
	class 440Rnd_762x51_Belt : 220Rnd_762x51_Belt {
	
		scope = 1;
		displayname = "440Rnd C6 Belt";
		count = 440;
		mass = 36;
	};

	class 7Rnd_408_Mag;	// External class reference
	
	class 5Rnd_338_Lapua : 7Rnd_408_Mag 
	{
		count = 5;
		descriptionshort = "Caliber: .338 Lapua Magnum<br />Rounds: 30<br />Used in: Tac300";
		displayname = "5 Rounds .338";
		lastroundstracer = 0;
		picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
		scope = 2;
		tracersevery = 0;
	};
	
	class 5Rnd_338_Lapua_Tracer : 7Rnd_408_Mag 
	{
		count = 5;
		descriptionshort = "Caliber: .338 Lapua Magnum<br />Rounds: 30<br />Used in: Tac300";
		displayname = "5 Rounds .338 Tracer";
		ammo = "B_127x99_Ball_Tracer_Red";
		lastroundstracer = 5;
		picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
		scope = 2;
		tracersevery = 1;
	};
	
	class 3Rnd_870_Slug_12GA : CA_Magazine {
		scope = 2;
		displayName = "3Rnd Slug";
		ammo = "R_12GA_Slug";
		count = 3;
		initSpeed = 396;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 3 <br/>Used in: Shotgun";
	};

	class 3Rnd_870_Buck_12GA : ca_magazine {
		scope = 2;
		displayName = "3Rnd Buckshot";
		ammo = "R_12GA_Buck";
		count = 3;
		initSpeed = 440;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 3 <br/>Used in: Shotgun";
	};
	
	class 6Rnd_870_Slug_12GA : CA_Magazine {
		scope = 2;
		displayName = "6Rnd Slug";
		ammo = "R_12GA_Slug";
		count = 6;
		initSpeed = 396;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 6 <br/>Used in: Shotgun";
	};
	class 6Rnd_870_BeanBag_12GA : CA_Magazine {
		scope = 2;
		displayName = "6Rnd Police Beanbag";
		ammo = "R_12GA_BeanBag";
		count = 6;
		initSpeed = 396;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 6 <br/>Used in: Shotgun";
	};
	
	class 6Rnd_870_Buck_12GA : ca_magazine {
		scope = 2;
		displayName = "6Rnd Buckshot";
		ammo = "R_12GA_Buck";
		count = 6;
		initSpeed = 440;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 6 <br/>Used in: Shotgun";
	};
	
};
	
