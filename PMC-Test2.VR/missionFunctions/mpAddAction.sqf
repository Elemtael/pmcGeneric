//Vars

params ["_object","_screenMsg","_scriptToCall"];
_object = _this select 0;
_actionName = _this select 1;
_scriptToCall = _this select 2;

if(isNull _object) exitWith {player sideChat "Your shit is broke"};

_object addaction [_screenMsg,_scriptToCall];
