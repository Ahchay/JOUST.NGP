/*
Joust

Things to do
============

1. End of level detection is a bit ropey
   DONE
2. Use a modified sine wave for buzzard behaviour
   DONE
3. Eggs.
4. Multiple starting locations
5. Safe period when you lose a life.
   DONE (Might need refining slightly)

*/

#define GeneralTileBase 128
#define ScoreboardTileBase 144
#define PlatformTileBase 210
#define SpriteTileBase 256
#define LogoTileBase 144

#include "ngpc.h"
#include "carthdr.h"
#include "library.h"

//Music
#include "Ostrich.h"

//Graphics source
#include "Scoreboard.c"
#include "Base.c"
#include "Platform.c"
#include "Lava.c"
#include "Logo.c"
#include "Border.c"
#include "JoustText.c"
#include "Walking.c"
#include "Death.c"
#include "Egg.c"

//Jousty functions
#include "Joust.h"
#include "Joust.c"

void main()
{

	u8 iLoop;
	u8 iFlapLoop;
	u8 iBuzzardCount;
	u8 iLevel;
	u16 iSleepCount;
	PLAYER sprPlayer;
	PLAYER sprBeastie[BUZZARD_COUNT];
	GAME gameJoust;

	InitNGPC();
	SysSetSystemFont();

	InitialiseQRandom();

	//Neotracker
	NeoTracker_InstallDriver();
	NeoTracker_SendGroup(Ostrich_Data, Ostrich_Len);

	InstallTileSetAt(JoustText, sizeof(JoustText)/2, 65);

	DrawRugPattern();

	ClearScreen(SCR_1_PLANE);
	ClearScreen(SCR_2_PLANE);
	SetBackgroundColour(RGB(0, 0, 0));

	//Palettes
	SetPalette(SCR_2_PLANE, PAL_BASE, 0, RGB(4,2,0), RGB(8,4,0), RGB(15,7,0));
	SetPalette(SCR_2_PLANE, PAL_LOGO, 0, RGB(7,0,0), RGB(15,0,0), RGB(15,15,0));
	SetPalette(SCR_2_PLANE, PAL_LOGOTEXT, 0, RGB(8,15,0), RGB(8,15,0),RGB(8,15,0));
	SetPalette(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 0, RGB(0,8,15), RGB(0,8,15),RGB(0,8,15));
	SetPalette(SCR_2_PLANE, PAL_BORDER, 0, 0, 0, 0);
	SetPalette(SPRITE_PLANE, PAL_PLAYER, 0, RGB(15,15,0), RGB(0,8,15), RGB(0,0,15));
	SetPalette(SPRITE_PLANE, PAL_PLAYER+1, 0, RGB(15,8,0), RGB(8,4,0), RGB(15,15,15));
	SetPalette(SPRITE_PLANE, PAL_BUZZARD, 0, RGB(0,0,15), RGB(0,8,0), RGB(15,15,15));
	SetPalette(SPRITE_PLANE, PAL_BUZZARD+1, 0, RGB(8,4,0), RGB(0,4,0), RGB(0,15,0));
	SetPalette(SPRITE_PLANE, PAL_BUZZARD+2, 0, RGB(11,11,11), RGB(0,8,0), RGB(15,15,15));
	SetPalette(SPRITE_PLANE, PAL_BUZZARD+3, 0, RGB(8,4,0), RGB(0,4,0), RGB(0,15,0));
	SetPalette(SPRITE_PLANE, PAL_BUZZARD+4, 0, RGB(15,0,0), RGB(0,8,0), RGB(15,15,15));
	SetPalette(SPRITE_PLANE, PAL_BUZZARD+5, 0, RGB(8,4,0), RGB(0,4,0), RGB(0,15,0));
	SetPalette(SPRITE_PLANE, PAL_EGG, 0, RGB(15,15,0), RGB(15,15,15), RGB(0,15,0));
	SetPalette(SPRITE_PLANE, PAL_EGG+1, 0, RGB(0,6,4), RGB(2,4,0),RGB(0,0,0));
	SetPalette(SCR_1_PLANE, PAL_LAVA, 0, RGB(15,15,0),RGB(8,4,0),RGB(15,0,0));
	SetPalette(SCR_1_PLANE, PAL_SCORE, 0, RGB(15,15,0),RGB(15,15,15),RGB(15,15,15));
	SetPalette(SCR_1_PLANE, PAL_GAMETEXT, 0, RGB(15,0,15),RGB(15,0,15),RGB(15,0,15));

	while (1)
	{

		gameJoust=DrawLogo();

		//InstallTiles
		//InstallTileSetAt(JoustTile, sizeof(JoustTile)/2, SpriteTileBase);
		//InstallTileSetAt(Base, sizeof(Base)/2, BackgroundTileBase);
		InstallTileSetAt(Scoreboard, sizeof(Scoreboard)/2, ScoreboardTileBase);
		InstallTileSetAt(Platform, sizeof(Platform)/2, PlatformTileBase);
		InstallTileSetAt(Lava, sizeof(Lava)/2, GeneralTileBase);

		//Our level loop should be around here somewhere
		//Might need an additional flag/wotsit to watch for the end of level.
		sprPlayer.Lives=3;
		sprPlayer.Score=0;

		iLevel=0;

		while (sprPlayer.Lives>0)
		{

			//Increment the level number
			iLevel++;

			//Setup our hero
			sprPlayer.xPosition=28672;
			sprPlayer.yPosition=28672;
			sprPlayer.Velocity=0;
			sprPlayer.Drift=0;
			sprPlayer.Animation=0;
			sprPlayer.Direction=0;
			sprPlayer.FlapCount=0;
			sprPlayer.Flags=0;
			sprPlayer.NextFlap=0;
			sprPlayer.Mode=WALKING;
			for (iFlapLoop=0;iFlapLoop<MAX_FLAP;iFlapLoop++)
			{
				sprPlayer.Flap[iFlapLoop]=0;
			}
			sprPlayer.ButtonState=0;

			//Create our sprites
			SetSprite(SPRITE_Player, TILE_Player, 0, sprPlayer.xPosition>>8, sprPlayer.yPosition>>8, PAL_PLAYER,24);
			SetSprite(SPRITE_Player+1, TILE_Player+1, 1, 8, 0, PAL_PLAYER,24);
			SetSprite(SPRITE_Player+2, TILE_Player+2, 1, -8, 8, PAL_PLAYER,24);
			SetSprite(SPRITE_Player+3, TILE_Player+3, 1, 8, 0, PAL_PLAYER,24);
			SetSprite(SPRITE_Player+4, TILE_Player+4, 1, -8, -8, PAL_PLAYER+1,24);
			SetSprite(SPRITE_Player+5, TILE_Player+5, 1, 8, 0, PAL_PLAYER+1,24);
			SetSprite(SPRITE_Player+6, TILE_Player+6, 1, -8, 8, PAL_PLAYER+1,24);
			SetSprite(SPRITE_Player+7, TILE_Player+7, 1, 8, 0, PAL_PLAYER+1,24);


			//Setup our beasties
			iBuzzardCount=BUZZARD_COUNT;
			for (iLoop=0;iLoop<iBuzzardCount;iLoop++)
			{
				sprBeastie[iLoop].Index=iLoop;
				sprBeastie[iLoop].xPosition=GetRandom(65535);
				sprBeastie[iLoop].yPosition=GetRandom(32767);
				sprBeastie[iLoop].Velocity=0;
				if (GetRandom(65535)<32768)
				{
					sprBeastie[iLoop].Drift=64;
					sprBeastie[iLoop].Direction=0;
				}
				else
				{
					sprBeastie[iLoop].Drift=-64;
					sprBeastie[iLoop].Direction=1;
				}
				sprBeastie[iLoop].Animation=0;
				sprBeastie[iLoop].FlapCount=QRandom();
				sprBeastie[iLoop].ButtonState=0;
				sprBeastie[iLoop].Flags=0;
				sprBeastie[iLoop].Type=ENEMYSHADOWLORD;

				SetSprite(SPRITE_Enemy+(iLoop<<3), TILE_Enemy+(iLoop<<3), 0, sprBeastie[iLoop].xPosition>>8, sprBeastie[iLoop].yPosition>>8, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)),24);
				SetSprite(SPRITE_Enemy+(iLoop<<3)+1, TILE_Enemy+(iLoop<<3)+1, 1, 8, 0, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)),24);
				SetSprite(SPRITE_Enemy+(iLoop<<3)+2, TILE_Enemy+(iLoop<<3)+2, 1, -8, 8, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)),24);
				SetSprite(SPRITE_Enemy+(iLoop<<3)+3, TILE_Enemy+(iLoop<<3)+3, 1, 8, 0, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)),24);
				SetSprite(SPRITE_Enemy+(iLoop<<3)+4, TILE_Enemy+(iLoop<<3)+4, 1, -8, -8, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)+1),24);
				SetSprite(SPRITE_Enemy+(iLoop<<3)+5, TILE_Enemy+(iLoop<<3)+5, 1, 8, 0, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)+1),24);
				SetSprite(SPRITE_Enemy+(iLoop<<3)+6, TILE_Enemy+(iLoop<<3)+6, 1, -8, 8, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)+1),24);
				SetSprite(SPRITE_Enemy+(iLoop<<3)+7, TILE_Enemy+(iLoop<<3)+7, 1, 8, 0, PAL_BUZZARD+((sprBeastie[iLoop].Type<<1)+1),24);

			}

			//Need to watch for end of level condition.
			while((sprPlayer.Lives>0) && (iBuzzardCount>0))
			{

				//Paint our background
				DrawArena();

				//Slight pause
				SetScrollPosition(104); //Should really calculate this
				PrintString(SCR_1_PLANE, PAL_GAMETEXT, 10, 5, "LEVEL ");
				PrintDecimal(SCR_1_PLANE, PAL_GAMETEXT, 16, 5, iLevel, 3);
				PrintString(SCR_1_PLANE, PAL_GAMETEXT, 10, 7, "GENTLEMEN!");
				PrintString(SCR_1_PLANE, PAL_GAMETEXT, 5, 8, "MOUNT YOUR BEASTIES!");
				iSleepCount=256;

				//I'm beginning to see the attraction of state machines...

				while (JOYPAD);
				while ((iSleepCount>0) && !JOYPAD)
				{
					//Display the player (should do a colour cycling thing here)
					SetSpritePosition(SPRITE_Player, sprPlayer.xPosition>>8, sprPlayer.yPosition>>8);
					SetScrollPosition((sprPlayer.xPosition>>8)-8);
					if(sprPlayer.Mode==0)
					{
						CopyJoustSprite((u16*)Flying, TILE_Player, sprPlayer.Direction, sprPlayer.Animation);
					}
					else
					{
						CopyJoustSprite((u16*)Walking, TILE_Player, sprPlayer.Direction, sprPlayer.Animation);
					}
					//Do the same for our beasties
					for (iLoop=0;iLoop<BUZZARD_COUNT;iLoop++)
					{
						MoveBuzzard(&sprBeastie[iLoop], &sprPlayer, gameJoust, &iBuzzardCount);
					}
					iSleepCount--;
				}

				//Reset our player flags (so that collisions with buzzards are now detected)
				sprPlayer.Flags=0;

				//Redo the arena for luck...
				DrawArena();

				//Print the "lives" display
				for (iLoop=0;iLoop<3;iLoop++)
				{
					if (iLoop<sprPlayer.Lives)
					{
						PutTile(SCR_1_PLANE, PAL_SCORE, 17+iLoop, 17, 91);
					}
					else
					{
						PutTile(SCR_1_PLANE, PAL_SCORE, 17+iLoop, 17, 0);
					}
				}

				while((sprPlayer.Flags==0) && (iBuzzardCount>0))
				{
					//Let's try it without the speed limiter for a while.

					//Wait for the next vertical blank
					//WaitForVB;

					//Print the score and lives count
					PrintDecimal(SCR_1_PLANE, PAL_SCORE, 12, 17, sprPlayer.Score, 5);


					//Move the player
					sprPlayer=MovePlayer(sprPlayer, gameJoust);

					//Load "facing right" sprites
					//Sort of depends on whether we're walking or flying doesn't it?

					if(sprPlayer.Mode==0)
					{
						CopyJoustSprite((u16*)Flying, TILE_Player, sprPlayer.Direction, sprPlayer.Animation);
					}
					else
					{
						CopyJoustSprite((u16*)Walking, TILE_Player, sprPlayer.Direction, sprPlayer.Animation);
					}

					//Problem...
					//xPosition scrolls off the edge of the screen...
					SetSpritePosition(SPRITE_Player, sprPlayer.xPosition>>8, sprPlayer.yPosition>>8);
					SetScrollPosition((sprPlayer.xPosition>>8)-8);

					//Do the same for our beasties
					for (iLoop=0;iLoop<BUZZARD_COUNT;iLoop++)
					{
						MoveBuzzard(&sprBeastie[iLoop], &sprPlayer, gameJoust, &iBuzzardCount);
					}
				}
				//Players dead. Oh no! What do I do!
				//Or they're not. They may have finished the level
				if (sprPlayer.Flags!=0)
				{
					//Bit of spurious animation (move unseated mount off screen, keep moving enemies. That sort of thing)
					CopyJoustSprite((u16*)Death, TILE_Player, 0, 0);

					//Or just go to sleep for a bit...
					//Keep animating the beasties while we sleep (ie. we don't sleep)

					iSleepCount=64;
					while (iSleepCount>0)
					{
						//Do the same for our beasties
						for (iLoop=0;iLoop<BUZZARD_COUNT;iLoop++)
						{
							MoveBuzzard(&sprBeastie[iLoop], &sprPlayer, gameJoust, &iBuzzardCount);
						}
						iSleepCount--;
					}
					//Decrease the lives count
					sprPlayer.Lives--;

					//Reset the players position
					sprPlayer.xPosition=28672;
					sprPlayer.yPosition=28672;
					sprPlayer.Velocity=0;
					sprPlayer.Drift=0;
					sprPlayer.Animation=0;
					sprPlayer.Direction=0;
					sprPlayer.FlapCount=0;
					sprPlayer.NextFlap=0;
					sprPlayer.Mode=WALKING;
					SetScrollPosition(0);
				}
				//Carry on
			}
		}

		//Game over man!
		SetScrollPosition(104);
		PrintString(SCR_1_PLANE, PAL_GAMETEXT, 6, 8, "GAME OVER PLAYER 1");
		Sleep(64);

	}
}