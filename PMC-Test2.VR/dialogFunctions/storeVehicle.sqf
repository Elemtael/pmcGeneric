_veh = typeOf cursorTarget;
_vehName = getText (configFile >> "cfgVehicles" >> _veh >> "displayname");
_vehID = cursorTarget;
_playerDist = player distance cursorTarget;
_defaultDist = 10;


if (_playerDist <= _defaultDist) then
{
	_inidbi2 = ["new", "Faction Database"] call OO_INIDBI;
	_garArray = ["read", ["Logistics", "Garage"]] call _inidbi2;
	_garArray pushBack _veh;
	["write",["Logistics", "Garage" ,_garArray]] call _inidbi2;
	deleteVehicle _vehID;
	hint format ["Vehicle %1 stored.", _vehName];
}

else
{
	hint "Too far from vehicle.";
};

