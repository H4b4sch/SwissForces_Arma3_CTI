private ["_adjusted_costs","_adjusted_levels","_adjusted_links","_adjusted_times","_adjusted_labels","_costs","_enabled","_labels","_levels","_links","_times","_side"];

_side = _this;
_adjusted_costs = [];
_adjusted_levels = [];
_adjusted_links = [];
_adjusted_times = [];
_adjusted_labels = [];

_enabled = [
	true, //--- Barracks
	true, //--- Light
	true, //--- Heavy
	true, //--- Air
	true, //--- Satellite
	true, //--- Air FFAR
	(missionNamespace getVariable "CTI_VEHICLES_AIR_AT") == 1, //--- Air AT
	(missionNamespace getVariable "CTI_VEHICLES_AIR_AA") == 1, //--- Air AA
	(missionNamespace getVariable "CTI_VEHICLES_AIR_CM") == 1, //--- Air CM
	(missionNamespace getVariable "CTI_TOWNS_OCCUPATION") > 0, //--- Towns Occupation
	true //--- Gear
];

_costs = [
	[1500, 2500, 4000], //--- Barracks
	[2500], //--- Light
	[5000], //--- Heavy
	[25000], //--- Air
	[75000], //--- Satellite
	[10000], //--- Air FFAR
	[15000], //--- Air AT
	[20000], //--- Air AA
	[8000], //--- Air CM
	[5000, 20000, 40000], //--- Towns Occupation
	[1500, 3000, 5500] //--- Gear
];

_levels = [
	3, //--- Barracks
	1, //--- Light
	1, //--- Heavy
	1, //--- Air
	1, //--- Satellite
	1, //--- Air FFAR
	1, //--- Air AT
	1, //--- Air AA
	1, //--- Air CM
	3, //--- Towns Occupation
	3 //--- Gear
];

_links = [
	[[],[CTI_UPGRADE_GEAR,1],[CTI_UPGRADE_GEAR,2]], //--- Barracks
	[[]], //--- Light
	[[]], //--- Heavy
	[[]], //--- Air
	[[CTI_UPGRADE_AIR, 1]], //--- Satellite
	[[]], //--- Air FFAR
	[[CTI_UPGRADE_AIR, 1]], //--- Air AT
	[[CTI_UPGRADE_AIR, 1]], //--- Air AA
	[[]], //--- Air CM
	[[CTI_UPGRADE_BARRACKS,1],[CTI_UPGRADE_LIGHT,1],[CTI_UPGRADE_HEAVY,1]], //--- Towns Occupation
	[[CTI_UPGRADE_BARRACKS,1],[CTI_UPGRADE_BARRACKS,2],[CTI_UPGRADE_BARRACKS,3]] //--- Gear
];

_times = [
	[20,40,60], //--- Barracks
	[30], //--- Light
	[50], //--- Heavy
	[90], //--- Air
	[120], //--- Satellite
	[90], //--- Air FFAR
	[90], //--- Air AT
	[90], //--- Air AA
	[60], //--- Air CM
	[60, 70, 80], //--- Towns Occupation
	[20, 40, 60] //--- Gear
];

if (CTI_IsClient) then {
	_labels = [
		["Barracks", "Unlock better infantry units"], //--- Barracks
		["Light Factory", "Unlock better motorized units"], //--- Light
		["Heavy Factory", "Unlock better armored units"], //--- Heavy
		["Aircraft Factory", "Unlock better aircraft units"], //--- Air
		["Satellite", "Allows the use of the satellite camera"], //--- Satellite
		["Aircraft FFAR", "Unlocks the FFAR Rockets for Aircrafts"], //--- Air FFAR
		["Aircraft AT", "Unlocks the Anti Tank Missiles for Aircrafts"], //--- Air AT
		["Aircraft AA", "Unlocks the Anti Air Missiles for Aircrafts"], //--- Air AA
		["Aircraft Countermeasures", "Allows Aircraft to deploy countermeasures"], //--- Air CM
		["Towns Occupation", "Allows spawning of occupation AI to defend friendly towns from attackers.<br />If 'Income: Towns Occupation' is enabled, it also improves income generation in non-occupied towns"], //--- Towns Occupation
		["Gear", "Allows the use of better equipment in the Gear Menu"] //--- Gear
	];
};

{ //--- Remove disabled upgrades from each array (circumvents upgrade menu display bug). Sari
	if (_enabled select _forEachIndex) then {
		[_adjusted_costs,(_costs select _forEachIndex)] call CTI_CO_FNC_ArrayPush;
		[_adjusted_levels,(_levels select _forEachIndex)] call CTI_CO_FNC_ArrayPush;
		[_adjusted_links,(_links select _forEachIndex)] call CTI_CO_FNC_ArrayPush;
		[_adjusted_times,(_times select _forEachIndex)] call CTI_CO_FNC_ArrayPush;
		missionNamespace setVariable [Format["CTI_%1_UPGRADES_COSTS", _side],_adjusted_costs];
		missionNamespace setVariable [Format["CTI_%1_UPGRADES_LEVELS", _side],_adjusted_levels];
		missionNamespace setVariable [Format["CTI_%1_UPGRADES_LINKS", _side],_adjusted_links];
		missionNamespace setVariable [Format["CTI_%1_UPGRADES_TIMES", _side],_adjusted_times];
		if (CTI_IsClient) then {
			[_adjusted_labels,(_labels select _forEachIndex)] call CTI_CO_FNC_ArrayPush;
			missionNamespace setVariable [Format["CTI_%1_UPGRADES_LABELS", _side],_adjusted_labels];
		};
	};
} forEach _enabled;
