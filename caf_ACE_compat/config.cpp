class CfgPatches {
	class caf_ace {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"caf_weapons_c","asdg_jointrails"};
	};
};


class CAF_PicatinnyTopMount;
class CAF_PicatinnySideMount;
class asdg_OpticRail;
class WeaponSlotsInfo;

class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems {
		optic_elcan = 1;

	};
};


class asdg_FrontSideRail;

class CAF_PicatinnyTopMount : asdg_OpticRail1913 {};
class CAF_PicatinnySideMount : asdg_FrontSideRail {};

class CfgWeapons
{
	class c8_base;
	class c8_base : c8_base
	{
		//cse values
		cse_AB_barrelTwist = 7; // barrel twist rate in inches
		cse_AB_twistDirection = 1; // direction of twist (-1 = left, 0 = no rifling, 1 = right)
		cse_AB_barrelLength = 16; // barrel length in inches
		
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CAF_C8A3_TOPMOUNT :  CAF_PicatinnyTopMount {};
			class CAF_C8A3_SIDEMOUNT :  CAF_PicatinnySideMount {};
		};
	};
	class c7_base: arifle_TRG21_F
	{
		//cse values
		cse_AB_barrelTwist = 7; // barrel twist rate in inches
		cse_AB_twistDirection = 1; // direction of twist (-1 = left, 0 = no rifling, 1 = right)
		cse_AB_barrelLength = 20; // barrel length in inches

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		
			class CAF_C7A2_TOPMOUNT :  CAF_PicatinnyTopMount {};
			class CAF_C7A2_SIDEMOUNT :  CAF_PicatinnySideMount {};
		};
	};
	class caf_c8a3_M203;
	class caf_c8a3_M203_e : caf_c8a3_M203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "CAF_C8A3_SIDEMOUNT";
				item = "acc_pointer_IR";
			};
		};
	};
	class caf_c8a3_M203;
	class caf_c8a3_M203_e : caf_c8a3_M203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "CAF_C8A3_SIDEMOUNT";
				item = "acc_pointer_IR";
			};
		};
	};
	class caf_c8a3;
	class caf_c8a3_e : caf_c8a3
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "CAF_C8A3_SIDEMOUNT";
				item = "acc_pointer_IR";
			};
		};
	};
	class caf_C7A2_e;
	class caf_C7A2_e: caf_C7A2_e
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CAF_C7A2_TOPMOUNT";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "CAF_C7A2_SIDEMOUNT";
				item = "acc_pointer_IR";
			};
		};
	};
	class caf_C7A2_M203_e;
	class caf_C7A2_M203_e: caf_C7A2_M203_e
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CAF_C7A2_TOPMOUNT";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "CAF_C7A2_SIDEMOUNT";
				item = "acc_pointer_IR";
			};
		};
	};
	class caf_c9a2;
	class caf_c9a2: caf_c9a2
	{
	
		//CSE VALUES
		cse_bipod = 1;
		cse_exchangeableBarrel = 1;
		cse_AB_barrelTwist = 12; // barrel twist rate in inches
		cse_AB_twistDirection = 1; // direction of twist (-1 = left, 0 = no rifling, 1 = right)
		cse_AB_barrelLength = 13.7; // barrel length in inches
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			
			class CAF_C9A2_TOPMOUNT :  CAF_PicatinnyTopMount {};
			class CAF_C9A2_SIDEMOUNT :  CAF_PicatinnySideMount {};
		};
	};
	class caf_C9A2_e: caf_C9A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CAF_C9A2_TOPMOUNT";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "CAF_C9A2_SIDEMOUNT";
				item = "acc_pointer_IR";
			};
		};
	};
	class c6gpmg;
	class c6gpmg : c6gpmg
	{
	
		//CSE VALUES
		cse_bipod = 1;
		cse_exchangeableBarrel = 1;
		cse_AB_barrelTwist = 12; // barrel twist rate in inches
		cse_AB_twistDirection = 1; // direction of twist (-1 = left, 0 = no rifling, 1 = right)
		cse_AB_barrelLength = 24.8; // barrel length in inches
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		
			class CAF_C6_TOPMOUNT :  CAF_PicatinnyTopMount {};
		};
	};
};