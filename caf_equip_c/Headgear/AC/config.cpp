class CfgPatches
{
	class caf_equip_h_ac
	{
		units[] = {};
		weapons[] = {"H_CAF_CG634_AC","H_CAF_CG634_AC_G_U","H_CAF_CG634_AC_G_D","H_CAF_CG634_NET_AC","H_CAF_CG634_NET_AC_G_U","H_CAF_CG634_NET_AC_G_D","H_CAF_CG634_SCRIM_AC","H_CAF_CG634_SCRIM_AC_G_U","H_CAF_CG634_SCRIM_AC_G_D"};
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
	class HeadgearItem;
	
	class H_HelmetB;
	
	class H_CAF_CG634_AC_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634";
		picture = "\caf_equip_t\inv\INV_CG634_AC_G_U_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	class H_CAF_CG634_AC: H_CAF_CG634_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_AC_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","","","",""};
		};
	};
	
	class H_CAF_CG634_AC_G_U: H_CAF_CG634_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_AC_G_U_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","","",""};
		};
	};
	
	class H_CAF_CG634_AC_G_D: H_CAF_CG634_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_AC_G_D_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	
	class H_CAF_CG634_NET_AC_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634 NET";
		picture = "\caf_equip_t\inv\INV_CG634_NET_AC_G_U_CA.paa";
		model = "\caf_equip\CG634_NET.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	class H_CAF_CG634_NET_AC: H_CAF_CG634_NET_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_AC_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","","",""};
		};
	};
	
	class H_CAF_CG634_NET_AC_G_U: H_CAF_CG634_NET_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_AC_G_U_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","","",""};
		};
	};
	
	class H_CAF_CG634_NET_AC_G_D: H_CAF_CG634_NET_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_AC_G_D_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	
	
	class H_CAF_CG634_SCRIM_AC_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634 SCRIM";
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AC_G_U_CA.paa";
		model = "\caf_equip\CG634_SCRIM.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	class H_CAF_CG634_SCRIM_AC: H_CAF_CG634_SCRIM_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AC_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","","",""};
		};
	};
	
	class H_CAF_CG634_SCRIM_AC_G_U: H_CAF_CG634_SCRIM_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AC_G_U_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","","",""};
		};
	};
	
	class H_CAF_CG634_SCRIM_AC_G_D: H_CAF_CG634_SCRIM_AC_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AC_G_D_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_ac_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
};

