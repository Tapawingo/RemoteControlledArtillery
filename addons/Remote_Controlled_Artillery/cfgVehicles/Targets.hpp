// targets for reporting created markers into datalink for locking on with guided

/*
class All;
class RC_LockableMarkerTarget: All
{
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	displayName="Marker";
	nameSound="";
	accuracy=9.9999997e-005;
	model="laserTgt.p3d";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;
	threat[]={0.1,0.1,0.1};
	maxSpeed=0;
	simulation="laserTarget";
	laserTarget=1;
	irTarget=1;
	artilleryTarget=1;
	destrType="DestructNo";
	side=3;
	cost=9.9999999e+014;
	armor=500;
};
*/

/*
_marker = _this setVehicleVarName "gps";
hintSilent format ["varname: %1", vehicleVarName _marker];
*/

/*
class LaserTarget: All
{
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	displayName="$STR_DN_LASER_TARGET";
	nameSound="obj_LaserTarget";
	accuracy=9.9999997e-005;
	model="laserTgt.p3d";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;
	threat[]={0.5,0.5,0.1};
	maxSpeed=0;
	simulation="nvmarker";
	laserTarget=1;
	irTarget=0;
	artilleryTarget=0;
	destrType="DestructNo";
	side=3;
	cost=9.9999999e+014;
	armor=500;
};
class NVTarget: All
{
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	displayName="$STR_DN_LASER_TARGET";
	nameSound="obj_LaserTarget";
	accuracy=9.9999997e-005;
	model="laserTgt.p3d";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;
	threat[]={0.2,0.5,0.1};
	maxSpeed=0;
	simulation="nvmarker";
	laserTarget=0;
	irTarget=0;
	nvTarget=1;
	destrType="DestructEngine";
	side=3;
	cost=9.9999999e+014;
	armor=500;
};
class ArtilleryTarget: All
{
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	displayName="ArtilleryTarget";
	nameSound="";
	accuracy=9.9999997e-005;
	model="";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;
	threat[]={0.5,0.5,0.1};
	maxSpeed=0;
	simulation="artillerymarker";
	laserTarget=0;
	irTarget=0;
	nvTarget=0;
	artilleryTarget=1;
	destrType="DestructNo";
	side=3;
	cost=9.9999999e+014;
	armor=500;
	scope=1;
};
class ArtilleryTargetW: ArtilleryTarget
{
	side=1;
	scope=1;
};
class ArtilleryTargetE: ArtilleryTarget
{
	side=0;
	scope=1;
};


//target base classes
class TargetSoldierBase: StaticWeapon
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=1.78;
	_generalMacro="TargetSoldierBase";
	scope=0;
	scopeCurator=0;
	displayName="$STR_A3_cfgVehicles_TargetSoldierBase0";
	model="\A3\Structures_F\Training\InvisibleTarget_F.p3d";
	editorSubcategory="EdSubcat_Targets";
	vehicleClass="Training";
	cost=200000;
	accuracy=0.050000001;
	destrType="DestructNo";
	side=5;
	alwaysTarget=1;
	armor=3;
	type=0;
	class Turrets
	{
		class MainTurret: NewTurret
		{
			body="";
			gun="";
		};
	};
};

class O_TargetSoldier: TargetSoldierBase
{
	author="$STR_A3_Bohemia_Interactive";
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]=
		{
			"zasleh",
			"light_back",
			"brzdove svetlo",
			"clan",
			"podsvit pristroju",
			"poskozeni"
		};
		verticalOffset=0.98699999;
		verticalOffsetWorld=-0.014;
		init="''";
	};
	_generalMacro="O_TargetSoldier";
	scope=1;
	scopeCurator=0;
	crew="O_UAV_AI";
	typicalCargo[]=
	{
		"O_UAV_AI"
	};
	side=0;
	faction="OPF_F";
};

class O_TargetSoldier;
class CBA_O_InvisibleTarget: O_TargetSoldier
{
	author="$STR_CBA_Author";
	displayName="$STR_cba_ai_InvisibleTargetSoldier";
	scope=2;
	scopeCurator=2;
	scopeArsenal=0;
	model="\x\cba\addons\ai\InvisibleTarget.p3d";
	icon="CBA_iconInvisibleTarget";
	class HitPoints
	{
	};
};
*/

/*
class CfgVehicles
{
	access=1;
	class All
	{
		etc
	};

class Static: All
	{
		reversed=0;
		scopeCurator=0;
		hasDriver=0;
		icon="iconObject";
		displayName="$STR_DN_UNKNOWN";
		nameSound="obj_object";
		accuracy=0.0049999999;
		audible=0;
		simulation="house";
		class DestructionEffects
		{
		};
		cost=1000;
		picture="pictureStaticObject";
		weapons[]={};
		magazines[]={};
		irTarget=0;
		type=1;
		threat[]={0,0,0};
		maxSpeed=0;
		coefInside=2;
		coefInsideHeur=2;
		coefSpeedInside=2;
		windSockExist=0;
	};

class Static;
class TargetBase: Static
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=0.93000001;
	_generalMacro="TargetBase";
	displayName="$STR_DN_TARGET";
	editorCategory="EdCat_Things";
	editorSubcategory="EdSubcat_Targets";
	vehicleClass="Training";
	ladders[]={};
	nameSound="obj_target";
	cost=1;
	armor=100;
	type=0;
};

class Target_F: TargetBase
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=0.75999999;
	editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Target_F.jpg";
	_generalMacro="Target_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_cfgVehicles_Target_F0";
	model="\A3\Structures_F\Training\Target_F.p3d";
	icon="iconObject_4x5";
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"a3\structures_f\training\data\target_longrange_co.paa",
		"a3\structures_f\training\data\target_figure_co.paa"
	};
	destrType="DestructNo";
};
*/

/*
class StaticWeapon: LandVehicle
{
	class NewTurret;
};
class TargetSoldierBase: StaticWeapon
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=1.78;
	_generalMacro="TargetSoldierBase";
	scope=0;
	scopeCurator=0;
	displayName="$STR_A3_cfgVehicles_TargetSoldierBase0";
	model="\A3\Structures_F\Training\InvisibleTarget_F.p3d";
	editorSubcategory="EdSubcat_Targets";
	vehicleClass="Training";
	cost=200000;
	accuracy=0.050000001;
	destrType="DestructNo";
	side=5;
	alwaysTarget=1;
	armor=3;
	type=0;
	class Turrets
	{
		class MainTurret: NewTurret
		{
			body="";
			gun="";
		};
	};
};

class B_TargetSoldier: TargetSoldierBase
{
	author="$STR_A3_Bohemia_Interactive";
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]=
		{
			"zasleh",
			"light_back",
			"brzdove svetlo",
			"clan",
			"podsvit pristroju",
			"poskozeni"
		};
		verticalOffset=0.98699999;
		verticalOffsetWorld=-0.014;
		init="''";
	};
	_generalMacro="B_TargetSoldier";
	scope=1;
	scopeCurator=0;
	crew="B_UAV_AI";
	typicalCargo[]=
	{
		"B_UAV_AI"
	};
	side=1;
	faction="BLU_F";
};
*/

/*
class TargetSoldierBase;
class RC_GPSDatalinkTarget_Base: TargetSoldierBase
{
	class Eventhandlers;
	scope=0;
	scopeCurator=0;
	scopeArsenal=0;
};
class RC_GPSDatalinkTarget: RC_GPSDatalinkTarget_Base
{
	//check if side player works in pvp!
	class EventHandlers: EventHandlers
	{
		init="if (!isserver) exitwith {}; (_this select 0) spawn {while {true} do {(side player) reportRemoteTarget [_this, 5]; sleep 4;};};";
	};

	author="Ascent";
	displayName="GPS Marker";
	_generalMacro="RC_GPSDatalinkTarget";
	faction="RemoteControlled_B";
	editorSubcategory="RC_Spotting_subcat";
	scope=2;	//0?
	scopeCurator=0;	//0?
	irTarget=1;
	//laserTarget=1;
	crewVulnerable=0;
	threat[]={0.0,0.0,0.0};
	//add cost?
	//is destructable
	destrType="DestructNo";
	armor=1000;	//3
	class HitPoints
	{
	};

	model="\A3\Structures_F\Training\Target_F.p3d";		//\A3\Structures_F\Training\InvisibleTarget_F.p3d
	hiddenSelections[]=
	{
		"camo",
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"a3\structures_f\training\data\target_longrange_co.paa",
		"a3\structures_f\training\data\target_figure_co.paa"
	};

	//targetable, but not engaged by ai
	alwaysTarget=0;
	cost=0;
	type=1;	//0 soft, 1 armored, 2 air
	side=5;	//5 enemy, 3 civ
	//vehicleClass="Training";
	vehicleClass="Objects";
	crew="";
	typicalCargo[]=
	{
		""
	};
};
*/

class All;
class RC_GPSDatalinkTarget_Base: All
{
	class Eventhandlers;
	scope=0;
	scopeCurator=0;
	scopeArsenal=0;
};
class RC_GPSDatalinkTarget: RC_GPSDatalinkTarget_Base
{
	//check if side player works in pvp!
	class EventHandlers: EventHandlers
	{
		init="if (!isserver) exitwith {}; (_this select 0) spawn {while {true} do {(side player) reportRemoteTarget [_this, 4]; sleep 2;};};";
	};

	author="Ascent";
	displayName="GPS Marker";
	_generalMacro="RC_GPSDatalinkTarget";
	scope=2;	//0?
	scopeCurator=2;	//0?
	faction="RemoteControlled_B";
	editorSubcategory="RC_Spotting_subcat";
	//alwaysTarget=0;

	//edited lasertarget values
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	accuracy=9.9999997e-005;
	model="laserTgt.p3d";
	//model="";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;	//0 soft, 1 armored, 2 air
	threat[]={0,0,0};	//{0.5,0.5,0.1}
	maxSpeed=0;
	//simulation="laserTarget";
	//simulation="nvmarker";
	simulation="artillerymarker";	//idk
	laserTarget=0;	//makes it displayed like laser on DL
	nvTarget=0;	//1 even with ir 1 makes it unlockable
	irTarget=1;	//test 1
	artilleryTarget=0;	//1 is unlockable on datalink panel by all rounds
	destrType="DestructNo";
	side=3;
	cost=0;	//9.9999999e+014
	armor=500;
};

/*
class LaserTarget: All
{
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	displayName="$STR_DN_LASER_TARGET";
	nameSound="obj_LaserTarget";
	accuracy=9.9999997e-005;
	model="laserTgt.p3d";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;
	threat[]={0.5,0.5,0.1};
	maxSpeed=0;
	simulation="laserTarget";
	laserTarget=1;
	irTarget=0;
	artilleryTarget=0;
	destrType="DestructNo";
	side=3;
	cost=9.9999999e+014;
	armor=500;
};
class NVTarget: All
{
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	displayName="$STR_DN_LASER_TARGET";
	nameSound="obj_LaserTarget";
	accuracy=9.9999997e-005;
	model="laserTgt.p3d";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;
	threat[]={0.2,0.5,0.1};
	maxSpeed=0;
	simulation="nvmarker";
	laserTarget=0;
	irTarget=0;
	nvTarget=1;
	destrType="DestructEngine";
	side=3;
	cost=9.9999999e+014;
	armor=500;
};
class ArtilleryTarget: All
{
	reversed=0;
	hasDriver=0;
	icon="iconLaserTarget";
	displayName="ArtilleryTarget";
	nameSound="";
	accuracy=9.9999997e-005;
	model="";
	picture="pictureLaserTarget";
	weapons[]=
	{
		"FakeWeapon"
	};
	magazines[]=
	{
		"FakeWeapon"
	};
	type=1;
	threat[]={0.5,0.5,0.1};
	maxSpeed=0;
	simulation="artillerymarker";
	laserTarget=0;
	irTarget=0;
	nvTarget=0;
	artilleryTarget=1;
	destrType="DestructNo";
	side=3;
	cost=9.9999999e+014;
	armor=500;
	scope=1;
};
*/

class O_TargetSoldier;
class RC_InvisibleDatalinkTarget_O_Base: O_TargetSoldier
{
	class Eventhandlers;
	scope=0;
	scopeCurator=0;
	scopeArsenal=0;
};
class RC_InvisibleDatalinkTarget_O: RC_InvisibleDatalinkTarget_O_Base
{
	class EventHandlers: EventHandlers
	{
		init="if (!isserver) exitwith {}; (_this select 0) spawn {while {true} do {(side player) reportRemoteTarget [_this, 5]; sleep 4;};};";
	};

	author="Ascent";
	displayName="GPS Marker";
	scope=2;
	scopeCurator=2;
	irTarget=1;
	crewVulnerable=0;
	type=1;
	threat[]={0.0,0.0,0.0};
	destrType="DestructNo";
	class HitPoints
	{
	};
};
class B_TargetSoldier;
class RC_InvisibleDatalinkTarget_B_Base: B_TargetSoldier
{
	class Eventhandlers;
	scope=0;
	scopeCurator=0;
	scopeArsenal=0;
};
class RC_InvisibleDatalinkTarget_B: RC_InvisibleDatalinkTarget_B_Base
{
	class EventHandlers: EventHandlers
	{
		init="if (!isserver) exitwith {}; (_this select 0) spawn {while {true} do {(side player) reportRemoteTarget [_this, 5]; sleep 4;};};";
	};

	author="Ascent";
	displayName="GPS Marker";
	scope=2;
	scopeCurator=2;
	irTarget=1;
	crewVulnerable=0;
	type=1;
	threat[]={0.0,0.0,0.0};
	destrType="DestructNo";
	class HitPoints
	{
	};
};
class I_TargetSoldier;
class RC_InvisibleDatalinkTarget_I_Base: I_TargetSoldier
{
	class Eventhandlers;
	scope=0;
	scopeCurator=0;
	scopeArsenal=0;
};
class RC_InvisibleDatalinkTarget_I: RC_InvisibleDatalinkTarget_I_Base
{
	class EventHandlers: EventHandlers
	{
		init="if (!isserver) exitwith {}; (_this select 0) spawn {while {true} do {(side player) reportRemoteTarget [_this, 5]; sleep 4;};};";
	};

	author="Ascent";
	displayName="GPS Marker";
	scope=2;
	scopeCurator=2;
	irTarget=1;
	crewVulnerable=0;
	type=1;
	threat[]={0.0,0.0,0.0};
	destrType="DestructNo";
	class HitPoints
	{
	};
};