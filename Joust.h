//Palette entries

#define PAL_BASE 0
#define PAL_PLAYER 0
#define PAL_BUZZARD 2
#define PAL_EGG 8
#define PAL_LAVA 5
#define PAL_LOGO 6
#define PAL_BORDER 7
#define PAL_SCORE 8
#define PAL_LOGOTEXT 9
#define PAL_COPYRIGHTTEXT 10
#define PAL_GAMETEXT 11

#define TILE_Player SpriteTileBase+0
#define TILE_Enemy SpriteTileBase+8

#define SPRITE_Player 0
#define SPRITE_Enemy 8

#define BUZZARD_COUNT 6

#define MOVEMENT_AMOUNT 256
#define MAX_DRIFT 16384
#define MAX_VELOCITY 256
#define FLYING 0
#define WALKING 1

#define FLAG_DEAD 1
#define FLAG_EGG 2

#define FLAP_PROBABILITY 196
#define SWITCH_PROBABILITY 196

#define COLLISION_MISSED 0
#define COLLISION_DRAW 1
#define COLLISION_BUZZARDWINS 2
#define COLLISION_PLAYERWINS 3

#define MAX_FLAP 8

#define DIR_UP 1
#define DIR_RIGHT 2
#define DIR_DOWN 4
#define DIR_LEFT 8

#define ENEMYBOUNDER 2
#define ENEMYHUNTER 1
#define ENEMYSHADOWLORD 0

typedef struct Player
{
	u8 Index;
	s16 Velocity;
	s16 Drift;
	u16 xPosition;
	u16 yPosition;
	u8 Type;
	u8 Lives;
	u8 Flags;
	u16 Score;
	u8 ButtonState;
	u8 FlapCount;
	u8 NextFlap;
	u8 Flap[MAX_FLAP];
	u8 Animation;
	u8 Direction;
	u8 Mode;
} PLAYER;

typedef struct GameParameter
{
	s16 MovementAmount;
	s16 MaximumDrift;
	s16 MaximumVelocity;
	u16 FlapProbability;
	u16 SwitchProbability;
	u16 Gravity;
} GAME;