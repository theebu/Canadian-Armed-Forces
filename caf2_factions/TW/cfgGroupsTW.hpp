

class CfgGroups 
{
	class West 
	{
		name = $STR_WEST;
		
	    class CAF_TW
	    {
			name = "Canadian Armed Forces (TW)";
			
			

			class Infantry
				{
					name = "Infantry";
		
					
			
				class caf_Section_tw 
				{
					name = "Section (TW)";
					faction = CAF_TW;
					rarityGroup = 0.5;
					side = 1;					

					class Unit0 
					{
						side = 1;
						vehicle = "CAF_SECTIONIC_tw";
						rank = LIEUTENANT;
						position[] = {0, 5, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "CAF_RIFLEMAN_tw";
						rank = PRIVATE;
						position[] = {3, 0, 0};
					};
					
					class Unit2 
					{
						side = 1;
						vehicle = "CAF_GRENADIER_tw";
						rank = CORPORAL;
						position[] = {5, 0, 0};
					};
					
					class Unit3
					{
						side = 1;
						vehicle = "CAF_GRENADIER_tw";
						rank = CORPORAL;
						position[] = {11, 0, 0};
					};
					
					class Unit4 
					{
						side = 1;
						vehicle = "CAF_RIFLEMAN_tw";
						rank = CORPORAL;
						position[] = {9, 0, 0};
					};
					class Unit5 
					{
						side = 1;
						vehicle = "CAF_SECTION2IC_tw";
						rank = SERGENT;
						position[] = {14, 0, 0};	
					};
					class Unit6 
					{
						
						side = 1;
						vehicle = "CAF_C9GUNNER_tw";
						rank = CORPORAL;
						position[] = {7, 0, 0};
						
					};
					class Unit7 
					{
						side = 1;
						vehicle = "CAF_C9GUNNER_tw";
						rank = CORPORAL;
						position[] = {17, 0, 0};
					};
						
				};
			};
			class Armored
				{
					name = "Armored";
				
					
					class Troop_LC2_TW
						{
							name = "Leopard Troop";
							faction = "CAF_TW";
							rarityGroup = 0.5;
							side = 1;		
							
					
					
					class Unit0
					{
						side = 1;
						vehicle = "CAF_LeopardC2_TW";
						rank = PRIVATE;
						position[] = {3, 0, 0};
					};
					
					
					
					class Unit1 
					{
						side = 1;
						vehicle = "CAF_LeopardC2_TW";
						rank = CORPORAL;
						position[] = {9, 0, 0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "CAF_LeopardC2_TW";
						rank = PRIVATE;
						position[] = {-9, 0, 0};
					};
					
					
					
					class Unit3 
					{
						side = 1;
						vehicle = "CAF_LeopardC2_TW";
						rank = CORPORAL;
						position[] = {-3, 0, 0};
					};
						
				};
				
				
			};
		};
	};
};