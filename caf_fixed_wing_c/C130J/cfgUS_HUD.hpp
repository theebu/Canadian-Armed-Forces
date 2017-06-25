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

class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.502,0.49};
					pos10[] = {1.112,1.03};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.502,0.49};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class GunnerAim: Pos10Vector
					{
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.49};
						pos10[] = {1.11,1.03};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.49};
						pos3[] = {0.683,0.49};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.652};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.49};
						pos10[] = {1.11,1.03};
						type = "horizon";
						angle = 0;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					alpha = 0.6;
					color[] = {0.0,0.5,0.05};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "PlaneW",{ 0,-0.0177049 },1 },{ "PlaneW",{ 0.014,-0.0123934 },1 },{ "PlaneW",{ 0.02,0 },1 },{ "PlaneW",{ 0.014,0.0123934 },1 },{ "PlaneW",{ 0,0.0177049 },1 },{ "PlaneW",{ -0.014,0.0123934 },1 },{ "PlaneW",{ -0.02,0 },1 },{ "PlaneW",{ -0.014,-0.0123934 },1 },{ "PlaneW",{ 0,-0.0177049 },1 },{  }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "Velocity",{ 0,-0.0177049 },1 },{ "Velocity",{ 0.014,-0.0123934 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.0123934 },1 },{ "Velocity",{ 0,0.0177049 },1 },{ "Velocity",{ -0.014,0.0123934 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.0123934 },1 },{ "Velocity",{ 0,-0.0177049 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.0354098 },1 },{ "Velocity",{ 0,-0.0177049 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.52,"0.08+0.06" },1 },{ { 0.5,"0.06+0.06" },1 },{ { 0.48,"0.08+0.06" },1 },{  },{ { "0.5-0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9-0.04" },1 },{  },{ { "0.5-0.1",0.9 },1 },{ { "0.5-0.092",0.9 },1 },{  },{ { "0.5+0.1",0.9 },1 },{ { "0.5+0.092",0.9 },1 },{  },{ { 0.5,"0.9-0.04" },1 },{ { 0.5,"0.9-0.032" },1 },{  },{ { 0.5,"0.9+0.04" },1 },{ { 0.5,"0.9+0.032" },1 },{  }};
					};
					class Gunner
					{
						type = "line";
						width = 4.0;
						points[] = {{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.0442623 },1 },{ "WeaponAim",{ 0,0.0132787 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.0442623 },1 },{ "WeaponAim",{ 0,-0.0132787 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.0885246 },1 },{ "WeaponAim",{ 0.05,-0.0770164 },1 },{ "WeaponAim",{ 0.087,-0.0442623 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.0442623 },1 },{ "WeaponAim",{ 0.05,0.0770164 },1 },{ "WeaponAim",{ 0,0.0885246 },1 },{ "WeaponAim",{ -0.05,0.0770164 },1 },{ "WeaponAim",{ -0.087,0.0442623 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.0442623 },1 },{ "WeaponAim",{ -0.05,-0.0770164 },1 },{ "WeaponAim",{ 0,-0.0885246 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ 0,-0.0619672 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0619672 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0619672 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.221311 },1 },{ "WeaponAim",{ 0.125,-0.192541 },1 },{ "WeaponAim",{ 0.2175,-0.110656 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.110656 },1 },{ "WeaponAim",{ 0.125,0.192541 },1 },{ "WeaponAim",{ 0,0.221311 },1 },{ "WeaponAim",{ -0.125,0.192541 },1 },{ "WeaponAim",{ -0.2175,0.110656 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.110656 },1 },{ "WeaponAim",{ -0.125,-0.192541 },1 },{ "WeaponAim",{ 0,-0.221311 },1 },{  },{ "Target",{ 0,-0.0619672 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0619672 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0619672 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",-0.15 },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",0.15 },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ "0.15-0.02",-0.15 },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ "0.15-0.02",0.15 },1 },{  }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ -0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ -0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ 0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ 0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",-0.25 },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",0.25 },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ "0.25-0.05",-0.25 },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ "0.25-0.05",0.25 },1 },{  }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.47 },1};
						right[] = {{ "0.14-0.02",0.47 },1};
						down[] = {{ 0.06,0.52 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{ "0.86-0.15",0.47 },1};
						right[] = {{ "0.94-0.15-0.02",0.47 },1};
						down[] = {{ "0.86-0.15",0.52 },1};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						align = "right";
						width = 4.0;
						pos[] = {0.86,0.82};
						right[] = {"0.94-0.02",0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ "0.16-0.02",0.88 },1};
						down[] = {{ 0.1,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.93 },1};
						right[] = {{ "0.16-0.02",0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						width = 4.0;
						pos[] = {"0.32-0.01","0.0+0.05"};
						right[] = {"0.38-0.01","0.0+0.05"};
						down[] = {"0.32-0.01","0.04+0.05"};
						lineXleft = "0.06+0.05";
						lineYright = "0.05+0.05";
						lineXleftMajor = "0.07+0.05";
						lineYrightMajor = "0.04+0.05";
						bottom = 0.7;
						center = 0.5;
						top = 0.3;
						step = 10;
						StepSize = "(0.70- 0.3)/15";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 3;
						majorLineEach = 3;
					};
					class HorizontalLine
					{
						clipTL[] = {0.2,0.12};
						clipBR[] = {0.8,0.96};
						class HorizontalLineDraw
						{
							type = "line";
							source = "Level0";
							points[] = {{ "Level0",{ "-6*0.075/2",0.02 },1 },{ "Level0",{ "-5*0.075/2",0.02 },1 },{  },{ "Level0",{ "-4*0.075/2",0.02 },1 },{ "Level0",{ "-3*0.075/2",0.02 },1 },{  },{ "Level0",{ "-2*0.075/2",0.02 },1 },{ "Level0",{ "-1*0.075/2",0.02 },1 },{  },{ "Level0",{ "1*0.075/2",0.02 },1 },{ "Level0",{ "2*0.075/2",0.02 },1 },{  },{ "Level0",{ "3*0.075/2",0.02 },1 },{ "Level0",{ "4*0.075/2",0.02 },1 },{  },{ "Level0",{ "5*0.075/2",0.02 },1 },{ "Level0",{ "6*0.075/2",0.02 },1 }};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.055,0.0,0.0};
				helmetDown[] = {-0.0,-0.05,0.0};