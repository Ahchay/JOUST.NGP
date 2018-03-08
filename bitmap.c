//Bitmap.c
//Bitmap functions for NGPC

//Bit of a rethink here. This is a vanilla bitmap function.
//It works, up to a point, but there are a ton of problems with it
//for real world use:
//1, You can only create a single bitmap.
//2. It's slow (probably not much I can do about that)
//3. Blt'ing bits is painful.
//So...
//Retool this to...

//Pass a memory address into the functions. This replaces the top/left
//co-ordinates.
//Everything works relative to this address, rather than fixed to BitmapTileBase
//Write a third function (or, more accurately, redo CopySingleTile()) to blt
//one bitmap into another (i.e. move from an array to the screen)

//The bitmap passed must be big enough to store (Width*Height)+8) elements
//defined as (to store a 160 by 96 size bitmap (160/8)*(96/8)=240 for the
//bitmap tiles and eight elements for the bitmap properties.
//u16 Bitmap[241][8]
//or
//u16 Bitmap[1928]
//Doesn't matter which, but the first is the easiest to use IMHO...
void CreateBitmap(u16 * BitmapAddress, u8 Width, u8 Height)
{
	u8 iLoopX;
	u8 iLoopY;
	u16 * MyAddress= BitmapAddress;
	u8 iFillLoop;

	//Create an array of tiles for a bitmap operation thang

	//Save the bitmap dimensions for later
	//Use the *first* element of the bitmap array to store the properties of the
	//bitmap.
	MyAddress[0]=Width;
	MyAddress[1]=Height;
	//Can put other stuff in here
	//MyAddress[2]=BackgroundColour
	//MyAddress[3]=Colour 1
	//MyAddress[4]=Colour 2
	//MyAddress[5]=Colour 3
	//MyAddress[6]=X Position
	//MyAddress[7]=Y Position
	MyAddress+=8;

	for (iLoopX=0;iLoopX<(Width/8);iLoopX++)
	{
		for (iLoopY=0;iLoopY<(Height/8);iLoopY++)
		{
			//Copies a blank tile into the bitmap
			for (iFillLoop=0;iFillLoop<8;iFillLoop++)
			{
				MyAddress++[0]=0;
			}

		}
	}
}

void SetPixel(u16 * BitmapAddress, u16 xPosition, u16 yPosition, u16 Colour)
{
	//Set the selected pixel in the bitmap
	u16 CurrentTile;
	//u16 TileRow;
	u16 * TileRam = BitmapAddress+8;

	//Trouble is. This needs to know the width and height of the bitmap (well, probably not the height)

	//Fist of all, identify the tile that the specified bitmap lives inside...
	//This can be derived from xPosition and yPosition

	CurrentTile=(xPosition/8)+((yPosition/8)*(BitmapAddress[0]/8));
	//For now, copy our "rubbish" tile into the tile space.
	//This is just to prove that I'm in the right general area...
	//CopySingleTile(RubbishTile, CustomTileBase+CurrentTile);

	//Having got the tile number. We now need to calculate the *new* tile
	//to put into here.

	//Basic method.
	//Get the existing tile into an unsigned short [8] Array
	//I don't need the whole tile. Just the row (yPosition % 8)
	//Grab a pointer to the relevant tile.
	//TileRam += (BitmapTileBase * 8);
	TileRam += (CurrentTile * 8)+(yPosition%8);
	//& Then... Grab the value held in this address...
	//TileRow = *TileRam;


	//Do clever stuff with AND's and OR's with the existing tile and the BitmapMask
	//array(s?)
	//Yer basic method;
	//AND MaskRow[xPosition%8] TileRow
	//OR ColourRow[xPosition%8] TileRow
	//Where MaskRow & ColourRow are 16bit jobbies showing a "holey" bitmap and a "coloured" bitmap
	//respectively. (Load the values in bitmap.h into neotile to see what I mean)

	//Updated to work directly on the tileram. Slightly quicker...
	TileRam[0]=TileRam[0] & BitmapMask[xPosition%8];
	TileRam[0]=TileRam[0] | BitmapNewMask[Colour][xPosition%8];

	//Put the tile back...
	//TileRam[0] = TileRow;

}

void QuickSetPixel(u16 * BitmapAddress, u16 xPosition, u16 yPosition, u16 Colour)
{
	//To be used when we can guarantee that only a single pixel in a tile row is affected.
	//Set the selected pixel in the bitmap
	u16 CurrentTile;
	//u16 TileRow;
	u16 * TileRam = BitmapAddress+8;

	//Trouble is. This needs to know the width and height of the bitmap (well, probably not the height)

	//Fist of all, identify the tile that the specified bitmap lives inside...
	//This can be derived from xPosition and yPosition

	CurrentTile=(xPosition/8)+((yPosition/8)*(BitmapAddress[0]/8));
	//For now, copy our "rubbish" tile into the tile space.
	//This is just to prove that I'm in the right general area...
	//CopySingleTile(RubbishTile, CustomTileBase+CurrentTile);

	//Having got the tile number. We now need to calculate the *new* tile
	//to put into here.

	//Basic method.
	//Get the existing tile into an unsigned short [8] Array
	//I don't need the whole tile. Just the row (yPosition % 8)
	//Grab a pointer to the relevant tile.
	//TileRam += (BitmapTileBase * 8);
	TileRam += (CurrentTile * 8)+(yPosition%8);
	//& Then... Grab the value held in this address...
	//TileRow = *TileRam;


	//Do clever stuff with AND's and OR's with the existing tile and the BitmapMask
	//array(s?)
	//Yer basic method;
	//AND MaskRow[xPosition%8] TileRow
	//OR ColourRow[xPosition%8] TileRow
	//Where MaskRow & ColourRow are 16bit jobbies showing a "holey" bitmap and a "coloured" bitmap
	//respectively. (Load the values in bitmap.h into neotile to see what I mean)

	//Updated to work directly on the tileram. Slightly quicker...
	//TileRam[0]=TileRam[0] & BitmapMask[xPosition%8];
	TileRam[0]=TileRam[0] = BitmapNewMask[Colour][xPosition%8];

	//Put the tile back...
	//TileRam[0] = TileRow;

}

//Don't worry about GetPixel() yet...
/*
u8 GetPixel(u16 xPosition, u16 yPosition)
{
	//Get the selected pixel in the bitmap

	//Sort of based on SetPixel() Let's get that working first..
	u16 CurrentTile;
	u16 TileRow;
	u16 * TileRam = TILE_RAM;
	u8 iReturn;
	u8 iOffset;
	u16 lHighBit;
	u16 lLowBit;
	//Fist of all, identify the tile that the specified bitmap lives inside...
	//This can be derived from xPosition and yPosition

	CurrentTile=(xPosition/8)+((yPosition/8)*(CurrentBitmapWidth/8));

	//Basic method.
	//Get the existing tile into an unsigned short [8] Array
	//I don't need the whole tile. Just the row (yPosition % 8)
	TileRam += (BitmapTileBase * 8);
	TileRam += (CurrentTile * 8)+(yPosition%8);

	//Fetch the actual value of the tile row...
	TileRow = *TileRam;

	//Work out which *bits* are used for this pixel
	iOffset=(7-(xPosition%8));
	lLowBit = OffsetValues[iOffset];
	lHighBit = (lLowBit * 2);
	//Right then. Are any of these set?
	iReturn=0;
	if ((TileRow & (lHighBit+lLowBit))==(lHighBit+lLowBit))
		iReturn=3;
	else if ((TileRow & (lHighBit))==(lHighBit))
		iReturn=2;
	else if ((TileRow & (lLowBit))==(lLowBit))
		iReturn=1;

	//Send something back...
	return iReturn;
}
*/

//Try it this way...
//Blts a single "bitmap" tile into TILE_RAM (one way?)
//Could we use CopySpriteTile()? Looks pretty similar to me.
void PutBitmapTile(u16 * BitmapAddress, u16 InputTile, u16 OutputTile)
{
	//A generic loop variable
	u16 i;
	//TileRam is a pointer to the beginning of tile memory
	u16 * TileRam = TILE_RAM;
	//theTiles is a pointer to the beginning of our Tiles array.
	//Copy a single tile into the specified tile number
	u16 * theTiles = (u16 *)BitmapAddress;

	TileRam += (OutputTile * 8);
	theTiles += (InputTile * 8);

	for (i = 0; i < 8; i ++)
	{
		//Copy the tile data
		TileRam[i] = *theTiles++;
	}
}

void CopyBitmap(u16 * BitmapAddress, u16 TileNumber)
{
	u8 iLoopX;
	u8 iLoopY;
	u8 TileWidth;
	u8 TileHeight;
	u16 * MyAddress= BitmapAddress+8;

	TileWidth=BitmapAddress[0]/8;
	TileHeight=BitmapAddress[1]/8;
	//Copy the bitmap to the screen.
	for (iLoopX=0;iLoopX<TileWidth;iLoopX++)
	{
		for (iLoopY=0;iLoopY<TileHeight;iLoopY++)
		{
			PutBitmapTile((u16 *)MyAddress, (iLoopY*TileWidth)+iLoopX, TileNumber+(iLoopY*TileWidth)+iLoopX);
		}
	}
}

void DrawBitmap(u16 * BitmapAddress, u8 xPosition, u8 yPosition, u16 TileNumber)
{
	u8 iLoopX;
	u8 iLoopY;
	u8 TileWidth;
	u8 TileHeight;

	TileWidth=BitmapAddress[0]>>3;
	TileHeight=BitmapAddress[0]>>3;

	//Copy the bitmap tiles into tile memory and blatt them onto the screen.
	for (iLoopX=0;iLoopX<TileWidth;iLoopX++)
	{
		for (iLoopY=0;iLoopY<TileHeight;iLoopY++)
		{
			PutTile(SCR_1_PLANE, 0, iLoopX+xPosition, iLoopY+yPosition, TileNumber+(iLoopY*TileWidth)+iLoopX);
		}
	}

}
void DrawLine(u16 * BitmapAddress, u8 x1, u8 y1, u8 x2, u8 y2, u8 Colour)
{
	//Stolen wholesale from gamedev...
	u8 xinc1;
	u8 xinc2;
	u8 yinc1;
	u8 yinc2;
	u8 den;
	u8 num;
	u8 numadd;
	u8 numpixels;
	u8 curpixel;
	u8 deltax;
	u8 deltay;
	u8 x;
	u8 y;

	//There appears to be an absence of an abs() function.
	if (x2>x1)
		deltax = x2 - x1;        // The difference between the x's
	else
		deltax = x1 - x2;
	if (y2>y1)
		deltay = y2 - y1;        // The difference between the y's
	else
		deltay = y1 - y2;

	x = x1;                       // Start x off at the first pixel
	y = y1;                       // Start y off at the first pixel

	if (x2 >= x1)                 // The x-values are increasing
	{
		xinc1 = 1;
		xinc2 = 1;
	}
	else                          // The x-values are decreasing
	{
		xinc1 = -1;
		xinc2 = -1;
	}

	if (y2 >= y1)                 // The y-values are increasing
	{
		yinc1 = 1;
		yinc2 = 1;
	}
	else                          // The y-values are decreasing
	{
		yinc1 = -1;
		yinc2 = -1;
	}

	if (deltax >= deltay)         // There is at least one x-value for every y-value
	{
		xinc1 = 0;                  // Don't change the x when numerator >= denominator
		yinc2 = 0;                  // Don't change the y for every iteration
		den = deltax;
		num = deltax / 2;
		numadd = deltay;
		numpixels = deltax;         // There are more x-values than y-values
	}
	else                          // There is at least one y-value for every x-value
	{
		xinc2 = 0;                  // Don't change the x for every iteration
		yinc1 = 0;                  // Don't change the y when numerator >= denominator
		den = deltay;
		num = deltay / 2;
		numadd = deltax;
		numpixels = deltay;         // There are more y-values than x-values
	}

	for (curpixel = 0; curpixel <= numpixels; curpixel++)
	{
		SetPixel((u16 *)BitmapAddress, x, y, Colour);             // Draw the current pixel
		num += numadd;              // Increase the numerator by the top of the fraction
		if (num >= den)             // Check if numerator >= denominator
		{
			num -= den;               // Calculate the new numerator value
			x += xinc1;               // Change the x as appropriate
			y += yinc1;               // Change the y as appropriate
		}
		x += xinc2;                 // Change the x as appropriate
		y += yinc2;                 // Change the y as appropriate
	}
}


//Two specific cases for vertical and horizontal lines
void DrawLineVertical(u16 * BitmapAddress, u16 x, u16 y1, u16 y2, u16 Colour)
{
	u16 y;
	s8 yinc;

	if (y1>y2)
		yinc=-1;
	else
		yinc=1;

	for (y=y1;y!=y2;y+=yinc)
	{
		SetPixel((u16 *)BitmapAddress, x, y, Colour);
	}
}


void DrawLineHorizontal(u16 * BitmapAddress, u16 x1, u16 x2, u16 y, u16 Colour)
{
	u16 x;
	s8 xinc;

	if (x1>x2)
		xinc=-1;
	else
		xinc=1;

	for (x=x1;x!=x2;x+=xinc)
	{
		SetPixel((u16 *)BitmapAddress, x, y, Colour);
	}
}
