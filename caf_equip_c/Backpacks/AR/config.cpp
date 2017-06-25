
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
	class caf_equip_b_ar
	{
		units[] = {"B_caf_Bergen_AR","B_caf_KitBag_AR","B_caf_AssaultPack_AR","B_CAF_Carryall_ar","B_CAF_Carryall_Medical_ar"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F", "A3_characters_F"};
	};
};

class CfgVehicles
{
	class B_Bergen_mcamo;
	class B_caf_Bergen_AR : B_Bergen_mcamo {
	
		scope = 2;
		displayName = "Tactical Back Pack (AR)";
		picture = "caf_equip_t\inv\icon_b_c_small_ar.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_small_ar_co.paa"};
		
	};

	class B_Kitbag_cbr;
	class B_caf_KitBag_AR : B_Kitbag_cbr {
	
		scope = 2;
		displayName = "Fast Pack (AR)";
		picture = "caf_equip_t\inv\icon_b_c_kitbag_ar.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_fast_ar_co.paa"};
		
	};
	
	class B_AssaultPack_mcamo;
	class B_caf_AssaultPack_AR : B_AssaultPack_mcamo {
	
		scope = 2;
		displayName = "Assault Pack (AR)";
		picture = "caf_equip_t\inv\icon_b_c_compact_ar_ca.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_compact_cadpat_ar_co.paa"};
		
	};
	
	class B_Carryall_oucamo;
	class B_CAF_Carryall_ar : B_Carryall_oucamo 
	{
		scope = 2;
		picture = "\caf_equip_t\inv\icon_b_c_tortila_ar.paa";
		displayName = "Carry All (AR)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_tortila_ar_co.paa"};
		mass = 30;
		maximumload = 220;
		
	};
	
	class B_CAF_Carryall_Medical_ar : B_Carryall_oucamo {
		scope = 2;
		picture = "\caf_equip_t\inv\icon_b_c_med_ar.paa";
		displayName = "Medical Bag (AR)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\backpack_med_ar_co.paa"};
		mass = 30;
		maximumload = 400;
		transportMaxWeapons = 0;
		class TransportItems {};
		};
	};
};