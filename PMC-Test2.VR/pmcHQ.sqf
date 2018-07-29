[ "#PMC", "Base",
	{
		_baseLoc = _this select 0;


if (!isNil ("BOB") ) then {

				hint "Base location already exists. Moving base to new location.";
				BOB setPos _baseLoc;
	}

else {

		//Spawn Bob the Vendor
		_bobGroup = createGroup west;
		_bob = _bobGroup createUnit ["C_Story_Mechanic_01_F", _baseLoc, [], 0, "NONE"];
		_bob setVehicleVarName "BOB";
		_bob call BIS_fnc_objectVar;

		//Bob's initlization
		_bob allowDamage false;
		removeBackpackGlobal _bob;
		sleep 2;
		_bob disableAI "ANIM";

		//Add Actions
		[[_bob,"Open Store","dialogFunctions\openStore.sqf"],"mfnc_fnc_mpAddAction",nil,false] spawn BIS_fnc_MP;

		[[_bob], nil] call Ares_fnc_AddUnitsToCurator;
};


	}
] call Ares_fnc_RegisterCustomModule;