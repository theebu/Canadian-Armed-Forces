_vehicle = _this select 0;
_actionGO = _this select 2;

deletevehicle lightr;

lightg = "#lightpoint" createVehicle (position _vehicle);
lightg setLightIntensity 20;
lightg setLightAmbient[0, 1, 0];
lightg setLightColor[0, 1, 0];
lightg setLightFlareSize 0.4;
lightg setLightFlareMaxDistance 3;
lightg setLightDayLight true;
lightg setLightUseFlare true;
lightg attachTo [_vehicle, [0,0,0]];



_vehicle removeAction _actionGO;