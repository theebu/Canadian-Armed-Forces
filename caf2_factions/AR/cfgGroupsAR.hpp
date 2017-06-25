

class CfgGroups 
{
	class West 
	{
		name = $STR_WEST;
		
	    class CAF_AR
	    {
			name = "Canadian Armed Forces (AR)";
			
			

			class Infantry
				{
					name = "Infantry";
		
					
			class 1CPB_Section_ar 
				{
					name = "Section (AR)";
					faction = CAF_AR;
					rarityGroup = 0.5;
					side = 1;					

					class Unit0 
					{
						side = 1;
						vehicle = "CAF_SECTIONIC_ar";
						rank = LIEUTENANT;
						position[] = {0, 5, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "CAF_RIFLEMAN_ar";
						rank = PRIVATE;
						position[] = {3, 0, 0};
					};
					
					class Unit2 
					{
						side = 1;
						vehicle = "CAF_GRENADIER_ar";
						rank = CORPORAL;
						position[] = {5, 0, 0};
					};
					
					class Unit3
					{
						side = 1;
						vehicle = "CAF_GRENADIER_ar";
						rank = CORPORAL;
						position[] = {11, 0, 0};
					};
					
					class Unit4 
					{
						side = 1;
						vehicle = "CAF_RIFLEMAN_ar";
						rank = CORPORAL;
						position[] = {9, 0, 0};
					};
					class Unit5 
					{
						side = 1;
						vehicle = "CAF_SECTION2IC_ar";
						rank = SERGENT;
						position[] = {14, 0, 0};	
					};
					class Unit6 
					{
						
						side = 1;
						vehicle = "CAF_C9GUNNER_ar";
						rank = CORPORAL;
						position[] = {7, 0, 0};
						
					};
					class Unit7 
					{
						side = 1;
						vehicle = "CAF_C9GUNNER_ar";
						rank = CORPORAL;
						position[] = {17, 0, 0};
					};
						
				};
			};
		};
		class Armored
				{
					name = "Armored";
				
					
						class Troop_LC2_AR
						{
							name = "Leopard Troop";
							faction = "CAF_AR";
							rarityGroup = 0.5;
							side = 1;		
							
					
					
					class Unit0
					{
						side = 1;
						vehicle = "CAF_LeopardC2_AR";
						rank = PRIVATE;
						position[] = {3, 0, 0};
					};
					
					
					
					class Unit1 
					{
						side = 1;
						vehicle = "CAF_LeopardC2_AR";
						rank = CORPORAL;
						position[] = {9, 0, 0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "CAF_LeopardC2_AR";
						rank = PRIVATE;
						position[] = {-9, 0, 0};
					};
					
					
					
					class Unit3 
					{
						side = 1;
						vehicle = "CAF_LeopardC2_AR";
						rank = CORPORAL;
						position[] = {-3, 0, 0};
					};
						
				};
				
				
			};
	};
};