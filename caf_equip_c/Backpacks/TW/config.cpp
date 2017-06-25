
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
	class caf_equip_b_tw
	{
		units[] = {"B_CAF_Rucksack","B_caf_Bergen_TW","B_caf_Kitbag_TW","B_caf_AssaultPack_TW","B_CAF_Carryall_TW","B_CAF_Carryall_Medical_TW"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F", "A3_characters_F"};
	};
};
class CfgVehicles

{

	class Weapon_Bag_Base;

	class B_CAF_Rucksack : Weapon_Bag_Base {
			_generalmacro = "B_CAF_Rucksack";
			author = "OHally";
			displayname = "Rucksack";
			faction = "CAF_TW";
			mapsize = 0.6;
			mass = 100;
			maximumload = 700;
			transportMaxWeapons = 6;
			transportMaxMagazines = 60;
			transportMaxItems = 50;
			model = "caf_equip\rucksack_caf.P3D";
			picture = "\caf_equip_t\inv\icon_b_c_uav_tw_ca.paa";
			scope = 2;
			side = 1;
		};

	class B_Bergen_mcamo;
	class B_caf_Bergen_TW : B_Bergen_mcamo 
	{
		scope = 2;
		picture = "caf_equip_t\inv\icon_b_c_small_tw.paa";
		displayName = "Tactical Back Pack (TW)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_small_tw_co.paa"};
		
	};


	class B_Kitbag_cbr;
	class B_caf_Kitbag_TW : B_Kitbag_cbr {
	
		scope = 2;
		displayName = "Fast Pack (TW)";
		picture = "caf_equip_t\inv\icon_b_c_kitbag_tw.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_fast_tw_co.paa"};
		
	};

	class B_AssaultPack_mcamo;
	
	class B_caf_AssaultPack_TW : B_AssaultPack_mcamo {
	
		scope = 2;
		displayName = "Assault Pack (TW)";
		picture = "caf_equip_t\inv\icon_b_c_compact_tw_ca.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_compact_cadpat_tw_co.paa"};
		
	};

	class B_Carryall_oucamo;
	
	class B_CAF_Carryall_TW : B_Carryall_oucamo {
		scope = 2;
		picture = "\caf_equip_t\inv\icon_b_c_tortila_tw.paa";
		displayName = "Carry All (TW)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\caf_carryall_co.paa"};
		mass = 30;
		maximumload = 220;
		
	};
	
	class B_CAF_Carryall_Medical_TW : B_Carryall_oucamo {
		scope = 2;
		picture = "\caf_equip_t\inv\icon_b_c_tortila_tw.paa";
		displayName = "Medical Bag (TW)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\caf_carryallmed_co.paa"};
		mass = 30;
		maximumload = 400;
		transportMaxWeapons = 0;
		class TransportItems {};
		};
	};
};