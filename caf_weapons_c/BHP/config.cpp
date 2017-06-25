class CfgPatches 
{
	class caf_bhp 
	{
		Units[] = {};
		weapons[] = {"caf_BHP","13Rnd_9x19_BHP"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_f"};
	};
};


class CfgMagazines {
	
	class 16Rnd_9x21_Mag;
	class 13Rnd_9x19_BHP : 16Rnd_9x21_Mag{
		displayname = "Browning Mag";
		ammo = "B_9x21_Ball";
		count = 13;
		descriptionShort = "13 round magazine for the Browning HP";
	};	
};


class CfgWeapons 
{

	class hgun_Rook40_F;
	class caf_BHP : hgun_Rook40_F {
		scope = 2;
		model = "\caf_weapons\bhp.p3d";
		displayname = "Browning HP 9mm";
		picture="\caf_weapons_t\inv\bhp_inv.paa";
		descriptionShort = "Browning 9MM pistol";
		magazines[] = {"13Rnd_9x19_BHP"};
	};
};