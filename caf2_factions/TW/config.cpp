
#include "cfgGroupsTW.hpp"

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
	class caf_inf_tw
	{
		units[] = {"CAF_RIFLEMAN_tw","CAF_GRENADIER_tw","CAF_C9GUNNER_tw","CAF_SECTIONIC_tw","CAF_SECTION2IC_tw","CAF_C6GUNNER_tw","CAF_84GUNNER_tw","CAF_RIFLEMAN_AT","CAF_MEDIC_tw","CAF_OFFICER_tw","CAF_SNIPER_tw","CAF_SPOTTER_tw","CAF_VEHTECH_tw","CAF_CBTENGINEER_tw","CAF_GPMGASST_tw","CAF_ATASST_tw","CAF_CREWMAN_tw","CAF_RECCE_IC_tw","CAF_RECCE_2IC_tw","CAF_RECCE_C9_tw","CAF_RECCE_SIG"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};


class CfgVehicles
{

	class CAF_Soldier01_tw;
	class CAF_Soldier02_tw;

	
	class CAF_RIFLEMAN_tw : CAF_Soldier01_tw {
	
			
		
		_generalMacro = "CAF_RIFLEMAN_tw";
		scope = 2;
		faction = CAF_TW;
		author = "CAF MOD TEAM";
		displayName = "Rifleman";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
		"CAF_C7A2", 
		"CAF_M72A6", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_C7A2", 
		"CAF_M72A6", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	
	
	};

	class CAF_MARKSMAN_tw : CAF_RIFLEMAN_tw {
		_generalMacro = "CAF_MARKSMAN_tw";
		scope = 2;
		faction = CAF_TW;
		displayName = "Marksman";
		weapons[] = {
		"CAF_tw10t", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_tw10t", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Ammunition
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_MARKSMAN_tw", 
		"H_CAF_CG634_NET_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_MARKSMAN_tw", 
		"H_CAF_CG634_NET_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};

	class CAF_GRENADIER_tw : CAF_Soldier01_tw {
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_GRENADIER_tw";
		displayName = "Grenadier";
		weapons[] = {"CAF_C8A3_M203", "Throw", "Put"};
		respawnWeapons[] = {"CAF_C8A3_M203","Throw", "Put"};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade",
		
		//Ammunition
		
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade",
		
		//Ammunition
		
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_GRENADIER_tw", 
		"H_CAF_CG634_tw_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_GRENADIER_tw", 
		"H_CAF_CG634_NET_tw", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_C9GUNNER_tw : CAF_Soldier02_tw {
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_C9GUNNER_tw";
		displayName = "C9 Gunner";
		icon = "iconManMG";
		weapons[] = {
		"CAF_C9A2", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_C9A2", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade",
		
		//Ammunition
		"200Rnd_556x45_belt",
		"200Rnd_556x45_belt",
		"200Rnd_556x45_belt"
		};
		respawnMagazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade",
		
		//Ammunition
		"200Rnd_556x45_belt",
		"200Rnd_556x45_belt",
		"200Rnd_556x45_belt"
		};
		linkedItems[] = {
		"V_CAF_TTMAV_GUNNER_tw", 
		"H_CAF_CG634_NET_tw_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_GUNNER_tw", 
		"H_CAF_CG634_NET_tw_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_C6GUNNER_tw : CAF_Soldier02_tw {
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_C6GUNNER_tw";
		displayName = "C6 Gunner";
		icon = "iconManMG";
		weapons[] = {
		"CAF_C6GPMG", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_C6GPMG", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade",
		
		//Ammunition
		"220Rnd_762x51_belt",
		"220Rnd_762x51_belt",
		"220Rnd_762x51_belt"
		};
		respawnMagazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade",
		
		//Ammunition
		"220Rnd_762x51_belt",
		"220Rnd_762x51_belt",
		"220Rnd_762x51_belt"
		};
		linkedItems[] = {
		"V_CAF_TTMAV_GUNNER_tw", 
		"H_CAF_CG634_tw_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_GUNNER_tw", 
		"H_CAF_CG634_tw_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_OFFICER_tw : CAF_Soldier01_tw {
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_OFFICER_tw";
		displayName = "Officer";
		icon = "iconManLeader";
		//picture = "caf_core\characters\army\data\ui\icon_seccomd_ca.paa";
		weapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put", 
		"LASERDESIGNATOR"
		};
		respawnWeapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put",
		"LASERDESIGNATOR"
		};
		
		Items[] = {
		"H_caf_boonie_tw",
		"ItemRadio"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw",
		"ItemRadio"
		};
		magazines[] = {
		
		"LASERBATTERIES",
		
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		respawnMagazines[] = {
		
		"LASERBATTERIES",
		
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_LEADER_tw", 
		"H_CAF_CG634_tw_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_LEADER_tw", 
		"H_CAF_CG634_tw_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_SECTIONIC_tw : CAF_Soldier02_tw {
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_SECTIONIC_tw";
		displayName = "Section Commander";
		icon = "iconManLeader";
		//picture = "caf_core\characters\army\data\ui\icon_seccomd_ca.paa";
		weapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put", 
		"rangefinder"
		};
		respawnWeapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put",
		"rangefinder"
		};
		
		Items[] = {
		"H_caf_boonie_tw",
		"ItemRadio"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw",
		"ItemRadio"
		};
		magazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_LEADER_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_LEADER_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_SECTION2IC_tw : CAF_Soldier01_tw {
	
		_generalMacro = "CAF_SECTION2IC_tw";
		scope = 2;
		faction = CAF_TW;
		displayName = "Section 2IC";
		icon = "iconManLeader";
		//picture = "caf_core\characters\army\data\ui\icon_2IC_ca.paa";
		weapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put", 
		"rangefinder"
		};
		respawnWeapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put",
		"rangefinder"
		};
		
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_84GUNNER_tw : CAF_Soldier01_tw {
	
			
		
		_generalMacro = "84GUNNER";
		scope = 2;
		faction = CAF_TW;
		author = "CAF MOD TEAM";
		displayName = "84 Gunner";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		backpack = "B_caf_84_AmmoBag_HEAT";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
		"CAF_C8A3", 
		"CAF_M3CG", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_C8A3", 
		"CAF_M3CG",
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Ammunition
		"FFV551_HEAT",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		"FFV551_HEAT",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell", 
		"HandGrenade", 
		"HandGrenade"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	
	
	};


	
	class CAF_MEDIC_tw : CAF_Soldier01_tw {
	
			
		
		_generalMacro = "CAF_MEDIC_tw";
		scope = 2;
		faction = CAF_TW;
		author = "CAF MOD TEAM";
		displayName = "Medic";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		backpack = "B_CAF_Carryall_Medical_tw";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
		"CAF_C8A3", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_C8A3", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell"
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO",
		"30Rnd_556x45_NATO", 
		"SmokeShell", 
		"SmokeShell"
		
		};
		linkedItems[] = {
		"V_CAF_TTMAV_MEDIC_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_MEDIC_tw", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	
	
	};
	class CAF_CREWMAN_tw : CAF_Soldier01_tw {
	
			
		
		_generalMacro = "CAF_CREWMAN_tw";
		scope = 2;
		faction = CAF_TW;
		engineer = 1;
		author = "CAF MOD TEAM";
		displayName = "Crewman";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Ammunition
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		
		};
		linkedItems[] = {
		"V_CAF_FragVest_TW", 
		"H_CAF_CREWHELMET", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_FragVest_TW", 
		"H_CAF_CREWHELMET", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	
	
	};
	
	
	};