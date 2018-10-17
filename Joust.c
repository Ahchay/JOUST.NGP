const unsigned short JoustTile[16][8] =
{
	{0x0015, 0x001a, 0x0014, 0x0055, 0x0055, 0x3eaf, 0xf0ea, 0x3f8a}, // Flying1Colours0Right
	{0x0000, 0x0021, 0x0000, 0x4000, 0x6505, 0xc000, 0xf000, 0xb000},
	{0x0c22, 0x03fc, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x3000, 0xbc00, 0xf000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x0030}, // Fliying1Colours1Right
	{0x0098, 0x0044, 0x0060, 0x0060, 0x0060, 0x0060, 0x0240, 0x0980},
	{0x03cc, 0x0003, 0x0280, 0x0256, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xca00, 0x0000, 0x0800, 0x9800, 0x2400, 0x0000, 0x0000, 0x0000},
	{0x0015, 0x001f, 0x0014, 0x0055, 0x005f, 0x00aa, 0x0200, 0x0828}, // Buzzard1Colours0Right
	{0x0000, 0x0000, 0x0000, 0x4000, 0xffff, 0xa000, 0x08c0, 0x08d4},
	{0x2080, 0x22aa, 0xa088, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x2804, 0xaa00, 0x2280, 0x0820, 0x8208, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00fe, 0x03c2}, // Buzzard1Colours1Right
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa110, 0xa100},
	{0x0f2a, 0x0c00, 0x0803, 0x2950, 0x0154, 0x0000, 0x0000, 0x0000},
	{0x8140, 0x00c0, 0x0c30, 0xc30c, 0x30c3, 0x0000, 0x0000, 0x0000}
};

const unsigned short Flying[32][8] =
{
	{0x0015, 0x001a, 0x0014, 0x0055, 0x0055, 0x3eaf, 0xf0ea, 0x3f8a}, // Flying1Colours0Right
	{0x0000, 0x0021, 0x0000, 0x4000, 0x6505, 0xc000, 0xf000, 0xb000},
	{0x0c22, 0x03fc, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x3000, 0xbc00, 0xf000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x0030}, // Fliying1Colours1Right
	{0x0098, 0x0044, 0x0060, 0x0060, 0x0060, 0x0060, 0x0240, 0x0980},
	{0x03cc, 0x0003, 0x0280, 0x0256, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xca00, 0x0000, 0x0800, 0x9800, 0x2400, 0x0000, 0x0000, 0x0000},
	{0xbc15, 0x0ada, 0x2ad4, 0x02d5, 0x0ab5, 0x00b9, 0xcaaa, 0xefa0}, // Flying2Colours0Right
	{0x0000, 0x0084, 0x0000, 0x4000, 0x6415, 0xc000, 0xb000, 0xb000},
	{0x03f0, 0x003f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xb000, 0xf000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0xf000, 0x0000, 0x3c00, 0x0000, 0x0f00, 0x0000, 0x000f}, // Fliying2Colours1Right
	{0x0260, 0x0110, 0x0180, 0x0180, 0x0180, 0x0180, 0x0280, 0x0980},
	{0x000f, 0x0280, 0x0256, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0a00, 0x0800, 0x9800, 0xa400, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x4800, 0x0000, 0x0001, 0x5059, 0x0003, 0x000f, 0x000e}, // Flying1Colours0Left
	{0x5400, 0xa400, 0x1400, 0x5500, 0x5500, 0xfabc, 0xab0f, 0xa2fc},
	{0x000c, 0x003e, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x8830, 0x3fc0, 0xfc00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x2600, 0x1100, 0x0900, 0x0900, 0x0900, 0x0900, 0x0180, 0x0260}, // Fliying1Colours1Left
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f0, 0x0c00},
	{0x00a3, 0x0000, 0x0020, 0x0026, 0x0018, 0x0000, 0x0000, 0x0000},
	{0x33c0, 0xc000, 0x0280, 0x9580, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x1200, 0x0000, 0x0001, 0x5419, 0x0003, 0x000e, 0x000e}, // Flying2Colours0Left
	{0x543e, 0xa7a0, 0x17a8, 0x5780, 0x5ea0, 0x6e00, 0xaaa3, 0x0afb},
	{0x000e, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0fc0, 0xfc00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0980, 0x0440, 0x0240, 0x0240, 0x0240, 0x0240, 0x0280, 0x0260}, // Fliying2Colours1Left
	{0x0000, 0x000f, 0x0000, 0x003c, 0x0000, 0x00f0, 0x0000, 0xf000},
	{0x00a0, 0x0020, 0x0026, 0x001a, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xf000, 0x0280, 0x9580, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000}
};

const unsigned short FlyingBuzzard[32][8] =
{
	{0x0015, 0x001f, 0x0014, 0x0055, 0x005f, 0x00aa, 0x0200, 0x0828}, // Buzzard1Colours0Right
	{0x0000, 0x0000, 0x0000, 0x4000, 0xffff, 0xa000, 0x08c0, 0x08d4},
	{0x2080, 0x22aa, 0xa088, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x2804, 0xaa00, 0x2280, 0x0820, 0x8208, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00fe, 0x03c2}, // Buzzard1Colours1Right
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa110, 0xa100},
	{0x0f2a, 0x0c00, 0x0803, 0x2950, 0x0154, 0x0000, 0x0000, 0x0000},
	{0x8140, 0x00c0, 0x0c30, 0xc30c, 0x30c3, 0x0000, 0x0000, 0x0000},
	{0x0015, 0x801f, 0x2014, 0x0805, 0x8283, 0x2888, 0x0280, 0xa828}, // Buzzard2Colours0Right
	{0x0000, 0x0000, 0x0000, 0x4000, 0xffff, 0x0000, 0x0000, 0xa330},
	{0x02a8, 0x00f8, 0x000c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xac35, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x3000, 0x0c00, 0xc3a0, 0x3c28, 0x0322, 0xfc2a, 0x03c2}, // Buzzard2Colours1Right
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa050, 0x0840},
	{0x0002, 0x0002, 0x0150, 0x0054, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0140, 0xa500, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0001, 0xffff, 0x000a, 0x0320, 0x1720}, // Buzzard1Colours0Left
	{0x5400, 0xf400, 0x1400, 0x5500, 0xf500, 0xaa00, 0x0080, 0x2820},
	{0x1028, 0x00aa, 0x0288, 0x0820, 0x2082, 0x0000, 0x0000, 0x0000},
	{0x0208, 0xaa88, 0x220a, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x044a, 0x004a}, // Buzzard1Colours1Left
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xbf00, 0x83c0},
	{0x0142, 0x0300, 0x0c30, 0x30c3, 0xc30c, 0x0000, 0x0000, 0x0000},
	{0xa8f0, 0x0030, 0xc020, 0x0568, 0x1540, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0001, 0xffff, 0x0000, 0x0000, 0x0cca}, // Buzzard2Colours0Left
	{0x5400, 0xf402, 0x1408, 0x5020, 0xc282, 0x2228, 0x0280, 0x282a},
	{0x5c3a, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x2a80, 0x2f00, 0x3000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x050a, 0x0120}, // Buzzard2Colours1Left
	{0x0000, 0x000c, 0x0030, 0x0ac3, 0x283c, 0x88c0, 0xa83f, 0x83c0},
	{0x0140, 0x005a, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x8000, 0x8000, 0x0540, 0x1500, 0x0000, 0x0000, 0x0000, 0x0000}
};

#include "JoustFlap.c"
#include "eatdot.c"
#include "JoustThud.c"

u8 JoustCollision(PLAYER sprPlayer, PLAYER sprBuzzard)
{
	u16 xDistance;
	u16 yDistance;
	u8 iReturn;
	//Routine to determine collision between player and Enemy

	//Collision will occur when there is less than 8 points betwixt the centre's of
	//the two sprites

	//Don't forget
	//Need to allow for the wrap around point...

	//Set the default collision
	iReturn=COLLISION_MISSED;

	//Only bother if the player is still alive

	if (sprPlayer.Flags==0)
	{

		if (sprPlayer.xPosition<sprBuzzard.xPosition)
		{
			xDistance=sprBuzzard.xPosition-sprPlayer.xPosition;
		}
		else
		{
			xDistance=sprPlayer.xPosition-sprBuzzard.xPosition;
		}

		if (sprPlayer.yPosition<sprBuzzard.yPosition)
		{
			yDistance=sprBuzzard.yPosition-sprPlayer.yPosition;
		}
		else
		{
			yDistance=sprPlayer.yPosition-sprBuzzard.yPosition;
		}

		//Scale is:
		//2048 units per tile (256 units per pixel)
		if ((xDistance<2048) && (yDistance<2048))
		{
			iReturn=COLLISION_PLAYERWINS;
			//We are in collision. Who won?
			if (sprBuzzard.yPosition==sprPlayer.yPosition)
			{
				iReturn=COLLISION_DRAW;
			}
			else if (sprBuzzard.yPosition>sprPlayer.yPosition)
			{
				//Hmmm.
				//This condition feels completely the wrong way round.
				//it works and everything, it's just odd :?
				iReturn=COLLISION_BUZZARDWINS;
			}
		}
	}

	return iReturn;

}

// copies a new tile graphic into tile memory.
void CopySpriteTile(u16 * SpriteTiles, u16 TileNumber, u8 AnimNumber)
{
	u8 i;
	u16 * TileRam = TILE_RAM;
	//Our input parameter. NOT a global constant
	u16 * theSpriteAnim = (u16 *) SpriteTiles;

	TileRam += (TileNumber * 8);
	theSpriteAnim += (AnimNumber * 8);

	//We're only copying a single tile!
	for (i = 0; i < 8; i ++)
	{
		TileRam[i] = *theSpriteAnim++;
	}
}

void CopyJoustSprite(u16 * SpriteTiles, u16 TileNumber, u8 Direction, u8 AnimationNumber)
{
	u8 iLoop;

	//Each joust character consists of eight seperate sprite tiles...
	for (iLoop=0;iLoop<=7;iLoop++)
	{
		CopySpriteTile((u16*)SpriteTiles, TileNumber+iLoop, (Direction<<4)+(AnimationNumber<<3)+iLoop);
	}
}

//Good. But not RIGHT! This detection assumes that the sprite size is 3x3 and the specified tile
//is in the centre. Doesn't hold true for a 2x2 sprite does it?

//In actual fact, the specified tile is the top-left tile.
u8 BackgroundCollisionTest(u8 iTileX, u8 iTileY)
{
	u8 palCollision;
	u16 tlCollision;
	u8 iReturn;
	u8 iTileRight;

	if (iTileX==31)
	{
		iTileRight=0;
	}
	else
	{
		iTileRight=iTileX+1;
	}
	iReturn=0;
	//TopLeft
	GetTile(SCR_2_PLANE, &palCollision, iTileX, iTileY, &tlCollision);
	if (tlCollision>0)
 	{
		//Hit!
		if (!(iReturn & DIR_UP)) iReturn+=DIR_UP;
		if (!(iReturn & DIR_LEFT)) iReturn+=DIR_LEFT;
	}
	//TopRight
	GetTile(SCR_2_PLANE, &palCollision, iTileRight, iTileY, &tlCollision);
	if (tlCollision>0)
	{
		//Hit!
		if (!(iReturn & DIR_UP)) iReturn+=DIR_UP;
		if (!(iReturn & DIR_RIGHT)) iReturn+=DIR_RIGHT;
	}
	//Left Test
	//I am not sure how valid this test is!
	GetTile(SCR_2_PLANE, &palCollision, iTileX, iTileY+1, &tlCollision);
	if (tlCollision>0)
	{
		//Hit!
		if (!(iReturn & DIR_LEFT)) iReturn+=DIR_LEFT;
	}
	//Right
	GetTile(SCR_2_PLANE, &palCollision, iTileRight, iTileY+1, &tlCollision);
	if (tlCollision>0)
	{
		//Hit!
		if (!(iReturn & DIR_RIGHT)) iReturn+=DIR_RIGHT;
	}
	//Down & Left (i.e. have I landed on something!
	if(!(iReturn & DIR_LEFT))
	{
		GetTile(SCR_2_PLANE, &palCollision, iTileX, iTileY+2, &tlCollision);
		if (tlCollision>0)
		{
			//Hit!
			if (!(iReturn & DIR_DOWN)) iReturn+=DIR_DOWN;
		}
	}
	//BottomRight
	if (!(iReturn & DIR_RIGHT))
	{
		GetTile(SCR_2_PLANE, &palCollision, iTileRight, iTileY+2, &tlCollision);
		if (tlCollision>0)
		{
			//Hit!
			if (!(iReturn & DIR_DOWN)) iReturn+=DIR_DOWN;
		}
	}

	if (iReturn & DIR_LEFT && iReturn & DIR_RIGHT)
	{
		//left and right cancel each other out...
		iReturn-=(DIR_LEFT+DIR_RIGHT);
	}

	return iReturn;
}

PLAYER MoveJoustSprite(PLAYER sprJoust, GAME gameJoust)
{
	u8 iFlapLoop;
	u8 iTileX;
	u8 iTileY;
	u8 iCollision;
	u16 iFlapping;
	//Does all of the input-independant player moving (can therefore be
	//used for both the player character and for any computer controlled
	//ones)
	if(sprJoust.Mode==FLYING)
	{
		if (sprJoust.FlapCount>0)
		{
			//We want the animation to change for a short while after a new flap
			sprJoust.FlapCount--;
			if (sprJoust.FlapCount>=16)
				sprJoust.Animation=1;
			else
				sprJoust.Animation=0;
		}
		else
		{
			sprJoust.Animation=0;
		}
	}
	else
	{
		//This doesn't work AT ALL
		//It *should*, but it doesn't...
		/*
		if (((sprJoust.xPosition>>8) % 2)==0)
		{
			sprJoust.Animation=0;
		}
		else
		{
			sprJoust.Animation=1;
		}
		*/
		if (sprJoust.FlapCount==0)
		{
			sprJoust.FlapCount=32;
		}
		if (sprJoust.FlapCount>=16)
		{
			sprJoust.Animation=0;
		}
		else
		{
			sprJoust.Animation=1;
		}
		sprJoust.FlapCount--;
	}

	//Apply Flap power...
	iFlapping=0;
	for (iFlapLoop=0;iFlapLoop<MAX_FLAP;iFlapLoop++)
	{
		if (sprJoust.Flap[iFlapLoop]>0)
		{
			iFlapping+=MOVEMENT_AMOUNT;
			sprJoust.Flap[iFlapLoop]--;
			if (sprJoust.Mode==WALKING)
			{
				sprJoust.Mode=FLYING;
				//sprJoust.Velocity=(0 - gameJoust.MaximumVelocity);
			}
		}
	}
	/*
	//Apply gravity
	if (sprJoust.Velocity<gameJoust.MaximumVelocity)
		sprJoust.Velocity+=gameJoust.MovementAmount;
	*/

	//This should be a variable amount. Starting small and rising to a crescendo before tailing off again.
	//Sine Wave?
	//sprJoust.Velocity-=(gameJoust.MovementAmount>>2) + Sin(sprJoust.Flap[iFlapLoop]>>2);

	//Only if we're flying...
	if (sprJoust.Mode==FLYING)
	{
		sprJoust.Velocity = sprJoust.Velocity + gameJoust.Gravity - iFlapping;
		//Boundary checks...
		if (sprJoust.Velocity > gameJoust.MaximumVelocity)
			sprJoust.Velocity = gameJoust.MaximumVelocity;
		if (sprJoust.Velocity < (0 - gameJoust.MaximumVelocity))
			sprJoust.Velocity = (0 - gameJoust.MaximumVelocity);

	}

	//Move the player...
	//Need to add... Boundary checks...
	if (sprJoust.Velocity<0)
	{
		//Only apply negative velocity if it results in moving "Up"
		if (sprJoust.yPosition>sprJoust.yPosition+(sprJoust.Velocity>>2))
		{
			sprJoust.yPosition+=(sprJoust.Velocity>>2);
		}
		else
		{
			//Bounce
			sprJoust.Velocity=0;
			//Cancel all flaps?
			for (iFlapLoop=0;iFlapLoop<MAX_FLAP;iFlapLoop++)
			{
				sprJoust.Flap[iFlapLoop]=0;
			}
		}
	}
	else
	{
		//Not needed if the player is "walking"
		if(sprJoust.Mode==FLYING)
		{
			sprJoust.yPosition+=(sprJoust.Velocity>>2);
		}
	}
	sprJoust.xPosition+=(sprJoust.Drift>>7);

	//Calculate collisions with the background...
	//Just bounce around for now...

	//Naw. This is crap.
	//We need to localise our hit testing a bit more.
	//Sort out...
	//Hit Top (xPosition-1 thru xPostion+1 && yPosition-1)
	//   Velocity = 64;
	//Hit Left (xPosition-1 && yPosition-1 thru yPosition+1)
	//   Drift= 64
	//Hit Right (xPosition+1 && yPosition- 1 thru yPosition+1)
	//   Drift = -64
	//Hit Bottom (You get the idea)
	//   Velocity=-64 (Eventually, change this to "walking mode")
	//Can we do this as two loops, or do we have to hard-code the co-ords. Does it actually
	//make any difference?
	//Start by getting the current tile position.
	iTileX=sprJoust.xPosition>>11;
	iTileY=sprJoust.yPosition>>11;

	//if (tlCollision>0)
	//{
	//	//Just reverse everything
	//	sprJoust.Drift=sprJoust.Drift*-1;
	//	sprJoust.Velocity=sprJoust.Velocity*-1;
	//}

	//Yer basic rules:
	//If yPosition > $foo
	//    We're in Lava - sink the player
	//If there is a tile @ current position
	//    Reverse Velocity & Drift?
	iCollision=BackgroundCollisionTest(iTileX, iTileY);
	if (iCollision & DIR_UP)
	{
		sprJoust.Velocity=0;
		//Cancel all flaps?
		for (iFlapLoop=0;iFlapLoop<MAX_FLAP;iFlapLoop++)
		{
			sprJoust.Flap[iFlapLoop]=0;
		}
	}
	if (iCollision & DIR_DOWN)
	{
		//Collision Detection for "down" is exactly one unit too high.
		//Must remember that Buzzards never walk!
		//Change mode to "walking"
		//This is very very poor.
		if (sprJoust.Velocity>=0)
		{
			sprJoust.Velocity=0;
			sprJoust.Mode=WALKING;
		}
		else
		{
			sprJoust.Mode=FLYING;
		}
	}
	else
	{
		//Nothing below
		//Make sure that sprite is in flying mode...
		sprJoust.Mode=FLYING;
	}
	if (iCollision & DIR_LEFT)
	{
		sprJoust.Drift=gameJoust.MaximumDrift;
	}
	if (iCollision & DIR_RIGHT)
	{
		sprJoust.Drift=(0-gameJoust.MaximumDrift);
	}

	//Test to see whether the player is in the lava...
	//Fairly simple really, if the player is lower than a certain point. Then they're dead!
	if (sprJoust.yPosition > 34816)
	{
		//set appropriate flags
		sprJoust.Flags=FLAG_DEAD;

		//Question is. What am I going to do with said flag...
		//Ultimately, I need to reduce the "lives" count and force the main() loop to
		//terminate.
	}

	return sprJoust;

}

PLAYER MovePlayer(PLAYER sprPlayer, GAME gameJoust)
{

	//Yer basic flap. Seems to work okayish, but feels a bit weird...
	//Time to go to MAME methinks...
	//My main problem is that this code excutes 60 times a second, but the player can
	//only (physically) flap five or six times a second...
	//We'll use Button state to determine whether we've flapped in the last few frames...

	//Close. But it's too sedate... Let's go back to basics!

	//Our basic rules are?
	//Flap once will move you up a bit before gravity takes over
	//Flapping again during the "up" phase will double your relative velocity
	//Flapping during the "down" phase will halve the downward velocity > zero

	//If you don't flap then gravity works in the opposite direction...
	//i.e.
	//if you're moving up, then gravity halves your velocity > zero
	//if you're moving down, then gravity doubles your velocity each time...

	//Seems much better like that! I still think I need to fiddle with the timing
	//a bit, but it does at least feel like Joust now! Well. Sortakinda like
	//Joust anyway...

	if ((JOYPAD & J_A)  && (!(sprPlayer.ButtonState & J_A)) && sprPlayer.FlapCount==0)
	{
		//If the button is down, and it wasn't down last time (to stop the player
		//just holding the button for "super-fast" flaps) and if there's been a
		//long enough gap since the last flap - start a new flap
		sprPlayer.FlapCount=32;
		sprPlayer.Flap[sprPlayer.NextFlap]=32;
		sprPlayer.NextFlap++;
		if (sprPlayer.NextFlap>=MAX_FLAP)
		{
			sprPlayer.NextFlap=0;
		}
		sprPlayer.ButtonState=J_A;
		//This *should* play the joust flap noise.
		//What do I get? Silence. Great.
		SysPlayWave(eatdot);
	}
	else if (sprPlayer.ButtonState & J_A)
	{
		//Last time through, the button was still down. Is it still pressed?
		if (!(JOYPAD & J_A))
		{
			//Nope. Player has let go. Clear the flag and allow a new flap to happen
			sprPlayer.ButtonState-=J_A;
		}
	}

	//Left and right are easier... It's a basic sliding scale from -32 to +32... (for the sake of
	//argument. I can play with the granularity later

	//Question. Could I use a lookup table for this?
	if ((JOYPAD & J_LEFT) && (sprPlayer.Drift>(0-gameJoust.MaximumDrift)))
	{
		sprPlayer.Drift-=gameJoust.MovementAmount;
		sprPlayer.Direction=1;
	}
	if ((JOYPAD & J_RIGHT) && (sprPlayer.Drift<gameJoust.MaximumDrift))
	{
		sprPlayer.Drift+=gameJoust.MovementAmount;
		sprPlayer.Direction=0;
	}

	//Finally. Calculate collisions with the Enemys (is this best in the Enemy loop? Probably)
	sprPlayer=MoveJoustSprite(sprPlayer, gameJoust);

	return sprPlayer;
}

PLAYER MoveEnemy(PLAYER sprEnemy, PLAYER * sprPlayer, GAME gameJoust)
{
	u8 iTileX;
	u8 iTileY;
	u8 iCollision;
	/*
	The basic idea here is that we use a modified sine wave to move the
	buzzards.

	We'll use Flapcount as a pointer into the sine table (will have to
	>>7 to get it right)

	Collision detection will make the buzzards bounce (in the same way as
	for the player) - I may be able to use MoveJoustSprite() for that, but
	I may just have to steal the background collision checks.

	We'll kick off the flap animation on the "up" part of the swing.


	*/

	if (Sin(sprEnemy.FlapCount)<=0)
	{
		sprEnemy.Animation=0;
	}
	else
	{
		sprEnemy.Animation=1;
	}
	sprEnemy.Velocity=Sin(sprEnemy.FlapCount)>>sprEnemy.Type;

	sprEnemy.FlapCount++;
	if (sprEnemy.FlapCount==0)
	{
		//Change direction when flapcount loops
		if (QRandom()>gameJoust.FlapProbability)
		{
			//This will have the effect of moving the Enemy slightyl up or down
			//by altering where in the flap cycle it is.
			sprEnemy.FlapCount=QRandom();
		}
		if (QRandom()>gameJoust.SwitchProbability)
		{
			//Not entirely sure if this is doing anything...
			sprEnemy.Direction=sprEnemy.Direction^1;
			sprEnemy.Drift=sprEnemy.Drift*(-1);
		}
	}

	iTileX=sprEnemy.xPosition>>11;
	iTileY=sprEnemy.yPosition>>11;

	iCollision=BackgroundCollisionTest(iTileX, iTileY);
	if (iCollision & DIR_UP)
	{
		sprEnemy.Velocity=64>>sprEnemy.Type;
		//Cancel all flaps?

	}
	if (iCollision & DIR_DOWN)
	{
		//Collision Detection for "down" is exactly one unit too high.
		//Must remember that Buzzards never walk!
		//Change mode to "walking"
		//This is very very poor.
		sprEnemy.Velocity=-64>>sprEnemy.Type;
	}
	if (iCollision & DIR_LEFT)
	{
		sprEnemy.Direction=0;
		sprEnemy.Drift=64;
	}
	if (iCollision & DIR_RIGHT)
	{
		sprEnemy.Direction=1;
		sprEnemy.Drift=-64;
	}

	//Test for hitting the top of the screen
	if (sprEnemy.Velocity>=0)
	{
		sprEnemy.yPosition+=sprEnemy.Velocity;
	}
	else if (sprEnemy.yPosition+sprEnemy.Velocity<sprEnemy.yPosition)
	{
		sprEnemy.yPosition+=sprEnemy.Velocity;
	}
	else
	{
		sprEnemy.yPosition=64>>sprEnemy.Type;
	}

	sprEnemy.xPosition+=sprEnemy.Drift;

	//Test to see whether the player is in the lava...
	//Fairly simple really, if the player is lower than a certain point. Then they're dead!
	if (sprEnemy.yPosition > 34816)
	{
		//set appropriate flags
		sprEnemy.Flags=FLAG_EGG;
		sprEnemy.FlapCount=0;

	}

	//Finally, check for collision with the player

	iCollision=JoustCollision(sprEnemy, *sprPlayer);

	if (iCollision != COLLISION_MISSED)
	{
		if (sprEnemy.xPosition<(*sprPlayer).xPosition)
		{
			sprEnemy.Drift=(0-64);
			(*sprPlayer).Drift=gameJoust.MaximumDrift;
		}
		else
		{
			sprEnemy.Drift=64;
			(*sprPlayer).Drift=(0-gameJoust.MaximumDrift);
		}
	}

	switch(iCollision)
	{
		case COLLISION_DRAW:
			//We need to bounce the two mounts away from each other
			break;
		case COLLISION_BUZZARDWINS:
			//Trouble is...
			//Will the player object be updated?
			//Answer. Probably not
			//Means I have to pass sprPlayer as a pointer perchance?
			//And don't forget to bounce the Enemy
			(*sprPlayer).Animation=0;
			(*sprPlayer).FlapCount=0;
			(*sprPlayer).Flags=FLAG_DEAD;
			SysPlayWave(eatdot);
			break;
		case COLLISION_PLAYERWINS:
			//Bounce the player object away
			sprEnemy.Animation=0;
			sprEnemy.FlapCount=0;
			//sprEnemy.Flags=FLAG_EGG;
			sprEnemy.Flags=FLAG_EGG;
			//Rebuild the sprite
			//Need to know the Enemy number?
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3), TILE_Enemy+(sprEnemy.Index<<3), 0, sprEnemy.xPosition>>8, sprEnemy.yPosition>>8, PAL_EGG,24);
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3)+1, TILE_Enemy+(sprEnemy.Index<<3)+1, 1, 8, 0, PAL_EGG,24);
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3)+2, TILE_Enemy+(sprEnemy.Index<<3)+2, 1, -8, 8, PAL_EGG,24);
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3)+3, TILE_Enemy+(sprEnemy.Index<<3)+3, 1, 8, 0, PAL_EGG,24);
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3)+4, TILE_Enemy+(sprEnemy.Index<<3)+4, 1, -8, -8, PAL_EGG+1,24);
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3)+5, TILE_Enemy+(sprEnemy.Index<<3)+5, 1, 8, 0, PAL_EGG+1,24);
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3)+6, TILE_Enemy+(sprEnemy.Index<<3)+6, 1, -8, 8, PAL_EGG+1,24);
			SetSprite(SPRITE_Enemy+(sprEnemy.Index<<3)+7, TILE_Enemy+(sprEnemy.Index<<3)+7, 1, 8, 0, PAL_EGG+1,24);

			(*sprPlayer).Score+=250;

			SysPlayWave(eatdot);
			break;
		default:
			break;
	}


	return sprEnemy;

}

PLAYER MoveEgg(PLAYER sprEgg, PLAYER * sprPlayer, GAME gameJoust)
{
	u16 xDistance;
	u16 yDistance;
	u8 iTileX;
	u8 iTileY;
	u8 iCollision;

	//Animate the egg
	//Should only happen when the egg is moving
	sprEgg.FlapCount++;
	if (sprEgg.FlapCount>170)
	{
		sprEgg.Animation=2;
	} else if (sprEgg.FlapCount>85)
	{
		sprEgg.Animation=1;
	} else
	{
		sprEgg.Animation=0;
	}

	//Collision Detection
	//Only bother if the player is still alive
	if ((*sprPlayer).Flags==0)
	{

		if ((*sprPlayer).xPosition<sprEgg.xPosition)
		{
			xDistance=sprEgg.xPosition-(*sprPlayer).xPosition;
		}
		else
		{
			xDistance=(*sprPlayer).xPosition-sprEgg.xPosition;
		}

		if ((*sprPlayer).yPosition<sprEgg.yPosition)
		{
			yDistance=sprEgg.yPosition-(*sprPlayer).yPosition;
		}
		else
		{
			yDistance=(*sprPlayer).yPosition-sprEgg.yPosition;
		}

		//Scale is:
		//2048 units per tile (256 units per pixel)
		if ((xDistance<2048) && (yDistance<2048))
		{
			sprEgg.Flags=FLAG_DEAD;
			sprEgg.FlapCount=0;
		}
	}

	//Finally, add gravity and drift to the egg.

	sprEgg.xPosition+=sprEgg.Drift;
	sprEgg.yPosition-=(sprEgg.Velocity--) + gameJoust.Gravity;

	// Then check for background collisions
	iTileX=sprEgg.xPosition>>11;
	iTileY=sprEgg.yPosition>>11;

	iCollision=BackgroundCollisionTest(iTileX, iTileY);
	if (iCollision & DIR_UP)
	{
		sprEgg.Velocity=0;
	}
	if (iCollision & DIR_DOWN)
	{
		//Collision Detection for "down" is exactly one unit too high.
		//Must remember that Buzzards never walk!
		//Change mode to "walking"
		//This is very very poor.
		sprEgg.Velocity=0;
		sprEgg.Drift=0;
	}

	if (sprEgg.yPosition > 34816)
	{
		//set appropriate flags
		sprEgg.Flags=FLAG_DEAD;
	}

	//sprEnemy.Flags=FLAG_DEAD;
	return sprEgg;
}

PLAYER OldMoveEgg(PLAYER sprEnemy, PLAYER * sprPlayer, GAME gameJoust)
{

u8 iFlapLoop;
u8 iTileX;
u8 iTileY;
u8 iCollision;
u8 iFlapping;

	//Okay then...
	//Eggs just bounce...

	//Move the egg...

	//Eggs don't flap
	if (sprEnemy.Mode==FLYING)
	{
		sprEnemy.Velocity = sprEnemy.Velocity + gameJoust.Gravity;
		//Boundary checks...
		if (sprEnemy.Velocity > gameJoust.MaximumVelocity)
			sprEnemy.Velocity = gameJoust.MaximumVelocity;
		if (sprEnemy.Velocity < (0 - gameJoust.MaximumVelocity))
			sprEnemy.Velocity = (0 - gameJoust.MaximumVelocity);

		//Need to add... Boundary checks...
		if (sprEnemy.Velocity<0)
		{
			//Only apply negative velocity if it results in moving "Up"
			//i.e. Checks for wrap around at the top of the screen...
			if (sprEnemy.yPosition>sprEnemy.yPosition+(sprEnemy.Velocity>>2))
			{
				sprEnemy.yPosition+=(sprEnemy.Velocity>>2);
			}
			else
			{
				//Bounce
				sprEnemy.Velocity=0-(sprEnemy.Velocity);
			}
		}
		else
		{
			sprEnemy.yPosition+=(sprEnemy.Velocity>>2);
		}
	}
	sprEnemy.xPosition+=(sprEnemy.Drift>>7);

	//Calculate collisions with the background...
	//Start by getting the current tile position.
	iTileX=sprEnemy.xPosition>>11;
	iTileY=sprEnemy.yPosition>>11;
	//Yer basic rules:
	//If yPosition > $foo
	//    We're in Lava - sink the player
	//If there is a tile @ current position
	//    Reverse Velocity & Drift?
	iCollision=BackgroundCollisionTest(iTileX, iTileY);
	if (iCollision & DIR_UP)
	{
		sprEnemy.Velocity=0;
	}
	if (iCollision & DIR_DOWN)
	{
		//For some reason... This doesn't actually stop the egg - it slowly falls
		//through the platforms?
		//Aha. Changing the mode helps!
		sprEnemy.Drift=sprEnemy.Drift / 2;
		if (sprEnemy.Velocity>=0)
		{
			//This *should* bounce the egg? Doesn't appear to do much though?
			sprEnemy.Velocity=(0 - sprEnemy.Velocity);
			//Reduce drift
		}
		else
		{
			sprEnemy.Mode=WALKING;
		}
	}
	else
	{
		sprEnemy.Mode=FLYING;
	}
	if (iCollision & DIR_LEFT)
	{
		sprEnemy.Drift=(0 - sprEnemy.Drift);
	}
	if (iCollision & DIR_RIGHT)
	{
		sprEnemy.Drift=(0 - sprEnemy.Drift);
	}

	//Test to see whether the player is in the lava...
	//Fairly simple really, if the player is lower than a certain point. Then they're dead!
	if (sprEnemy.yPosition > 34816)
	{
		//set appropriate flags
		sprEnemy.Flags=FLAG_DEAD;

		//Question is. What am I going to do with said flag...
		//Ultimately, I need to reduce the "lives" count and force the main() loop to
		//terminate.
	}

	//Not sure about this bit either...
	iCollision=JoustCollision(sprEnemy, *sprPlayer);

	//Rather odd. Never actually seems to hit?

	if (iCollision != COLLISION_MISSED)
	{
		//Pick up the egg!
		sprEnemy.Animation=0;
		sprEnemy.FlapCount=0;
		sprEnemy.Flags=FLAG_DEAD;
		(*sprPlayer).Score+=500;
	}

	//So... After all that, this doesn't actually do that much does it?
	return sprEnemy;
}

void DrawArena(void)
{
	u8 iLoopX;
	u8 iLoopY;

	ClearScreen(SCR_1_PLANE);
	ClearScreen(SCR_2_PLANE);

	//Draw the base.
	//It's pretty. But it might be a bit on the big side...

	for (iLoopX=0;iLoopX<11;iLoopX++)
	{
		PutTile(SCR_1_PLANE, PAL_LAVA, iLoopX, 18, GeneralTileBase+TileLava);
		PutTile(SCR_1_PLANE, PAL_LAVA, 31-iLoopX, 18, GeneralTileBase+TileLava);
	}

	for (iLoopX=0;iLoopX<11;iLoopX++)
	{
		for (iLoopY=0;iLoopY<3;iLoopY++)
		{
			PutTile(SCR_2_PLANE, PAL_BASE, 10+iLoopX, 16+iLoopY, ScoreboardTileBase+(iLoopY*11)+iLoopX);
			PutTile(SCR_1_PLANE, PAL_LAVA, 10+iLoopX, 16+iLoopY, ScoreboardTileBase+33+(iLoopY*11)+iLoopX);
		}
	}

	//Now draw some floating platforms...

	for (iLoopX=0;iLoopX<6;iLoopX++)
	{
		PutTile(SCR_2_PLANE, PAL_BASE, iLoopX+10, 3, PlatformTileBase+iLoopX);

		PutTile(SCR_2_PLANE, PAL_BASE, iLoopX, 10, PlatformTileBase+iLoopX);
		PutTile(SCR_2_PLANE, PAL_BASE, iLoopX+22, 9, PlatformTileBase+Platform2+iLoopX);
		PutTile(SCR_2_PLANE, PAL_BASE, iLoopX+26, 10, PlatformTileBase+iLoopX);
	}
	PutTile(SCR_2_PLANE, PAL_BASE, 31, 10, PlatformTileBase+Platform2+1);
	PutTile(SCR_2_PLANE, PAL_BASE, 0, 10, PlatformTileBase+Platform2+2);

}

void SetScrollPosition(u16 xPosition)
{
	//Will (potentially) vary depending on the scrolling mode selected by the player
	u8 xOffset;
	//Set the horizontal scroll position based on the players X position
	//if (xPosition<64)
	//{
	//	xOffset=0;
	//}
	//else if (xPosition>160)
	//{
	//	xOffset=96;
	//}
	//else
	//{
		xOffset=xPosition-64;
	//}

	SCR1_X=xOffset;
	SCR2_X=xOffset;
	SPR_X=256-xOffset;

}

void DrawRugPattern()
{
	u16 RugBitmap[17][8];

	u8 iMainLoop;
	u8 iLoopX;
	u8 iLoopY;
	u8 iTile;

	//Just for kicks...
	SeedRandom();

	//Just copy random junk into the tile buffer...
	//See what it looks like!

	SetBackgroundColour(RGB(0, 0, 0));

	SetPalette(SCR_1_PLANE, 0, 0, RGB(15,0,0), RGB(0,15,0), RGB(0,0,15));

	CreateBitmap((u16*)RugBitmap, 32, 32);
	CopyBitmap((u16*)RugBitmap, GeneralTileBase);

	iTile=0;

	//Draw the bitmap a few times
	for (iLoopX=0;iLoopX<20;iLoopX++)
	{
		for (iLoopY=0;iLoopY<19;iLoopY++)
		{
			PutTile(SCR_1_PLANE, 0, iLoopX, iLoopY, GeneralTileBase+iTile);
			iTile++;
			if (iTile>=16)
			{
				iTile=0;
			}
		}
	}

	for (iMainLoop=0;iMainLoop<4;iMainLoop++)
	{
		for (iLoopX=0;iLoopX<32;iLoopX++)
		{
			for (iLoopY=0;iLoopY<32;iLoopY++)
			{
				SetPixel((u16*)RugBitmap, iLoopX, iLoopY, GetRandom(4));
			}
		}

		CopyBitmap((u16*)RugBitmap, GeneralTileBase);

		Sleep(15);
	}

	//Popup a "All test indicate operational" message...
	ClearScreen(SCR_1_PLANE);

	SetPalette(SCR_1_PLANE, 0, 0, RGB(15,15,15), RGB(0,15,0), RGB(0,0,15));

	PrintString(SCR_1_PLANE, 0, 0, 8, "   INITIAL TESTS");
	PrintString(SCR_1_PLANE, 0, 0, 9, "INDICATE OPERATIONAL");


	//Then, wait a while before leaving
	Sleep(60);
}

//Make this so that it returns a structure containing game options.
//1) Scroll/flip style
//2) Difficulty
//3) Other stuff

//For now. This structure defines the game variables (Speed, Gravity etc)

GAME DrawLogo()
{
	u8 iLoopX;
	u8 iLoopY;
	u8 iLoopSprite;
	u8 iBorderCount;
	u16 iBorderColour;
	u8 iCurrentOption;
	u8 iGameStart;
	u16 iMusicCounter;
	GAME gameReturn;

	//Set default game parameters
	gameReturn.MovementAmount=MOVEMENT_AMOUNT;
	gameReturn.MaximumDrift=MAX_DRIFT;
	gameReturn.MaximumVelocity=MAX_VELOCITY;
	gameReturn.FlapProbability=FLAP_PROBABILITY;
	gameReturn.SwitchProbability=SWITCH_PROBABILITY;
	gameReturn.Gravity=MOVEMENT_AMOUNT>>4;

	iBorderCount=0;
	iBorderColour=0;

	InstallTileSetAt(Logo, sizeof(Logo)/2, LogoTileBase);
	CopySpriteTile((u16*)Border, GeneralTileBase, iBorderCount);

	ClearScreen(SCR_1_PLANE);
	ClearScreen(SCR_2_PLANE);
	//Clear sprites?
	for (iLoopSprite=0;iLoopSprite<64;iLoopSprite++)
	{
		SetSprite(iLoopSprite, 0, 0, 0, 0, 0, 0);
	}

	//Reset scroll position
	SCR1_X=0;
	SCR2_X=0;
	SPR_X=256;


	for (iLoopX=0;iLoopX<20;iLoopX++)
	{
		PutTile(SCR_2_PLANE, PAL_BORDER, iLoopX, 0, GeneralTileBase);
		PutTile(SCR_2_PLANE, PAL_BORDER, iLoopX, 18, GeneralTileBase);
	}

	for (iLoopY=0;iLoopY<19;iLoopY++)
	{
		PutTile(SCR_2_PLANE, PAL_BORDER, 0, iLoopY, GeneralTileBase);
		PutTile(SCR_2_PLANE, PAL_BORDER, 19, iLoopY, GeneralTileBase);
	}

	for (iLoopX=0;iLoopX<17;iLoopX++)
	{
		for (iLoopY=0;iLoopY<5;iLoopY++)
		{
			PutTile(SCR_2_PLANE, PAL_LOGO, iLoopX+1, iLoopY+3, LogoTileBase+(iLoopY*17)+iLoopX);
		}
	}

	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 11, "PRESENTED BY");
	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 3, 12, "WWW.AHCHAY.COM");
	PrintString(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 2, 14, "ORIGINAL VERSION");
	PrintString(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 4, 15, "(C) WILLIAMS");
	PrintString(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 2, 16, "ELECTRONICS INC.");

	//Problems with the music...
	//Only plays once?
	//To get around that - implement (u16)Ostrich_timer in the vblank interrupt
	//and set to compare against Ostrich_Len (#defined in Ostrich.h)
	//restart playing the tune when Ostrich_timer>Ostrich_Len?
	//It might need to be a bit more finessed than that, as the data length
	//of the song (Ostrich_Len) may or may not equate to the song length.

	//Remember to install Neotracker every time you need to use it...
	NeoTracker_InstallDriver();
	NeoTracker_SendGroup(Ostrich_Data, Ostrich_Len);
	NeoTracker_PlayMusic(BGM_OSTRICH);
	iMusicCounter=0;

	while (!(JOYPAD & J_A))
	{
		iBorderColour++;
		iBorderCount++;
		if (iBorderCount>7) iBorderCount=0;

		SetPalette(SCR_2_PLANE, PAL_BORDER, 0, iBorderColour, 0, 0);

		CopySpriteTile((u16*)Border, GeneralTileBase, iBorderCount);

		Sleep(1);
		if (Ostrich_Len>iMusicCounter)
		{
			PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 11, "MUSIC FINISHED?");
		}

	}
	NeoTracker_StopAll();
	// And then re-install the main sound driver
	InstallSoundDriver();

	//Get the game options...
	//Start by clearing the game text bits
	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 11, "            ");
	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 3, 12, "              ");
	PrintString(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 2, 14, "                ");
	PrintString(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 4, 15, "            ");
	PrintString(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 2, 16, "                ");

	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 10, "VELOCITY");
	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 11, "DRIFT");
	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 12, "SPEED");
	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 13, "GRAVITY");
	//PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 14, "SWITCH");

	PrintString(SCR_2_PLANE, PAL_LOGOTEXT, 4, 16, "START");

	PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 10, gameReturn.MaximumVelocity, 5);
	PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 11, gameReturn.MaximumDrift, 5);
	PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 12, gameReturn.MovementAmount, 5);
	PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 13, gameReturn.Gravity, 5);
	//PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 14, gameReturn.SwitchProbability, 5);

	iCurrentOption=0;

	//Put the menu pointer on the screen
	CopyJoustSprite((u16*)Flying, TILE_Player, 0, 0);
	SetSprite(SPRITE_Player, TILE_Player, 0, 16, 80, PAL_PLAYER,24);
	SetSprite(SPRITE_Player+1, TILE_Player+1, 1, 8, 0, PAL_PLAYER,24);
	SetSprite(SPRITE_Player+2, TILE_Player+2, 1, -8, 8, PAL_PLAYER,24);
	SetSprite(SPRITE_Player+3, TILE_Player+3, 1, 8, 0, PAL_PLAYER,24);
	SetSprite(SPRITE_Player+4, TILE_Player+4, 1, -8, -8, PAL_PLAYER+1,24);
	SetSprite(SPRITE_Player+5, TILE_Player+5, 1, 8, 0, PAL_PLAYER+1,24);
	SetSprite(SPRITE_Player+6, TILE_Player+6, 1, -8, 8, PAL_PLAYER+1,24);
	SetSprite(SPRITE_Player+7, TILE_Player+7, 1, 8, 0, PAL_PLAYER+1,24);

	//Not bad for a first attempt at a menu. Seems to do the job!

	iGameStart=0;
	while (!iGameStart)
	{
		//Display current values
		PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 10, gameReturn.MaximumVelocity, 5);
		PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 11, gameReturn.MaximumDrift, 5);
		PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 12, gameReturn.MovementAmount, 5);
		PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 13, gameReturn.Gravity, 5);
		//PrintDecimal(SCR_2_PLANE, PAL_COPYRIGHTTEXT, 13, 14, gameReturn.SwitchProbability, 5);

		//Set the pointer position
		SetSpritePosition(SPRITE_Player, 16, 80 + (iCurrentOption*8));

		//What is the player doing?
		if ((JOYPAD & J_A) && (iCurrentOption==6))
		{
			//They've chosen the start menu!
			iGameStart=1;
		}
		else if (JOYPAD & J_DOWN)
		{
			iCurrentOption++;
			if (iCurrentOption==4)
				iCurrentOption+=2;

			if (iCurrentOption==7)
				iCurrentOption=0;

			//Sleep for a while
			Sleep(20);
		}
		else if (JOYPAD & J_UP)
		{
			iCurrentOption--;
			if (iCurrentOption==5)
				iCurrentOption-=2;

			if (iCurrentOption>6)
				iCurrentOption=6;

			//Sleep for a while
			Sleep(20);
		}
		else if (JOYPAD & J_LEFT)
		{
			//Change Current option DOWN
			switch (iCurrentOption)
			{
			case 0:
				gameReturn.MaximumVelocity-=64;
				break;
			case 1:
				gameReturn.MaximumDrift-=64;
				break;
			case 2:
				gameReturn.MovementAmount-=16;
				break;
			case 3:
				gameReturn.Gravity-=16;
				break;
			//case 4:
			//	gameReturn.SwitchProbability-=1;
			//	break;
			}
			Sleep(5);
		}
		else if (JOYPAD & J_RIGHT)
		{
			//Change current option UP
			switch (iCurrentOption)
			{
			case 0:
				gameReturn.MaximumVelocity+=64;
				break;
			case 1:
				gameReturn.MaximumDrift+=64;
				break;
			case 2:
				gameReturn.MovementAmount+=16;
				break;
			case 3:
				gameReturn.Gravity+=16;
				break;
			//case 4:
			//	gameReturn.SwitchProbability+=1;
			//	break;
			}
			Sleep(5);
		}
	}

	ClearScreen(SCR_1_PLANE);
	ClearScreen(SCR_2_PLANE);

	return gameReturn;

}

void MoveBuzzard(PLAYER * sprEnemy, PLAYER * sprPlayer, GAME gameJoust, u8 * iBuzzardCount)
{
	//Is the Enemy alive or dead?
	if ((*sprEnemy).Flags==0)
	{
		//It lives!!!!
		(*sprEnemy)=MoveEnemy(*sprEnemy, sprPlayer, gameJoust);

		CopyJoustSprite((u16*)FlyingBuzzard, TILE_Enemy+((*sprEnemy).Index<<3), (*sprEnemy).Direction, (*sprEnemy).Animation);

		SetSpritePosition(SPRITE_Enemy+((*sprEnemy).Index<<3), (*sprEnemy).xPosition>>8, (*sprEnemy).yPosition>>8);
	}
	else if ((*sprEnemy).Flags==FLAG_EGG)
	{
		//Bounce that egg around
		(*sprEnemy)=MoveEgg(*sprEnemy, sprPlayer, gameJoust);

		//Decrement the buzzard count if need be
		if ((*sprEnemy).Flags==FLAG_DEAD)
			(*iBuzzardCount)--;

		//CopyJoustSprite should do the palette management too?
		CopyJoustSprite((u16*)Egg, TILE_Enemy+((*sprEnemy).Index<<3), 0, (*sprEnemy).Animation);
		SetSpritePosition(SPRITE_Enemy+((*sprEnemy).Index<<3), (*sprEnemy).xPosition>>8, (*sprEnemy).yPosition>>8);

	}
	else
	{
		//Poor Enemy
		//Check the death animation and copy a new sprite if need be
		//I'll have to worry about eggs sometime soon too

		//So... We have multiple "death" flags.
		//Flags==1 : Turn Enemy into an egg and throw it around the screen somewhat
		//Flags==2 : This time I mean it - The Enemy really is dead

		//Oops. Suddenly speeds up when all the buzzards are dead...
		if ((*sprEnemy).FlapCount<=64)
		{
			if ((*sprEnemy).FlapCount==64)
			{
				(*sprEnemy).Animation=1;
			}
			(*sprEnemy).FlapCount++;
		}
		CopyJoustSprite((u16*)Death, TILE_Enemy+((*sprEnemy).Index<<3), 0, (*sprEnemy).Animation);
	}
}