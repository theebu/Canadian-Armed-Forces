class CfgPatches
{
	class caf_equip_u_ac
	{
		units[] = {};
		weapons[] = {"U_CAF_uniform1_cadpatAC"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class ItemInfo;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	
	
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class U_CAF_uniform1_cadpatAC: U_I_CombatUniform
	{
		scope = 2;
		displayName = "CADPAT - AC";
		picture = "\caf_equip_t\inv\icon_caf_tw.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier01_AC";
			containerClass = "Supply40";
			uniformType = "Default";
			mass = 40;
		};
	};
};

class CfgVehicles 
{
	class Man;	// External class reference
	class I_soldier_F: Man 
	{		
		class EventHandlers;	// External class reference
	};
	
	class CAF_Soldier01_AC : I_soldier_F 
	{
		_generalMacro = "CAF_RIFLEMAN_AC";
		scope = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		faction = "CAF_AC";
		author = "CAF MOD TEAM";
		displayName = "Rifleman";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform1_cadpatAC";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\caf_uniform_arctic_co.paa",""};
		weapons[] = {"CAF_C7A2", "Throw", "Put"};
		respawnWeapons[] = {"CAF_C7A2","Throw", "Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "Chemlight_red", "Chemlight_yellow", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "Chemlight_red", "Chemlight_yellow", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_CAF_PlateCarrier1_TW", "H_CAF_CG634_AC_net", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_CAF_PlateCarrier1_TW", "H_CAF_CG634_AC_net", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

		class Wounds 
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
};