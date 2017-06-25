/*
	caf_disposable\s\ammo_player.sqf
	by cafmpetent
	
	Main loop that runs indefinitely
	
	Executed from XEH_PostInit.sqf
*/

#define __config configFile >> "CfgWeapons" >> _weapon

waitUntil {
		waitUntil {alive player};
		
		_weapon = secondaryWeapon player;
		if (_weapon != "") then
		{
			if (getNumber (__config >> "caf_disposable") == 1) then
			{
				_magazine = (getArray (__config >> "magazines")) select 0;
				
				while {currentWeapon player == _weapon} do
				{
					if (currentMagazine player != _magazine) then
					{
						if(!(_magazine in magazines player)) then
						{
							// Load launcher
							player removeWeapon _weapon;
							player addWeapon _weapon;
							player addMagazines [ _magazine, 1];
							player selectWeapon _weapon;
						};
					};
					sleep 0.3;
				};
				
				// Remove excess magazines if any
				if (_magazine in magazines player) then
				{
					player removeMagazines _magazine;
				};
			};
		};
		sleep 1.5;
	false
};