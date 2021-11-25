#ifndef _FRAME_H
#define _FRAME_H
#include "Common.h"
#include "Cursor.h"
#include "Rectangle.h"

class Frame : Rectangle
{
public:
	Cursor cursor;
public:
	Frame();
	Frame(int,int,int,int);
	void DrawLine(Point&,char,char,char);
	void Draw();
};

#endif //_FRAME_H