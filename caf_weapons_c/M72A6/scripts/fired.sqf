/*
	caf_disposable\s\fired.sqf
	by cafmpetent

	Executed by firedEH
	
	Arguments:
	0 = Unit that fired
	1 = Weapon-class that fired
*/	

#define __config configFile >> "CfgWeapons" >> _weapon

_unit = _this select 0;
_weapon = _this select 1;

// Fetch all config-variables needed
_usedWeapon = getText (__config >> "caf_disposable_used");
_tubeModel = getText (__config >> "caf_disposable_tube");


// Swap the fired weapon for the "used" dummy
_unit addWeapon _usedWeapon;
_unit removeWeapon _weapon;
_unit selectWeapon _usedWeapon;

// Pause before allowing the player to throw away the launcher. Muscular counter-recoil recovery, so to say.
if (_unit == player) then
{
	while {toUpper (currentWeapon _unit) in [toUpper(_usedWeapon), toUpper (_weapon)]} do { sleep 0.3 };
} else { sleep 1.2 };

sleep 0.3;

// Removal of weapons and execution of throw-away script
if ((alive _unit) && !(isNil "_unit")) then
{
	// Remove all possible existances of real and dummy weapon
	if (_usedWeapon in weapons _unit) then { _unit removeWeapon _usedWeapon };

	// Make AI units get their weapon up after firing
	if (_unit != player) then
	{
		_unit doTarget objNull;
		_primw = primaryWeapon _unit;
		if (_primw != "") then
		{
			_unit selectWeapon _primw;
			_muzzles  = getArray (configFile >> "cfgWeapons" >> _primw >> "muzzles");
			_unit selectWeapon (_muzzles select 0);
		}
		else
		{
			_handgun = handgunWeapon _unit;
			if (_handgun != "") then
			{
				_unit selectWeapon _handgun;
			};
		};
	};

	// Execute throw-away on all machines
	caf_disp_throw = [_unit,_tubeModel];
	publicVariable "caf_disp_throw";
	if (!isDedicated) then { caf_disp_throw call caf_disposable_throw; };
};