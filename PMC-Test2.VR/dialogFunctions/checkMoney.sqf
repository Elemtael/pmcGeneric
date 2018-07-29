_inidbi2 = ["new", "Faction Database"] call OO_INIDBI;

_money = ["read", ["Logistics", "Money"]] call _inidbi2;
hint format ["You currently have $%1", _money];