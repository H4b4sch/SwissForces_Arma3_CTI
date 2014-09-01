/*
  # HEADER #
	Script: 		Server\Functions\Server_OnHQDestroyed.sqf
	Alias:			CTI_SE_FNC_OnHQDestroyed
	Description:	Triggered by the Killed EH whenever the HQ get destroyed
					Note this function shall be called by an Event Handler (EH) but can also be called manually
	Author: 		Benny
	Creation Date:	23-09-2013
	Revision Date:	10-05-2014 (Sari)
	
  # PARAMETERS #
    0	[Object]: The Killed defense
    1	[Object]: The Killer
    2	[Integer]: The Side ID of the defense
	
  # RETURNED VALUE #
	None
	
  # SYNTAX #
	[KILLED, KILLER, SIDE ID] spawn CTI_SE_FNC_OnHQDestroyed
	
  # DEPENDENCIES #
	Common Function: CTI_CO_FNC_GetSideFromID
	Common Function: CTI_CO_FNC_NetSend
	
  # EXAMPLE #
    _hq addEventHandler ["killed", format["[_this select 0, _this select 1, %1] spawn CTI_SE_FNC_OnHQDestroyed", _sideID]];
*/

_killed = _this select 0;
_killer = _this select 1;
_sideID = _this select 2;
_side = _sideID call CTI_CO_FNC_GetSideFromID;
_teamkill = if (side _killer == _side || side _killer == sideEnemy) then {true} else {false}; 

[["CLIENT", _side], "Client_OnMessageReceived", ["hq-destroyed"]] call CTI_CO_FNC_NetSend;

if (CTI_Log_Level >= CTI_Log_Information) then {["INFORMATION", "FILE: Server\Functions\Server_OnHQKilled.sqf", Format["[%1] HQ has been destroyed by [%2] on side [%3], Teamkill? [%4]", _side, name _killer, side _killer, _teamkill]] Call CTI_CO_FNC_Log};