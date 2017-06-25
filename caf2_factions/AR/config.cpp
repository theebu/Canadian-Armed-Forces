
#include "cfgGroupsAR.hpp"

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
	class caf_inf_ar
	{
		units[] = {"CAF_RIFLEMAN_ar","CAF_GRENADIER_ar","CAF_C9GUNNER_ar","CAF_SECTIONIC_ar","CAF_SECTION2IC_ar","CAF_C6GUNNER_ar","CAF_84GUNNER_ar","CAF_RIFLEMAN_AT","CAF_MEDIC_ar","CAF_OFFICER_ar","CAF_SNIPER_ar","CAF_SPOTTER_ar","CAF_VEHTECH_ar","CAF_CBTENGINEER_ar","CAF_GPMGASST_ar","CAF_ATASST_ar","CAF_CREWMAN_ar","CAF_RECCE_IC_ar","CAF_RECCE_2IC_ar","CAF_RECCE_C9_ar","CAF_RECCE_SIG"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{

	class CAF_Soldier01_ar;
	class CAF_Soldier02_ar;

	
	class CAF_RIFLEMAN_ar : CAF_Soldier01_ar 
	{
		_generalMacro = "CAF_RIFLEMAN_ar";
		scope = 2;
		faction = CAF_AR;
		author = "CAF MOD TEAM";
		displayName = "Rifleman";
		uniformClass = "U_CAF_uniform1_cadpatAR";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_ar_co.paa"};
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
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_RIFLEMAN_ar", 
		"H_CAF_CG634_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_ar", 
		"H_CAF_CG634_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	
	
	};

	class CAF_MARKSMAN_ar : CAF_RIFLEMAN_ar 
	{
		_generalMacro = "CAF_MARKSMAN_ar";
		scope = 2;
		faction = CAF_AR;
		displayName = "Marksman";
		weapons[] = {
		"CAF_ar10t", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_ar10t", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_MARKSMAN_ar", 
		"H_CAF_CG634_NET_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_MARKSMAN_ar", 
		"H_CAF_CG634_NET_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};

	class CAF_GRENADIER_ar : CAF_Soldier01_ar 
	{
	
		scope = 2;
		faction = CAF_AR;
		_generalMacro = "CAF_GRENADIER_ar";
		displayName = "Grenadier";
		weapons[] = {"CAF_C8A3_M203", "Throw", "Put"};
		respawnWeapons[] = {"CAF_C8A3_M203","Throw", "Put"};
		Items[] = {
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_GRENADIER_ar", 
		"H_CAF_CG634_ar_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_GRENADIER_ar", 
		"H_CAF_CG634_NET_ar", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_C9GUNNER_ar : CAF_Soldier02_ar 
	{
	
		scope = 2;
		faction = CAF_AR;
		_generalMacro = "CAF_C9GUNNER_ar";
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
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_GUNNER_ar", 
		"H_CAF_CG634_NET_ar_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_GUNNER_ar", 
		"H_CAF_CG634_NET_ar_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_C6GUNNER_ar : CAF_Soldier02_ar 
	{
	
		scope = 2;
		faction = CAF_AR;
		_generalMacro = "CAF_C6GUNNER_ar";
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
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_GUNNER_ar", 
		"H_CAF_CG634_ar_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_GUNNER_ar", 
		"H_CAF_CG634_ar_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_OFFICER_ar : CAF_Soldier01_ar 
	{
	
		scope = 2;
		faction = CAF_AR;
		_generalMacro = "CAF_OFFICER_ar";
		displayName = "Officer";
		icon = "iconManLeader";
		//picture = "caf_core\characters\army\data\ui\icon_seccomd_ca.paa";
		weapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put", 
		"Laserdesignator"
		};
		respawnWeapons[] = {
		"CAF_C8A3",
		"Throw",
		"Put",
		"Laserdesignator"
		};
		
		Items[] = {
		"H_caf_boonie_ar",
		"ItemRadio"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar",
		"ItemRadio"
		};
		magazines[] = {
		
		"Laserbatteries",
		
		
		
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
		
		"Laserbatteries",
		
		
		
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
		"V_CAF_TTMAV_LEADER_ar", 
		"H_CAF_CG634_ar_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_LEADER_ar", 
		"H_CAF_CG634_ar_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_SECTIONIC_ar : CAF_Soldier02_ar 
	{
	
		scope = 2;
		faction = CAF_AR;
		_generalMacro = "CAF_SECTIONIC_ar";
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
		"H_caf_boonie_ar",
		"ItemRadio"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar",
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
		"V_CAF_TTMAV_LEADER_ar", 
		"H_CAF_CG634_ar", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_LEADER_ar", 
		"H_CAF_CG634_ar", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_SECTION2IC_ar : CAF_Soldier01_ar 
	{
	
		_generalMacro = "CAF_SECTION2IC_ar";
		scope = 2;
		faction = CAF_AR;
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
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_RIFLEMAN_ar", 
		"H_CAF_CG634_ar", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_ar", 
		"H_CAF_CG634_ar", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_84GUNNER_ar : CAF_Soldier01_ar 
	{
	
		_generalMacro = "84GUNNER";
		scope = 2;
		faction = CAF_AR;
		author = "CAF MOD TEAM";
		displayName = "84 Gunner";
		uniformClass = "U_CAF_uniform1_cadpatAR";
		backpack = "B_caf_84_AmmoBag_HEAT";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_ar_co.paa"};
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
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_RIFLEMAN_ar", 
		"H_CAF_CG634_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_RIFLEMAN_ar", 
		"H_CAF_CG634_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_MEDIC_ar : CAF_Soldier01_ar 
	{

		_generalMacro = "CAF_MEDIC_ar";
		scope = 2;
		faction = CAF_AR;
		author = "CAF MOD TEAM";
		displayName = "Medic";
		uniformClass = "U_CAF_uniform1_cadpatAR";
		backpack = "B_CAF_Carryall_Medical_ar";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_ar_co.paa"};
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
		"H_caf_boonie_ar"
		};
		RespawnItems[] = {
		"H_caf_boonie_ar"
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
		"V_CAF_TTMAV_MEDIC_ar", 
		"H_CAF_CG634_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_TTMAV_MEDIC_ar", 
		"H_CAF_CG634_AR", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	
	
	};
	class CAF_CREWMAN_ar : CAF_Soldier01_ar 
	{
	
		_generalMacro = "CAF_CREWMAN_ar";
		scope = 2;
		faction = CAF_ar;
		engineer = 1;
		author = "CAF MOD TEAM";
		displayName = "Crewman";
		uniformClass = "U_CAF_uniform1_cadpatAR";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_ar_co.paa"};
		weapons[] = {
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_AR"
		};
		RespawnItems[] = {
		"H_caf_boonie_AR"
		};
		magazines[] = {
		
		
		//Ammunition
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		
		};
		linkedItems[] = {
		"V_CAF_FragVest_AR", 
		"H_CAF_CREWHELMET", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_FragVest_AR", 
		"H_CAF_CREWHELMET", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
};