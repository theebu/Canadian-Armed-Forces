

class CfgPatches
{
	class caf_equip_v_AR
	{
		units[] = {};
		weapons[] = {"V_CAF_FragVest_AR","V_CAF_ttmav_rifleman_AR","V_CAF_ttmav_gunner_AR","V_CAF_ttmav_grenadier_AR","V_CAF_ttmav_leader_AR","V_CAF_ttmav_marksman_AR","V_CAF_ttmav_medic_AR"};
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
	class VestItem;
	class Vest_Base;
	
	
	class Vest_NoCamo_Base;
	
	class V_CAF_FragVest_AR: Vest_NoCamo_Base
	{
		scope = 2;
		displayName = "Fragmentation Vest - CADPAT AR";
		picture = "\caf_equip_t\inv\inv_fragvest_ar_ca.paa";
		model = "\caf_equip\caf_fragvest";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_fragvest";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 0;
			mass = 40;
			armor = 70;
			passThrough = 0.2;
		};
	};
	
	class V_CAF_ttmav_rifleman_AR: V_CAF_FragVest_AR
	{
		scope = 2;
		displayName = "Plate Carrier (Rifleman)";
		picture = "\caf_equip_t\inv\inv_ttmav_rifleman_ar_ca.paa";
		model = "\caf_equip\caf_ttmav_rifleman";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_Rifleman";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_gunner_AR: V_CAF_FragVest_AR
	{
		scope = 2;
		displayName = "Plate Carrier (Gunner)";
		picture = "\caf_equip_t\inv\inv_ttmav_gunner_ar_ca.paa";
		model = "\caf_equip\caf_TTMAV_Gunner";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_Gunner";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 90;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_grenadier_AR: V_CAF_FragVest_AR
	{
		scope = 2;
		displayName = "Plate Carrier (Grenadier)";
		picture = "\caf_equip_t\inv\inv_ttmav_grenadier_ar_ca.paa";
		model = "\caf_equip\caf_TTMAV_Grenadier";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_Grenadier";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 155;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_leader_AR: V_CAF_FragVest_AR
	{
		scope = 2;
		displayName = "Plate Carrier (Leader)";
		picture = "\caf_equip_t\inv\inv_ttmav_leader_ar_ca.paa";
		model = "\caf_equip\caf_ttmav_leader";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_leader";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 130;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_marksman_AR: V_CAF_FragVest_AR
	{
		scope = 2;
		displayName = "Plate Carrier (Marksman)";
		picture = "\caf_equip_t\inv\inv_ttmav_marksman_ar_ca.paa";
		model = "\caf_equip\caf_ttmav_marksman";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_marksman";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_medic_AR: V_CAF_FragVest_AR
	{
		scope = 2;
		displayName = "Plate Carrier (Medic)";
		picture = "\caf_equip_t\inv\inv_ttmav_Medic_AR_ca.paa";
		model = "\caf_equip\caf_ttmav_leader";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_medic";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 130;
			mass = 45;
		};
	};
	
};

