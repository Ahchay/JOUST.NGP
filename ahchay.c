u8 RandomNumberCounter;

const signed char SineTable256[256]=
{
0,	3,	6,	9,	12,	16,	19,	22,	25,	28,	31,	34,	37,	40,	43,	46,	49,	51,	54,	57,	60,	63,	65,	68,	71,	73,	76,	78,	81,	83,	85,	88,	90,	92,	94,	96,	98,	100,	102,	104,	106,	107,	109,	111,	112,	113,	115,	116,	117,	118,	120,	121,	122,	122,	123,	124,	125,	125,	126,	126,	126,	127,	127,	127,	127,
127,	127,	127,	126,	126,	126,	125,	125,	124,	123,	122,	122,	121,	120,	118,	117,	116,	115,	113,	112,	111,	109,	107,	106,	104,	102,	100,	98,	96,	94,	92,	90,	88,	85,	83,	81,	78,	76,	73,	71,	68,	65,	63,	60,	57,	54,	51,	49,	46,	43,	40,	37,	34,	31,	28,	25,	22,	19,	16,	12,	9,	6,	3,
0,	-3,	-6,	-9,	-12,	-16,	-19,	-22,	-25,	-28,	-31,	-34,	-37,	-40,	-43,	-46,	-49,	-51,	-54,	-57,	-60,	-63,	-65,	-68,	-71,	-73,	-76,	-78,	-81,	-83,	-85,	-88,	-90,	-92,	-94,	-96,	-98,	-100,	-102,	-104,	-106,	-107,	-109,	-111,	-112,	-113,	-115,	-116,	-117,	-118,	-120,	-121,	-122,	-122,	-123,	-124,	-125,	-125,	-126,	-126,	-126,	-127,	-127,	-127,	-127,	-127,
-127,	-127,	-126,	-126,	-126,	-125,	-125,	-124,	-123,	-122,	-122,	-121,	-120,	-118,	-117,	-116,	-115,	-113,	-112,	-111,	-109,	-107,	-106,	-104,	-102,	-100,	-98,	-96,	-94,	-92,	-90,	-88,	-85,	-83,	-81,	-78,	-76,	-73,	-71,	-68,	-65,	-63,	-60,	-57,	-54,	-51,	-49,	-46,	-43,	-40,	-37,	-34,	-31,	-28,	-25,	-22,	-19,	-16,	-12,	-9,	-6,	-3
};

signed char Sin(unsigned char dAngle)
{
	return SineTable256[dAngle];
}

signed char Cos(unsigned char dAngle)
{
	return SineTable256[dAngle+64];
}

void InitialiseQRandom()
{
	RandomNumberCounter=0;
}

unsigned char QRandom()
{
	//Um. RandomNumberCounter is an unsigned char...
	//which means that this routine will never get beyond the first
	//255 elements of the random number array?
	//Oh well. Should be good enough for my uses anyway...
	return QuickRandomNumbers[RandomNumberCounter++];
}

// copies a new tile graphic into tile memory.
// should be in the library file, but what the fuck...
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
