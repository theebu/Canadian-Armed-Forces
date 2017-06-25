// common definition for all vectors projected into HUD space

#define YtoXscale  ((SizeY10deg)/(SizeX10deg))


#define CIRCLE(bone,scale) \
{bone,{0,__EVAL(-scale*YtoXscale)},1},{bone,{__EVAL(+0.7*scale),__EVAL(-0.7*scale*YtoXscale)},1}, \
{bone,{+scale,0},1},                  {bone,{__EVAL(+0.7*scale),__EVAL(+0.7*scale*YtoXscale)},1}, \
{bone,{0,__EVAL(+scale*YtoXscale)},1},{bone,{__EVAL(-0.7*scale),__EVAL(+0.7*scale*YtoXscale)},1}, \
{bone,{-scale,0},1},                  {bone,{__EVAL(-0.7*scale),__EVAL(-0.7*scale*YtoXscale)},1}, \
{bone,{0,__EVAL(-scale*YtoXscale)},1}

#define CIRCLE_BIG(bone,scale) \
{bone,{0,__EVAL(-scale*YtoXscale)},1},{bone,{__EVAL(+0.50*scale),__EVAL(-0.87*scale*YtoXscale)},1},{bone,{__EVAL(+0.87*scale),__EVAL(-0.50*scale*YtoXscale)},1}, \
{bone,{__EVAL(+scale),0},1},                  {bone,{__EVAL(+0.87*scale),__EVAL(+0.50*scale*YtoXscale)},1},{bone,{__EVAL(+0.50*scale),__EVAL(+0.87*scale*YtoXscale)},1}, \
{bone,{0,__EVAL(+scale*YtoXscale)},1},{bone,{__EVAL(-0.50*scale),__EVAL(+0.87*scale*YtoXscale)},1},{bone,{__EVAL(-0.87*scale),__EVAL(+0.50*scale*YtoXscale)},1}, \
{bone,{__EVAL(-scale),0},1},                  {bone,{__EVAL(-0.87*scale),__EVAL(-0.50*scale*YtoXscale)},1},{bone,{__EVAL(-0.50*scale),__EVAL(-0.87*scale*YtoXscale)},1}, \
{bone,{0,__EVAL(-scale*YtoXscale)},1}

#define CIRCLE_MARK(bone,scaleIn,scaleOut,angle) \
{bone,{__EVAL(scaleIn *sin(angle)),__EVAL(-scaleIn *cos(angle)*YtoXscale)},1}, \
{bone,{__EVAL(scaleOut*sin(angle)),__EVAL(-scaleOut*cos(angle)*YtoXscale)},1}

#define POINT(bone,xx,yy) \
{bone,{__EVAL(xx),__EVAL(yy*(YtoXscale))},1}

#define POINT2(xx,yy) \
{{__EVAL(xx),__EVAL(yy*(YtoXscale))},1}

#define POINT_END() {}

#define DEF_HORIZONT(XX) class LevelP##XX:Level0 {type=line;points[]={{LevelP##XX,{-0.20,+0.03},1},{LevelP##XX,{-0.20,0},1},{LevelP##XX,{-0.05,0},1},{},{LevelP##XX,{ 0.05,0},1},{LevelP##XX,{+0.20,0},1},{LevelP##XX,{+0.20,+0.03},1};};}; \
	class VALP_1_##XX\
	{\
		type=text;\
		source=static;\
		text=#XX;\
		align=left;\
		scale=1;\
		sourceScale=1;\
		pos[]={LevelP##XX,{-0.23,0.035},1};\
		right[]={LevelP##XX,{-0.13,0.035},1};\
		down[]={LevelP##XX,{-0.23,0.085},1};\
	};\
	class VALP_2_##XX:VALP_1_##XX\
	{\
		align=right;\
		pos[]={LevelP##XX,{0.22,0.035},1};\
		right[]={LevelP##XX,{0.32,0.035},1};\
		down[]={LevelP##XX,{0.22,0.085},1};\
	}

#define DEF_HORIZONTMinus(XX) class LevelM##XX:Level0 {type=line;points[]={{LevelM##XX,{-0.20,-0.03},1},{LevelM##XX,{-0.20,0},1},{LevelM##XX,{-0.15,0},1},{},{LevelM##XX,{-0.10,0},1},{LevelM##XX,{-0.05,0},1},{},{LevelM##XX,{ 0.05,0},1},{LevelM##XX,{+0.10,0},1},{},{LevelM##XX,{ 0.15,0},1},{LevelM##XX,{+0.20,0},1},{LevelM##XX,{+0.20,-0.03},1};};}; \
	class VALM_1_##XX\
	{\
		type=text;\
		source=static;\
		text=-##XX;\
		align=left;\
		scale=1;\
		sourceScale=1;\
		pos[]={LevelM##XX,{-0.23,-0.085},1};\
		right[]={LevelM##XX,{-0.13,-0.085},1};\
		down[]={LevelM##XX,{-0.23,-0.035},1};\
	};\
	class VALM_2_##XX:VALM_1_##XX\
	{\
		align=right;\
		pos[]={LevelM##XX,{0.22,-0.085},1};\
		right[]={LevelM##XX,{0.32,-0.085},1};\
		down[]={LevelM##XX,{0.22,-0.035},1};\
	}

borderLeft = 0.09;
borderRight = 0.02;
borderTop = 0.02;
borderBottom = 0.1;
helmetMountedDisplay = 1;
helmetPosition[] = {-0.025,0.025,0.1};
helmetRight[] = {0.05,0.0,0.0};
helmetDown[] = {-0.0,-0.05,0.0};
class Pos10Vector
{
	type=vector;
	// position of 0-degree dive line
	pos0[]={__EVAL(PosX0Center),__EVAL(PosY0Center)};
	pos10[]={__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
};

topLeft = "HUD2 LH";
topRight = "HUD2 PD";
bottomLeft = "HUD2 LD";
/// adjust position inside of memory points LOD
color[]={0,1,0,0.1}; // master color

class Bones
{

	class PlaneW
	{
		type=fixed;
		pos[]={__EVAL(PosX0Center),__EVAL(PosYCenterHorizont)};
	};

	class WeaponAim: Pos10Vector
	{
		source=weapon;
	};
	class Target: Pos10Vector
	{
		source=target;
	};
	class Velocity: Pos10Vector
	{
		type=vector;
		source=velocity;
		pos0[]={0.5,__EVAL(PosY0Center)};
		pos10[]={__EVAL(0.5+(SizeX10deg)),__EVAL((PosY0Center)+(SizeY10deg))};
	};
	class ILS_H
	{
		type=ils;
		// position when centered
		pos0[]={0.5,__EVAL(PosY0Center)};
		// position when 3-degree off in both directions
		pos3[]={__EVAL(0.5+(SizeX10deg)*3/10),__EVAL(PosY0Center)};
	};
	class ILS_W:ILS_H
	{
		pos3[]={0.5,__EVAL((PosY0Center)+(SizeY10deg)*3/10)};
	};
	class Level0: Pos10Vector
	{
		pos0[]={0.5,__EVAL(PosYCenterHorizont)};
		pos10[]={__EVAL(0.5+(SizeX10deg)),__EVAL((PosYCenterHorizont)+(SizeY10deg))};
		type=horizon;
		// horizon angle to which this line corresponds to
		angle=0;
	};
	class LevelP5: Level0 {angle=+5;};
	class LevelM5: Level0 {angle=-5;};
	class LevelP10: Level0 {angle=+10;};
	class LevelM10: Level0 {angle=-10;};
	class LevelP15: Level0 {angle=+15;};
	class LevelM15: Level0 {angle=-15;};
	class LevelP20: Level0 {angle=+20;};
	class LevelM20: Level0 {angle=-20;};
	class LevelP25: Level0 {angle=+25;};
	class LevelM25: Level0 {angle=-25;};
	class LevelP30: Level0 {angle=+30;};
	class LevelM30: Level0 {angle=-30;};
	class LevelP35: Level0 {angle=+35;};
	class LevelM35: Level0 {angle=-35;};
	class LevelP40: Level0 {angle=+40;};
	class LevelM40: Level0 {angle=-40;};
	class LevelP45: Level0 {angle=+45;};
	class LevelM45: Level0 {angle=-45;};
	class LevelP50: Level0 {angle=+50;};
	class LevelM50: Level0 {angle=-50;};
/*	class TargetDistanceMissile
	{
		type=rotational;
		source=targetDist;
		center[]={0,0};
		min=100;
		max=3000;
		minAngle=-120;
		maxAngle=+120;
	}; */
};
class Draw
{
	alpha=0.4;
	color[]={0.0,0.3,0.05};
	condition="on";

	//color[]={0.5,0.05,0.05};
	class PlaneW
	{
		clipTL[]={0.0,1.0};
		clipBR[]={1.0,0.0};

		type=line;
		points[]={
			{PlaneW,{-0.080,__EVAL(0.00*YtoXscale)}, 1},
			{PlaneW,{-0.030,__EVAL(0.00*YtoXscale)}, 1},
			{PlaneW,{-0.015,__EVAL(0.03*YtoXscale)}, 1},
			{PlaneW,{ 0.000,__EVAL(0.00*YtoXscale)}, 1},
			{PlaneW,{ 0.015,__EVAL(0.03*YtoXscale)}, 1},
			{PlaneW,{ 0.030,__EVAL(0.00*YtoXscale)}, 1},
			{PlaneW,{ 0.080,__EVAL(0.00*YtoXscale)}, 1}
		};
	};
	class PlaneHeading
	{
		clipTL[]={0.0,1.0};
		clipBR[]={1.0,0.0};
		type=line;
		points[]={
		CIRCLE(Velocity,0.02),{},
			{Velocity, { 0.04, __EVAL(0*YtoXscale)}, 1}, {Velocity, { 0.02, __EVAL(0*YtoXscale)}, 1},{},
			{Velocity, {-0.04, __EVAL(0*YtoXscale)}, 1}, {Velocity, {-0.02, __EVAL(0*YtoXscale)}, 1},{},
			{Velocity, {0, __EVAL(-0.04*YtoXscale)}, 1}, {Velocity, {0, __EVAL(-0.02*YtoXscale)}, 1},{}
		};
	};
	class Static
	{
		clipTL[]={0.0,0.1};
		clipBR[]={1.0,0.0};
		type=line;
		points[]={
			{{0.21, 0.52}, 1}, {{0.19, 0.50}, 1},{{0.21, 0.48}, 1},{},
			{{0.18, 0.20}, 1}, {{0.18, 0.85}, 1},{},

			{{0.79, 0.52}, 1}, {{0.81, 0.50}, 1},{{0.79, 0.48}, 1},{},
			{{0.82, 0.20}, 1}, {{0.82, 0.85}, 1},{},

			{{0.52, 0.09}, 1}, {{0.50, 0.07}, 1},{{0.48, 0.09}, 1},{},
			{{0.20, 0.065}, 1}, {{0.8, 0.065}, 1},{},
		};
	};

	class Horizont
	{
		//clipTL[]={0.2,0.1};
		//clipBR[]={0.8,0.9};
		clipTL[]={0.0,0.0};
		clipBR[]={1.0,1.0};

		class Dimmed
		{
			class Level0
			{
				type=line;
				points[]=
				{
					{Level0,{-0.20,0},1},{Level0,{-0.05,0},1},{},
					{Level0,{+0.05,0},1},{Level0,{+0.20,0},1}
				};
			};
			class VALM_1_0
			{
				type=text;
				source=static;
				text=0;
				align=left;
				scale=1;
				sourceScale=1;
				pos[]={Level0,{-0.23,-0.025},1};
				right[]={Level0,{-0.13,-0.025},1};
				down[]={Level0,{-0.23,0.025},1};
			};
			class VALM_2_0:VALM_1_0
			{
				align=right;
				pos[]={Level0,{0.22,-0.025},1};
				right[]={Level0,{0.32,-0.025},1};
				down[]={Level0,{0.22,0.025},1};
			};
			DEF_HORIZONTMinus(5);
			DEF_HORIZONT(5);
			DEF_HORIZONTMinus(10);
			DEF_HORIZONT(10);
			DEF_HORIZONTMinus(15);
			DEF_HORIZONT(15);
			DEF_HORIZONTMinus(20);
			DEF_HORIZONT(20);
			DEF_HORIZONTMinus(25);
			DEF_HORIZONT(25);
			DEF_HORIZONTMinus(30);
			DEF_HORIZONT(30);
			DEF_HORIZONTMinus(35);
			DEF_HORIZONT(35);
			DEF_HORIZONTMinus(40);
			DEF_HORIZONT(40);
			DEF_HORIZONTMinus(45);
			DEF_HORIZONT(45);
			DEF_HORIZONTMinus(50);
			DEF_HORIZONT(50);
		};
	};
/*	class Target
	{
		type=line;
		points[]={
			POINT(Target,-0.05,-0.05),
			POINT(Target,+0.05,-0.05),
			POINT(Target,+0.05,+0.05),
			POINT(Target,-0.05,+0.05),
			POINT(Target,-0.05,-0.05)
		};
	};    */
/*	class SpeedLadder
	{
		type=ladder;

//		source=RadarTargets;

		points[]={
			POINT2(-0.05,-0.05),
			POINT2(+0.05,-0.05),
			POINT2(+0.05,+0.05),
			POINT2(-0.05,+0.05),
			POINT2(-0.05,-0.05)
		};
	};   */
#ifndef NO_RADAR
	class RadarTargets
	{
		type=radar;
		pos0[]={__EVAL(PosX0Center),__EVAL(PosY0Center)};
		pos10[]={__EVAL((PosX0Center)+(SizeX10deg)),__EVAL((PosY0Center)+(SizeY10deg))};
//		source=RadarTargets;

		points[]={
			POINT2(-0.05,-0.05),
			POINT2(+0.05,-0.05),
			POINT2(+0.05,+0.05),
			POINT2(-0.05,+0.05),
			POINT2(-0.05,-0.05)
		};
	};
#endif
	class MGun
	{
		condition="mgun";
		class Circle
		{
			type=line;
			points[]={
				POINT(WeaponAim,0.01, 0.0), POINT(WeaponAim,-0.01, 0.0),{},
				POINT(WeaponAim,0.0, 0.01), POINT(WeaponAim,0.0, -0.01),{},
				CIRCLE(WeaponAim,0.07),{},
				CIRCLE_BIG(WeaponAim,0.14),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-0),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-30),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-60),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-90),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-120),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-150),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-180),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-210),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-240),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-270),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-300),{},
				CIRCLE_MARK(WeaponAim,0.14,0.16,-330),{}
			};
		};
	};


	class Bomb
	{
		condition="bomb";
		class Circle
		{
			type=line;
			points[]={
				CIRCLE_BIG(WeaponAim,0.1),{},
				{Velocity,0.001,WeaponAim,{0.0, 0.0}, 1}, {Velocity,{0.0, 0.0}, 1},{},
				POINT(Target,0.0,-0.07),
				POINT(Target,+0.07,0.0),
				POINT(Target,0.0,+0.07),
				POINT(Target,-0.07,0.0),
				POINT(Target,0.0,-0.07),
			};
		};
	};
	class AAMissile
	{
		condition="AAmissile";
		class Circle
		{
			type=line;
			points[]={
				CIRCLE_BIG(WeaponAim,0.25),{},
				POINT(Target,0.0,-0.07),
				POINT(Target,+0.07,0.0),
				POINT(Target,0.0,+0.07),
				POINT(Target,-0.07,0.0),
				POINT(Target,0.0,-0.07),

			};
		};
	};
	class ATMissile
	{
		condition="ATmissile";
		class Circle
		{
			type=line;
			points[]={
				CIRCLE_BIG(WeaponAim,0.18),{},

				POINT(Target,0.0,-0.07),
				POINT(Target,+0.07,0.0),
				POINT(Target,0.0,+0.07),
				POINT(Target,-0.07,0.0),
				POINT(Target,0.0,-0.07),

			};
		};
	};
	class Rockets
	{
		condition="Rocket";
		class Circle
		{
			type=line;
			points[]={
				POINT(WeaponAim,0.01, 0.0), POINT(WeaponAim,-0.01, 0.0),{},
				POINT(WeaponAim,0.0, 0.01), POINT(WeaponAim,0.0, -0.01),{},
				CIRCLE_BIG(WeaponAim,0.12),{},
			};
		};
	};


/*	class SpeedNumber
	{
		type=text;
		align=right;
		scale=1; // text size
		source=speed;
		sourceScale=3.6; // convert from m/s to km/h
		pos[]={{0.06,0.47},1};
		right[]={{0.14,0.47},1};
		down[]={{0.06,0.52},1};
	};   */

	/*class AltNumber:SpeedNumber
	{
		source=altitudeASL;
		sourceScale=1;
		pos[]={{0.86,0.47},1};
		right[]={{0.94,0.47},1};
		down[]={{0.86,0.52},1};
	};
*/
	class AltScale
	{
		type=scale;
		scale=1; // text size
		source=altitudeASL;
		sourceScale=1;
		align=right;
		pos[]={0.86,0.82};
		right[]={0.94,0.82};
		down[]={0.86,0.87};

		lineXleft = 0.825;
		lineYright = 0.835;
		lineXleftMajor = 0.825;
		lineYrightMajor = 0.845;

		bottom= 0.2;
		top = 0.85;
		center = 0.50;
		step = 20;
		StepSize = __EVAL((0.85- 0.2)/20);

		horizontal = false;
		min = none;
		max = none;
		numberEach = 5;
		majorLineEach = 5;
	};

	class SpeedScale
	{
		type=scale;
		scale=1; // text size
		source=speed;
		sourceScale=3.6;
		align=right;

		pos[]={0.06,__EVAL(0.82-0.85+0.2)};
		right[]={0.14,__EVAL(0.82-0.85+0.2)};
		down[]={0.06,__EVAL(0.87-0.85+0.2)};

		lineXleft = __EVAL(0.18 + 0.82 - 0.825);
		lineYright = __EVAL(0.18 + 0.82 - 0.835);
		lineXleftMajor = __EVAL(0.18 + 0.82 - 0.825);
		lineYrightMajor = __EVAL(0.18 + 0.82 - 0.845);

		bottom= 0.85;
		center = 0.50;
		top = 0.2;
		step = 20;
		StepSize = __EVAL((0.85- 0.2)/20);

		horizontal = false;
		min = none;
		max = none;
		numberEach = 5;
		majorLineEach = 5;
	};



	class Gear
	{
		condition="ils";
		class text
		{
			type=text;
			source=static;
			text="GEAR";
			align=right;
			scale=0.5; // text size
			sourceScale=1;
			pos[]={{0.84,0.88},1};
			right[]={{0.90,0.88},1};
			down[]={{0.84,0.92},1};

		};
	};
	class Flaps
	{
		condition="flaps";
		class text
		{
			type=text;
			source=static;
			text="FLAPS";
			align=right;
			scale=0.5; // text size
			sourceScale=1;
			pos[]={{0.84,0.93},1};
			right[]={{0.90,0.93},1};
			down[]={{0.84,0.97},1};
		};
	};
	class weapons
	{
		type=text;
		source=weapon;
		align=right;
		scale=0.5; // text size
		sourceScale=1;
		pos[]={{0.1,0.88},1};
		right[]={{0.16,0.88},1};
		down[]={{0.1,0.92},1};
	};
	class ammo
	{
		type=text;
		source=ammo;
		align=right;
		scale=0.5; // text size
		sourceScale=1;
		pos[]={{0.1,0.93},1};
		right[]={{0.16,0.93},1};
		down[]={{0.1,0.97},1};
	};
	class VspeedNumber
	{
		type=text;
		align=right;
		scale=1; // text size

		source=vspeed;
		sourceScale=1;
		pos[]={{0.86,0.12},1};
		right[]={{0.94,0.12},1};
		down[]={{0.86,0.17},1};
	};
/*	class HeadingNumber:SpeedNumber
	{
		source=Heading;
		align=center;
		sourceScale=0.1;
		pos[]={{0.51,0.0},1};
		right[]={{0.59,0.0},1};
		down[]={{0.51,0.05},1};
	};     */

/*	class weaponDistNumber
	{
		type=text;
		scale=1; // text size
		source=weaponDist;
		align=center;
		sourceScale=1;
		pos[]={{0.51,0.1},1};
		right[]={{0.59,0.1},1};
		down[]={{0.51,0.15},1};
	};    */


	class HeadingScale
	{
		type=scale;
		scale=1; // text size
		source=Heading;
		sourceScale=1;
		align=center;

		pos[]={0.20,0.0};
		right[]={0.28,0.0};
		down[]={0.20,0.05};

		lineXleft = 0.06;
		lineYright = 0.05;
		lineXleftMajor = 0.06;
		lineYrightMajor = 0.04;

		bottom= 0.80;
		center = 0.50;
		top = 0.20;
		step = __EVAL(18/9);
		StepSize = __EVAL((0.80- 0.2)/20);

		horizontal = true;
		min = none;
		max = none;
		numberEach = 5;
		majorLineEach = 5;
	};


#define SCALE 0.6
	class ILS
	{
		condition="ils";
		class Glideslope
		{
//			clipTL[]={0.2,0.1};
//			clipBR[]={0.8,0.9};
			clipTL[]={0.0,0.0};
			clipBR[]={1.0,1.0};

			class ILS
			{
				type=line;
				points[]={
					POINT(ILS_W,-0.4*SCALE,0*SCALE),	POINT(ILS_W,+0.4*SCALE,0*SCALE),{},
					POINT(ILS_W,0*SCALE,0.04*SCALE),	POINT(ILS_W,0*SCALE,-0.04*SCALE),{},
					POINT(ILS_W,0.2*SCALE,0.04*SCALE),	POINT(ILS_W,0.2*SCALE,-0.04*SCALE),{},
					POINT(ILS_W,0.4*SCALE,0.04*SCALE),	POINT(ILS_W,0.4*SCALE,-0.04*SCALE),{},
					POINT(ILS_W,-0.2*SCALE,0.04*SCALE),	POINT(ILS_W,-0.2*SCALE,-0.04*SCALE),{},
					POINT(ILS_W,-0.4*SCALE,0.04*SCALE),	POINT(ILS_W,-0.4*SCALE,-0.04*SCALE),{},
					POINT(ILS_H,0*SCALE,-0.4*SCALE),	POINT(ILS_H,0*SCALE,+0.4*SCALE),{},
					POINT(ILS_H,0.04*SCALE,0*SCALE),	POINT(ILS_H,-0.04*SCALE,0*SCALE),{},
					POINT(ILS_H,0.04*SCALE,0.2*SCALE),	POINT(ILS_H,-0.04*SCALE,0.2*SCALE),{},
					POINT(ILS_H,0.04*SCALE,0.4*SCALE),	POINT(ILS_H,-0.04*SCALE,0.4*SCALE),{},
					POINT(ILS_H,0.04*SCALE,-0.2*SCALE),	POINT(ILS_H,-0.04*SCALE,-0.2*SCALE),{},
					POINT(ILS_H,0.04*SCALE,-0.4*SCALE),	POINT(ILS_H,-0.04*SCALE,-0.4*SCALE)
				};
			};
		};
/*		class AOABracket
		{
			type=line;
			points[]={
				{{0.42,0.78},1},{{0.4,0.78},1},
				{{0.4,0.88},1},{{0.42,0.88},1},
			};
		};          */
	};
};