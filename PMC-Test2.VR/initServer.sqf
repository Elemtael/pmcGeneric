/*

initServer.sqf
 
 PMC Zeus DB Test
 by Elemtael
 
*/
"checkForPlayerDatabase" addPublicVariableEventHandler
{
	private ["_data"];
	_data = (_this select 1);
	_clientID = (_data select 0);
	_UID = (_data select 1);
	_playerName = (_data select 2);
	
	_inidbi = ["new", _UID] call OO_INIDBI;
	_dbExists = "exists" call _inidbi;
	
	if (_dbExists) then
	{
		//hint "Player Data Found  DATABASE INITIALIZED";
	}
	
	else 
	{
		//hint "No Player Data Found  INITIALIZING DATABASE";
		null = [_clientID, _UID, _playerName] execVM "createPlayerDatabase.sqf";
	};
};

"checkForFactionDatabase" addPublicVariableEventHandler
{
	_inidbi2 = ["new", "Faction Database"] call OO_INIDBI;
	_fdbExists = "exists" call _inidbi2;
	
	if (_fdbExists) then
	{
		hint "Faction Data Found";
	}
	
	else 
	{
		hint "No Faction Data Found  INITIALIZING DATABASE";
		null = [] execVM "createFactionDatabase.sqf";
	};
};