class Params {
	class CTI_AI_TEAMS_JIP_PRESERVE {
		title = "AI: Keep units on JIP";
		values[] = {0,1};
		texts[] = {"No","Yes"};//{"Disabled","Enabled"};
		default = 0;
	};
	class CTI_AI_COMMANDER_ENABLED {
		title = "AI: Commander";
		values[] = {0,1};
		texts[] = {"Disabled", "Enabled"};
		default = 1;
	};
	class CTI_AI_TEAMS_ENABLED {
		title = "AI: Teams";
		values[] = {0,1};
		texts[] = {"Disabled", "Enabled"};
		default = 1;
	};
	class CTI_AI_TEAMS_GROUPSIZE {
		title = "AI: Team Size (AI)";
		values[] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,35,40,45,50,60,70,80,90,100};
		texts[] = {"2","4","6","8","10","12","14","16","18","20","22","24","26","28","30","35","40","45","50","60","70","80","90","100"};
		default = 12;
	};
	class CTI_AI_PLAYER_TEAMS_GROUPSIZE {
		title = "AI: Team Size (Player)";
		values[] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,35,40,45,50,60,70,80,90,100};
		texts[] = {"2","4","6","8","10","12","14","16","18","20","22","24","26","28","30","35","40","45","50","60","70","80","90","100"};
		default = 12;
	};
	class CTI_ARTILLERY_SETUP {
		title = "ARTILLERY: Setup";
		values[] = {-2,-1,0,1,2,3};
		texts[] = {"Disabled","Ballistic Computer","Short","Medium","Long","Extreme"};
		default = 0;
	};
	class CTI_BASE_AREA_MAX {
		title = "BASE: Areas Limit";
		values[] = {0,1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,22,24};
		texts[] = {"Disabled","1","2","3","4","5","6","7","8","9","10","12","14","16","18","20","22","24"};
		default = 2;
	};
	class CTI_BASE_DEFENSES_AUTO_LIMIT {
		title = "BASE: Auto manned Defenses";
		values[] = {0,5,10,15,20,25,30,35,40,45,50};
		texts[] = {"Disabled","5","10","15","20","25","30","35","40","45","50"};
		default = 30;
	};
	class CTI_BASE_DEFENSES_AUTO_RANGE {
		title = "BASE: Auto Defenses Range";
		values[] = {50,100,150,200,250,300,350,400,450,500,600,700,800,900,1000};
		texts[] = {"50m","100m","150m","200m","250m","300m","350m","400m","450m","500m","600m","700m","800m","900m","1000m"};
		default = 500;
	};
	class CTI_BASE_HQ_REPAIR {
		title = "BASE: HQ Repairable";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 0;
	};
	class CTI_BASE_FOB_MAX {
		title = "BASE: FOB Limit";
		values[] = {0,1,2,3,4,5,6,7,8,9,10};
		texts[] = {"Disabled","1","2","3","4","5","6","7","8","9","10"};
		default = 2;
	};
	class CTI_BASE_START_TOWN {
		title = "BASE: Start Near towns";
		values[] = {0,1};
		texts[] = {"No","Yes"};//{"Disabled","Enabled"};
		default = 1;
	};
	class CTI_BASE_STARTUP_PLACEMENT {
		title = "BASE: Startup Placement";
		values[] = {2000,3000,4000,5000,6000,7000,8000,9000,10000,12000,15000,20000};
		texts[] = {"2 KM","3 KM","4 KM","5 KM","6 KM","7 KM","8 KM","9 KM","10 KM","12 KM","15 KM","20 KM"};
		default = 4000;
	};
	class CTI_ECONOMY_INCOME_CYCLE {
		title = "INCOME: Delay";
		values[] = {60,90,120,160,190};
		texts[] = {"01:00 Minute","01:30 Minutes","02:00 Minutes","02:30 Minutes","03:00 Minutes"};
		default = 60;
	};
	class CTI_ECONOMY_STARTUP_FUNDS_EAST_COMMANDER {
		title = "INCOME: Starting Funds (East Commander)";
		values[] = {9000,15000,20000,25000,30000,35000,40000,45000,50000,60000};
		texts[] = {"$9000","$15000","$20000","$25000","$30000","$35000","$40000","$45000","$50000","$60000"};
		default = 9000;
	};
	class CTI_ECONOMY_STARTUP_FUNDS_EAST {
		title = "INCOME: Starting Funds (East Players)";
		values[] = {900,1500,2400,3200,6000,8000,10000,12500,15000,20000};
		texts[] = {"$900","$1500","$2400","$3200","$6000","$8000","$10000","$12500","$15000","$20000"};
		default = 900;
	};
	class CTI_ECONOMY_STARTUP_FUNDS_WEST_COMMANDER {
		title = "INCOME: Starting Funds (West Commander)";
		values[] = {9000,15000,20000,25000,30000,35000,40000,45000,50000,60000, 999999};
		texts[] = {"$9000","$15000","$20000","$25000","$30000","$35000","$40000","$45000","$50000","$60000", "$999999"};
		default = 9000;
	};
	class CTI_ECONOMY_STARTUP_FUNDS_WEST {
		title = "INCOME: Starting Funds (West Players)";
		values[] = {900,1500,2400,3200,6000,8000,10000,12500,15000,20000};
		texts[] = {"$900","$1500","$2400","$3200","$6000","$8000","$10000","$12500","$15000","$20000"};
		default = 900;
	};
	class CTI_ECONOMY_TOWNS_OCCUPATION {
		title = "INCOME: Towns Occupation";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 1;
	};
	class CTI_ENVIRONMENT_STARTING_HOUR {
		title = "ENVIRONMENT: Starting Hour";
		values[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
		texts[] = {"00:00","01:00","02:00","03:00","04:00","05:00","06:00","07:00","08:00","09:00","10:00","11:00",
		"12:00","13:00","14:00","15:00","16:00","17:00","18:00","19:00","20:00","21:00","22:00","23:00", "Random"};
		default = 9;
	};
	class CTI_ENVIRONMENT_STARTING_MONTH {
		title = "ENVIRONMENT: Starting Month";
		values[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
		texts[] = {"January","February","March","April","May","June","July","August","September","October","November","December", "Random"};
		default = 6;
	};
	class CTI_ENVIRONMENT_WEATHER_FAST {
		title = "ENVIRONMENT: Weather Fast Time";
		values[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
		texts[] = {"Disabled","24H = 10H","24H = 9H30","24H = 9H","24H = 8H30","24H = 8H","24H = 7H30","24H = 7H","24H = 6H30", 
		"24H = 6H","24H = 5H30","24H = 5H","24H = 4H30","24H = 4H"};
		default = 0;
	};
	class CTI_RESPAWN_AI {
		title = "RESPAWN: AI Members";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 1;
	};
	class CTI_RESPAWN_CAMPS_MODE {
		title = "RESPAWN: Camps";
		values[] = {0,1,2,3};
		texts[] = {"Disabled","Classic","Nearby Camps","Occupation Only"};
		default = 2;
	};
	class CTI_RESPAWN_CAMPS_RULE_MODE {
		title = "RESPAWN: Enemy near";
		values[] = {0,1,2};
		texts[] = {"Disabled","West | East","West | East | Resistance"};
		default = 2;
	};
	class CTI_RESPAWN_TIMER {
		title = "RESPAWN: Delay";
		values[] = {15,20,25,30,35,40,45,50,55,60};
		texts[] = {"15 Seconds","20 Seconds","25 Seconds","30 Seconds","35 Seconds","40 Seconds","45 Seconds","50 Seconds","55 Seconds","60 Seconds"};
		default = 30;
	};
	class CTI_RESPAWN_PENALTY {
		title = "RESPAWN: Penalty";
		values[] = {0,1,2,3,4};
		texts[] = {"Disabled","Default Gear","Full Gear Price","1/2 Gear Price","1/4 Gear Price"};
		default = 0;
	};
	class CTI_RESPAWN_FOB_RANGE {
		title = "RESPAWN: FOB Range";
		values[] = {500,750,1000,1250,1500,1750,2000};
		texts[] = {"0.50 KM","0.75 KM","1 KM","1.25 KM","1.5 KM","1.75 KM","2 KM"};
		default = 1250;
	};
	class CTI_RESPAWN_MOBILE {
		title = "RESPAWN: Mobile";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 0;
	};
	class CTI_RESPAWN_CAMPS_RANGE {
		title = "RESPAWN: Towns Range";
		values[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1500,2000,2500,3000,3500,4000};
		texts[] = {"50m","100m","150m","200m","250m","300m","350m","400m","450m","500m","550m","600m","650m","700m","750m","800m","850m","900m","950m","1000m","1500m","2000m","2500m","3000m","3500m","4000m"};
		default = 400;
	};
	class CTI_TOWNS_AMOUNT {
		title = "TOWNS: Amount";
		values[] = {0,1,2,3,4,5};
		texts[] = {"6 Towns Variant A","6 Towns Variant B","10 Towns Variant A","10 Towns Variant B","13 Towns","16 Towns (Full)"};
		default = 5;
	};
	class CTI_TOWNS_CAMPS_CREATE {
		title = "TOWNS: Camps";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 1;
	};
	class CTI_TOWNS_GEAR {
		title = "TOWNS: Equipment Purchase";
		values[] = {0,1,2,3};
		texts[] = {"Disabled","Camps","Depot","Camps and Depot"};
		default = 3;
	};
	class CTI_TOWNS_BUILD_PROTECTION_RANGE {
		title = "TOWNS: Protection Range";
		values[] = {0,50,100,150,200,250,300,350,400,450,500};
		texts[] = {"0m","50m","100m","150m","200m","250m","300m","350m","400m","450m","500m"};
		default = 250;
	};
	class CTI_TOWNS_OCCUPATION {
		title = "TOWNS: Occupation";
		values[] = {0,1,2,3,4};
		texts[] = {"Disabled","Light","Medium","Hard","Impossible"};
		default = 3;
	};
	class CTI_TOWNS_RESISTANCE {
		title = "TOWNS: Resistance";
		values[] = {0,1,2,3,4};
		texts[] = {"Disabled","Light","Medium","Hard","Impossible"};
		default = 3;
	};
	class CTI_UNITS_TOWN_PURCHASE {
		title = "TOWNS: Purchase Infantry";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 1;
	};
	class CTI_TOWN_STARTING_MODE {
		title = "TOWNS: Starting Mode";
		values[] = {0,1,2,3};
		texts[] = {"None","Divided Towns","Nearby Towns","Random"};
		default = 0;
	};
	class CTI_TOWNS_VEHICLES_LOCK {
		title = "TOWNS: Vehicle Lock";
		values[] = {0,1,2,3};
		texts[] = {"Unlocked","Locked (Resistance)","Locked (Occupation)","Locked (Resistance and Occupation)"};
		default = 2;
	};
	class CTI_VEHICLES_AIR_AA {
		title = "UNITS: Aircraft AA Missiles";
		values[] = {0,1,2};
		texts[] = {"Disabled","Enabled with Upgrade","Enabled"};
		default = 1;
	};
	class CTI_VEHICLES_AIR_AT {
		title = "UNITS: Aircraft AT Missiles";
		values[] = {0,1,2};
		texts[] = {"Disabled","Enabled with Upgrade","Enabled"};
		default = 1;
	};
	class CTI_VEHICLES_AIR_CM {
		title = "UNITS: Aircraft Countermeasures";
		values[] = {0,1,2};
		texts[] = {"Disabled","Enabled with Upgrade","Enabled"};
		default = 1;
	};
	class CTI_MARKERS_INFANTRY {
		title = "UNITS: Show Map Infantry";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 1;
	};
	class CTI_UNITS_FATIGUE {
		title = "UNITS: Fatigue";
		values[] = {0,1};
		texts[] = {"Disabled","Enabled"};
		default = 0;
	};
	class CTI_VEHICLES_EMPTY_TIMEOUT {
		title = "UNITS: Vehicles Reycling Delay";
		values[] = {60,120,180,240,300,600,1200,1800,2400,3000,3600};
		texts[] = {"1 Minute","2 Minutes","3 Minutes","4 Minutes","5 Minutes","10 Minutes","20 Minutes","30 Minutes","40 Minutes","50 Minutes","1 Hour"};
		default = 600;
	};
	class CTI_GRAPHICS_TG_MAX {
		title = "VISUAL: Terrain Grid";
		values[] = {10,20,30,50};
		texts[] = {"Far","Medium","Short","Free"};
		default = 50;
	};
	class CTI_GRAPHICS_VD_MAX {
		title = "VISUAL: View Distance";
		values[] = {1000,1500,2000,2500,3000,3500,4000,4500,5000};
		texts[] = {"1 KM","1.5 KM","2 KM","2.5 KM","3 KM","3.5 KM","4 KM","4.5 KM","5 KM"};
		default = 2500;
	};
};
