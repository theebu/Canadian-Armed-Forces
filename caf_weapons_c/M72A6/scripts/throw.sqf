/*
	caf_disposable\s\throw.sqf	
	by cafmpetent
	
	Executed by caf_disposable\s\fired.sqf and caf_disp_throw PVEH
	
	Arguments:
	0 (OBJECT) = Unit to throw away tube
	1 (STRING) = Name of .p3d model to throw away
*/

_unit = _this select 0;
_tubeModel = _this select 1;

_selectionPosition = _unit selectionPosition "RightShoulder";
_worldPosition = _unit modelToWorld _selectionPosition;
_unitDirection = getDir _unit;
_unitVelocity = velocity _unit;

_tube = _tubeModel createVehicleLocal _worldPosition;
_tube setPos [(_worldPosition select 0) + ((cos _unitDirection) / 3), (_worldPosition select 1) - ((sin _unitDirection) / 3), _worldPosition select 2];
_tube setDir ((_unitDirection) - 90);
_tube setVelocity  [(_unitVelocity select 0) + (cos _unitDirection), (_unitVelocity select 1) - (sin _unitDirection), _unitVelocity select 2];