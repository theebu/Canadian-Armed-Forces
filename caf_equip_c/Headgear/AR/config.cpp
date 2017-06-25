class CfgPatches
{
	class caf_equip_h_ar
	{
		units[] = {};
		weapons[] = {"H_CAF_Boonie_AR","H_CAF_Boonie_hs_AR","H_CAF_CG634_AR","H_CAF_CG634_AR_G_U","H_CAF_CG634_AR_G_D","H_CAF_CG634_NET_AR","H_CAF_CG634_NET_AR_G_U","H_CAF_CG634_NET_AR_G_D","H_CAF_CG634_SCRIM_AR","H_CAF_CG634_SCRIM_AR_G_U","H_CAF_CG634_SCRIM_AR_G_D"};
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
	
	class H_Booniehat_khk;
	class H_Booniehat_khk_hs;
	
	class H_CAF_Boonie_AR : H_Booniehat_khk {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat";
		picture = "\caf_equip_t\inv\boonie_AR_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\booniehat_Arid_co.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 0;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class H_CAF_Boonie_hs_AR : H_Booniehat_khk_hs 
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (HS)";
		picture = "\caf_equip_t\inv\boonie_AR_ca.paa";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\booniehat_Arid_co.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 10;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class H_HelmetB;
	
	class H_CAF_CG634_AR_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634";
		picture = "\caf_equip_t\inv\INV_CG634_AR_G_U_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	class H_CAF_CG634_AR: H_CAF_CG634_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_AR_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","","","",""};
		};
	};
	
	class H_CAF_CG634_AR_G_U: H_CAF_CG634_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_AR_G_U_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","","",""};
		};
	};
	
	class H_CAF_CG634_AR_G_D: H_CAF_CG634_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_AR_G_D_CA.paa";
		model = "\caf_equip\CG634.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	
	class H_CAF_CG634_NET_AR_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634 NET";
		picture = "\caf_equip_t\inv\INV_CG634_NET_AR_G_U_CA.paa";
		model = "\caf_equip\CG634_NET.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	class H_CAF_CG634_NET_AR: H_CAF_CG634_NET_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_AR_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","","",""};
		};
	};
	
	class H_CAF_CG634_NET_AR_G_U: H_CAF_CG634_NET_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_AR_G_U_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","","","",};
		};
	};
	
	class H_CAF_CG634_NET_AR_G_D: H_CAF_CG634_NET_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_NET_AR_G_D_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_NET.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	
	
	class H_CAF_CG634_SCRIM_AR_BASE: H_HelmetB
	{
		scope = 0;
		weaponPoolAvailable = 1;
		displayName = "CG634 SCRIM";
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AR_G_U_CA.paa";
		model = "\caf_equip\CG634_SCRIM.p3d";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
	class H_CAF_CG634_SCRIM_AR: H_CAF_CG634_SCRIM_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AR_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","","",""};
		};
	};
	
	class H_CAF_CG634_SCRIM_AR_G_U: H_CAF_CG634_SCRIM_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AR_G_U_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex2_co.paa","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","\caf_equip_t\tex\tex\tex2_co.paa","","",""};
		};
	};
	
	class H_CAF_CG634_SCRIM_AR_G_D: H_CAF_CG634_SCRIM_AR_BASE
	{
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\caf_equip_t\inv\INV_CG634_SCRIM_AR_G_D_CA.paa";
		hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\caf_equip\CG634_SCRIM.p3d";
			modelSides[] = {3,1};
			armor = "10";
			passThrough = 0.5;
			hiddenSelections[] = {"camo","goggles_up","camo2","camo2b","camolens"};
			hiddenSelectionsTextures[] = {"\caf_equip_t\tex\cg634_net_co.paa","","\caf_equip_t\tex\tex2_co.paa","\caf_equip_t\tex\tex3_co.paa","#(argb,8,8,3)color(0,0,0,0.3,ca)"};
		};
	};
	
};

