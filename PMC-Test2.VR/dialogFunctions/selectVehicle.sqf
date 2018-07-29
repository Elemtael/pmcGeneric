params ["_index2"];

//Read DB Garage Entries
_inidbi2 = ["new", "Faction Database"] call OO_INIDBI;
_garArray = ["read", ["Logistics", "Garage"]] call _inidbi2;

//Remove Selected Vehicle from List
_garArray deleteAt _index2;
_inidbi2 = ["new", "Faction Database"] call OO_INIDBI;
["write",["Logistics", "Garage" ,_garArray]] call _inidbi2;