_inidbi = ["new", "Faction Database"] call OO_INIDBI;

["write", ["Logistics","Money", 100000]] call _inidbi;
["write", ["Logistics","Garage", []]] call _inidbi;

["write", ["Rep","Faction 1", 0]] call _inidbi;