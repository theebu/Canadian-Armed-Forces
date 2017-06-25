



enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class DefaultEventhandlers;	// External class reference


class CfgPatches
{
	class caf_core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F", "A3_characters_F"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class CAF_TW
	{
		displayName = "Canada (TW)";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
	class CANSOFCOM
	{
		displayName = "Cansofcom";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
	class CAF_AR
	{
		displayName = "Canada (AR)";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
	class CAF_AC
	{
		displayName = "Canada (AC)";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
};
class cfgVehicleClasses
{
	class men_RCAF
	{
		displayName = "Air Crew";
	};
};

