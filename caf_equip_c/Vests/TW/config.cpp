class CfgPatches
{
	class caf_equip_v_tw
	{
		units[] = {};
		weapons[] = {"V_CAF_FragVest_TW","V_CAF_ttmav_rifleman_TW","V_CAF_ttmav_gunner_TW","V_CAF_ttmav_grenadier_TW","V_CAF_ttmav_leader_TW","V_CAF_ttmav_marksman_TW","V_CAF_ttmav_medic_TW"};
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
	
	class V_CAF_FragVest_TW: Vest_NoCamo_Base
	{
		scope = 2;
		displayName = "Plate Carrier";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\caf_fragvest";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
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
	
	class V_CAF_rifleman_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Rifleman)";
		picture = "\caf_equip_t\inv\inv_ttmav_rifleman_tw_ca.paa";
		model = "\caf_equip\A3_Vest_r";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_r";
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
			armor = 70;
			passThrough = 0.2;
		};
	};
	
	class V_CAF_grenadier_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Grenadier)";
		picture = "\caf_equip_t\inv\inv_ttmav_rifleman_tw_ca.paa";
		model = "\caf_equip\A3_Vest_gren";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_gren";
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
			armor = 70;
			passThrough = 0.2;
		};
	};
	class V_CAF_officer_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Officer)";
		picture = "\caf_equip_t\inv\inv_ttmav_rifleman_tw_ca.paa";
		model = "\caf_equip\A3_Vest_o";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_o";
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
			armor = 70;
			passThrough = 0.2;
		};
	};
	class V_CAF_medic_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Medic)";
		picture = "\caf_equip_t\inv\inv_ttmav_rifleman_tw_ca.paa";
		model = "\caf_equip\A3_Vest_m";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_m";
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
			armor = 70;
			passThrough = 0.2;
		};
	};
	
	class V_CAF_ttmav_rifleman_TW: V_CAF_FragVest_TW
	{
	
		//CSE Values
		cse_camelbak_maxContent = 7.5;
		cse_camelbak_initialContent = 100;
 
		scope = 2;
		displayName = "Plate Carrier (Rifleman)";
		picture = "\caf_equip_t\inv\inv_ttmav_rifleman_tw_ca.paa";
		model = "\caf_equip\caf_TTMAV_Rifleman";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_Rifleman";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_gunner_TW: V_CAF_FragVest_TW
	{
		scope = 2;
		displayName = "Plate Carrier (Gunner)";
		picture = "\caf_equip_t\inv\inv_ttmav_gunner_tw_ca.paa";
		model = "\caf_equip\caf_TTMAV_Gunner";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_Gunner";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 90;
			mass = 45;
		};
	};

	class V_CAF_ttmav_grenadier_TW: V_CAF_FragVest_TW
	{
		scope = 2;
		displayName = "Plate Carrier (Grenadier)";
		picture = "\caf_equip_t\inv\inv_ttmav_grenadier_TW_ca.paa";
		model = "\caf_equip\caf_TTMAV_Grenadier";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_Grenadier";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 155;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_leader_TW: V_CAF_FragVest_TW
	{
		scope = 2;
		displayName = "Plate Carrier (Leader)";
		picture = "\caf_equip_t\inv\inv_ttmav_leader_TW_ca.paa";
		model = "\caf_equip\caf_ttmav_leader";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_leader";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 130;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_marksman_TW: V_CAF_FragVest_TW
	{
		scope = 2;
		displayName = "Plate Carrier (Marksman)";
		picture = "\caf_equip_t\inv\inv_ttmav_marksman_TW_ca.paa";
		model = "\caf_equip\caf_ttmav_marksman";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_TTMAV_marksman";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 125;
			mass = 45;
		};
	};
	
	class V_CAF_ttmav_medic_TW: V_CAF_FragVest_TW
	{
		scope = 2;
		displayName = "Plate Carrier (Medic)";
		picture = "\caf_equip_t\inv\inv_ttmav_Medic_TW_ca.paa";
		model = "\caf_equip\caf_ttmav_leader";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
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
