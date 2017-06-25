class CfgPatches
{
	class caf_attachments
	{
		units[] = {};
		weapons[] = {"CAF_muzzle_snds_556_blk","CAF_muzzle_snds_Mp5"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class CfgWeapons
{
	class ItemCore;
 	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_M;
	class CAF_muzzle_snds_556_blk : muzzle_snds_M
	{
		displayName = "Silencer C8 (Black)";
		model="\caf_equip_c\Attachments\silencer_black.p3d";
	};
	class muzzle_snds_L;
	class CAF_muzzle_snds_Mp5 : muzzle_snds_L 
	{
		displayName = "Silencer MP5";
		model="\caf_equip_c\Attachments\MP5_SD.p3d";
	};
};