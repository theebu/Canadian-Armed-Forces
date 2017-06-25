_vehicle = _this select 0;
_actionro = _this select 2;



lightr = "#lightpoint" createVehicle (position _vehicle);
lightr setLightBrightness 0.2;
lightr setLightAmbient[1, 0, 0];
lightr setLightColor[1, 0, 0];
lightr setLightUseFlare true;
lightr setLightFlareSize 0.4;
lightr setLightFlareMaxDistance 3;
lightr setLightDayLight true;
lightr attachTo [_vehicle, [0,0,0]];


GO = _vehicle addAction ["Green Light ON","ebu_c130\scripts\greenlighton.sqf"];
LO = _vehicle addAction ["Jump Light OFF","\ebu_c130\scripts\lightoff.sqf"];

_vehicle removeAction _actionro;