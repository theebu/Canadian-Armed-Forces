

class CfgGroups 
{
	class West 
	{
		name = $STR_WEST;
		
	    class CAF_AC
	    {
			name = "Canadian Armed Forces (AC)";
			
			

			class Infantry
				{
					name = "Infantry";
		
					
			
				class 1CPB_Section_ac 
				{
					name = "Section (AC)";
					faction = CAF_AC;
					rarityGroup = 0.5;
					side = 1;					

					class Unit0 
					{
						side = 1;
						vehicle = "CAF_SECTIONIC_ac";
						rank = LIEUTENANT;
						position[] = {0, 5, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "CAF_RIFLEMAN_ac";
						rank = PRIVATE;
						position[] = {3, 0, 0};
					};
					
					class Unit2 
					{
						side = 1;
						vehicle = "CAF_GRENADIER_ac";
						rank = CORPORAL;
						position[] = {5, 0, 0};
					};
					
					class Unit3
					{
						side = 1;
						vehicle = "CAF_GRENADIER_ac";
						rank = CORPORAL;
						position[] = {11, 0, 0};
					};
					
					class Unit4 
					{
						side = 1;
						vehicle = "CAF_RIFLEMAN_ac";
						rank = CORPORAL;
						position[] = {9, 0, 0};
					};
					class Unit5 
					{
						side = 1;
						vehicle = "CAF_SECTION2IC_ac";
						rank = SERGENT;
						position[] = {14, 0, 0};	
					};
					class Unit6 
					{
						
						side = 1;
						vehicle = "CAF_C9GUNNER_ac";
						rank = CORPORAL;
						position[] = {7, 0, 0};
						
					};
					class Unit7 
					{
						side = 1;
						vehicle = "CAF_C9GUNNER_ac";
						rank = CORPORAL;
						position[] = {17, 0, 0};
					};
						
				};
			};
		};
	};
};