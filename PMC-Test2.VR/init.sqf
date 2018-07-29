/*init.sqf

 PMC Zeus DB Test
 by Elemtael

*/

_clientID = clientOwner;
_UID = getPlayerUID player;
_name = name player;
checkForPlayerDatabase = [_clientID, _UID, _name];
publicVariableServer "checkForPlayerDatabase";

checkForFactionDatabase = [];
publicVariableServer "checkForFactionDatabase";


_actionID = player addAction ["Open Dialog", "dialogFunctions\openHomeMenu.sqf"];

#include "pmcHQ.sqf";