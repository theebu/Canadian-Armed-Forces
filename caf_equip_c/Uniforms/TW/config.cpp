class CfgPatches
{
	class caf_equip_u_tw
	{
		units[] = {};
		weapons[] = {"U_CAF_uniform1_cadpatTW","U_CAF_uniform2_cadpatTW","U_CAF_GhilleSuit_tw"};
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
	class U_CAF_uniform1_cadpatTW: U_I_CombatUniform
	{
		scope = 2;
		displayName = "CADPAT - TW (Full)";
		picture = "\caf_equip_t\inv\icon_caf_tw.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier01_TW";
			containerClass = "Supply40";
			uniformType = "Default";
			mass = 40;
		};
	};
	
	/*class U_CAF_uniformtee_cadpatTW: U_I_CombatUniform_tshirt
	{
		scope = 2;
		displayName = "CADPAT - TW (Tee)";
		picture = "\caf_equip_t\inv\icon_caf_tw.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier03_TW";
			containerClass = "Supply40";
			uniformType = "Default";
			mass = 20;
		};
	};*/
	
	class U_CAF_uniform2_cadpatTW: U_I_CombatUniform_shortsleeve
	{
		scope = 2;
		displayName = "CADPAT - TW (Rolled)";
		picture = "\caf_equip_t\inv\icon_caf_fol_tw.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier02_TW";
			containerClass = "Supply40";
			uniformType = "Default";
			mass = 40;
		};
	};

	class U_I_GhillieSuit;
	class U_CAF_GhilleSuit_tw : U_I_GhillieSuit 
	{
		scope = 2;
		displayName = "Ghillie Suit - TW";
		picture = "\caf_equip_t\inv\icon_caf_tw.paa";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_TW_co.paa"};
		class ItemInfo : UniformItem 
		{
			uniformModel = "-";
			uniformClass = "CAF_Sniper_TW";
			containerClass = "Supply10";
			mass = 100;
		};
	};
};

class CfgVehicles {
	class Man;	// External class reference
	
	class I_soldier_F;
	class CAF_Soldier01_TW : I_soldier_F {
	
		_generalMacro = "CAF_RIFLEMAN_TW";
		scope = 1;
		side = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		faction = "CAF_TW";
		author = "CAF MOD TEAM";
		displayName = "Rifleman";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform1_cadpatTW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_TW_co.paa",""};
		weapons[] = {"CAF_C7A2", "Throw", "Put"};
		respawnWeapons[] = {"CAF_C7A2","Throw", "Put"};
		Items[] = {"FirstAidKit","FirstAidKit","H_caf_boonie_TW"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","H_caf_boonie_TW"};
		magazines[] = {"30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "Chemlight_red", "Chemlight_yellow", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO","30Rnd_556x45_NATO", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "Chemlight_red", "Chemlight_yellow", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_CAF_PlateCarrier1_TW", "H_CAF_CG634_TW_net", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_CAF_PlateCarrier1_TW", "H_CAF_CG634_TW_net", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	
	};
	
	class CAF_Soldier02_TW : CAF_Soldier01_TW 
	{
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform2_cadpatTW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_TW_co.paa",""};
	};
	
	/*class CAF_Soldier03_TW : CAF_Soldier01_TW 
	{
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform2_cadpatTW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_TW_co.paa",""};
	};*/
	
};