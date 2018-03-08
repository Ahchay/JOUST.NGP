//Bitmap.h
//Bitmap mode header file

//Function declarations
void CreateBitmap(u16 * BitmapAddress, u8 Width, u8 Height);
void SetPixel(u16 * BitmapAddress, u16 xPosition, u16 yPosition, u16 Colour);
//u8 GetPixel(u16 xPosition, u16 yPosition);
//void CopySingleTile(u8 TileGraphic, u16 TileNumber);
void PutBitmapTile(u16 * BitmapAddress, u16 InputTile, u16 OutputTile);
void DrawLine(u16 * BitmapAddress, u8 x1, u8 y1, u8 x2, u8 y2, u8 Colour);

#define BitmapTileBase 256

//Bitmap masks
const unsigned short BitmapMask[8] = {0x3fff, 0xcfff, 0xf3ff, 0xfcff, 0xff3f, 0xffcf, 0xfff3, 0xfffc};

const unsigned short BitmapNewMask[4][8] =
{
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x4000, 0x1000, 0x0400, 0x0100, 0x0040, 0x0010, 0x0004, 0x0001},
	{0x8000, 0x2000, 0x0800, 0x0200, 0x0080, 0x0020, 0x0008, 0x0002},
	{0xc000, 0x3000, 0x0c00, 0x0300, 0x00c0, 0x0030, 0x000c, 0x0003}
};

const unsigned short OffsetValues[8]={0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000};