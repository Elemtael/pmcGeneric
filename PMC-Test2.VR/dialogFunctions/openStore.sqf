disableSerialization;

createDialog "factionWeaponShop";

waitUntil {!isNull (findDisplay 9997);};

_comboCtrl = (findDisplay 9997) displayCtrl 2100;
_listCtrl = (findDisplay 9997) displayCtrl 1500;
_comboArray = ["Select Weapon Class","Assault Rifles","Machineguns","Snipers Rifles","Pistols","Launchers","Ammo"];

{
	lbAdd [2100, _x];
	lbSetData [2100, _forEachIndex, _x];
} forEach _comboArray;

_comboCtrl lbSetCurSel 0;

		_comboCtrl ctrlAddEventHandler ["LBSelChanged",
		{
			lbclear 1500;
			_index = lbCurSel 2100;
			_comboSelection = lbData [2100, _index];

			_listCtrl = (findDisplay 9997) displayCtrl 1500;

			_wtfArray = [_index] call elem_fnc_getWeaponData;

			{
					_wepName = getText (configFile >> "cfgWeapons" >> (_x select 0) >> "displayname");
					lbAdd [1500, _wepName];
					lbSetData [1500, _forEachIndex, (_x select 0)];
					} forEach _wtfArray;
		}];

		_listCtrl ctrlAddEventHandler ["LBSelChanged",
		{
			_index2 = lbCurSel 1500;
			_listSelection = lbData [1500, _index2];
			_wtfArray = [_index2] call elem_fnc_getWeaponData;

			//Var Storage
			_wepQuantity = ((_wtfArray select _index2) select 2);
			//_ammoInfo = getText (configFile >> "cfgWeapons" >> ((_wtfArray select _index2) select 0) >> "magazines");
			_weaponPrice = ((_wtfArray select _index2) select 1);

			ctrlSetText [1005, _wepQuantity];
			ctrlSetText [1003, _weaponPrice];


		}];

player SideChat "We went through the code.";