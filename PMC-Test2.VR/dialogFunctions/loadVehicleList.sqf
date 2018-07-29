_inidbi2 = ["new", "Faction Database"] call OO_INIDBI;
_garArray = ["read", ["Logistics", "Garage"]] call _inidbi2;

disableSerialization;
createDialog "garageMenu";

waitUntil {!isNull (findDisplay 9998);};

_ctrl = (findDisplay 9998) displayCtrl 1600;
_ctrl ctrlEnable true;

{
	_vehName = getText (configFile >> "cfgVehicles" >> _x >> "displayname");
	lbAdd [1500, _vehName];
	lbSetData [1500, _forEachIndex, _x];
} forEach _garArray;

_count = count _garArray;

//selectButton

		_ctrl ctrlAddEventHandler ["ButtonDown",{
											_index = lbCurSel 1500;
											_selVehicle = lbData [1500, _index];
											closeDialog 0;

											//Spawn Vehicle
											_veh = createVehicle [_selVehicle, position player, [], 0, "FLY"];
											[_index] call Elem_fnc_selectVehicle;
		}];

//Need check to prevent duplicates.