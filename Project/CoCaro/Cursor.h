#ifndef _CURSOR_H
#define _CURSOR_H
#include "Common.h"

class Cursor
{
private:
	HANDLE handle;
	COORD coor;
public:
	Cursor();
	void MoveCursor(int,int);
	void Hide();
};

#endif //_CURSOR_H