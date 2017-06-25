class CfgPatches
{
	class caf_ar10t
	{
		units[] = {};
		weapons[] = {"caf_ar10t"};
		requiredVersion = 1.02;
		requiredAddons[] = {"A3_Weapons_f"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
	//class Rifle;
	class srifle_EBR_F;
	class caf_ar10t: srifle_EBR_F
	{
		scope = 2;
		model="\caf_weapons\ar10t.p3d";
	    picture="\caf_weapons_t\inv\ar10t_x_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		dexterity = 1.55;
		displayName = "AR-10T SASW";
		drySound[]={"caf_weapons_s\ar10t\dry",db0,1,20};
		reloadMagazineSound[]={"caf_weapons_s\ar10t\reload",db0,1,100};
		magazines[]={20Rnd_762x51_Mag};
		reloadAction = "GestureReloadMX";
		reloadTime = 0.1;
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"caf_weapons_t\tex\m110_blk_co.paa","caf_weapons_t\tex\m16_co.paa","caf_weapons_t\tex\c8a2_co.paa"};
	
		modes[] = {Single};

		class Library {libTextDesc = $STR_EP1_LIB_M110_TWS_EP1;};
		descriptionShort = $STR_EP1_DSS_M110_TWS_EP1;
	};
	class caf_ar10t_e : caf_ar10t
	{
		class LinkedItems 
		{
			class LinkedItemsOptic {
				item = "optic_SOS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
};