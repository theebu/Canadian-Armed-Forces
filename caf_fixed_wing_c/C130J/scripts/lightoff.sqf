_vehicle = _this select 0;
_actionLO = _this select 2;

deletevehicle lightr;
deletevehicle lightg;

_vehicle removeAction LO;
_vehicle removeAction GO;

_RO = _vehicle addAction ["Red Light ON","\ebu_c130\scripts\redlighton.sqf"];