//cratereffects
class RC_CircleDust_Base
{
	simulation="particles";
	enabled="distToWater interpolate [0.05,0.06,-1,1]";
	position[]={0,0,0};
	intensity=1;
	interval=1;
	lifeTime=0.2;
};

class RC_ArtyShellCrater
{
	class ShellStones
	{
		simulation="particles";
		type="DirtBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustBig";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class CircleDust
	{
		simulation="particles";
		type="RC_82mmCircleDust";
		enabled="distToWater interpolate [0.05,0.06,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};

class RC_82mmAirburstDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_82mmCircleDust";
	};
};

class RC_82mmGuidedDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_82mmGuidedCircleDust";
	};
};

class RC_105mmAirburstDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_105mmCircleDust";
	};
};

class RC_105mmGuidedDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_105mmGuidedCircleDust";
	};
};

class RC_120mmAirburstDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_120mmCircleDust";
	};
};
class RC_120mmGuidedDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_120mmGuidedDust";
	};
};

class RC_155mmAirburstDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_155mmCircleDust";
	};
};
class RC_155mmGuidedDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_155mmGuidedCircleDust";
	};
};

class RC_230mmAirburstDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_105mmCircleDust";
	};
};
class RC_230mmGuidedDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_230mmGuidedCircleDust";
	};
};

class RC_604mmAirburstDust
{
	class RC_CircleDust: RC_CircleDust_Base
	{
		type="RC_604mmCircleDust";
	};
};

//explosioneffects
class RC_MortarExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MortarExp1
	{
		simulation="particles";
		type="MortarExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSparks1
	{
		simulation="particles";
		type="ShellSparks1";
		position[]={0,2,0};
		interval=0.1;
		intensity=0.01;
		lifeTime=0.4;
	};
	class ShellSparks2
	{
		simulation="particles";
		type="ShellSparks2";
		position[]={0,2,0};
		interval=0.1;
		intensity=1;
		lifeTime=0.4;
	};
	/*
	class ShellSparks3: ShellSparks1
	{
		type="ShellSparks1";
	};
	class ShellSparks4: ShellSparks2
	{
		type="ShellSparks2";
	};
	*/
	class ShellShockwave
	{
		simulation="particles";
		type="ShellShockwave";
		position[]={0,0,0};
		intensity=1;
		interval= 1;
		lifeTime=1;
	};
};

class RC_GuidedExplosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MortarExp1
	{
		simulation="particles";
		type="MortarExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="CloudMedDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSparks1
	{
		simulation="particles";
		type="ShellSparks1";
		position[]={0,2,0};
		interval=0.1;
		intensity=0.01;
		lifeTime=0.4;
	};
	class ShellSparks2
	{
		simulation="particles";
		type="ShellSparks2";
		position[]={0,2,0};
		interval=0.1;
		intensity=1;
		lifeTime=0.4;
	};
	class ShellShockwave
	{
		simulation="particles";
		type="ShellShockwave";
		position[]={0,0,0};
		intensity=1;
		interval= 1;
		lifeTime=1;
	};
};