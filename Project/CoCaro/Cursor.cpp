#include "Cursor.h"

Cursor::Cursor()
{
	this->handle = GetStdHandle(STD_OUTPUT_HANDLE);
}

void Cursor::MoveCursor(int x,int y)
{
	this->coor.X = x;
	this->coor.Y = y;
	SetConsoleCursorPosition(this->handle,this->coor);
}

void Cursor::Hide()
{
	CONSOLE_CURSOR_INFO info;
	GetConsoleCursorInfo(handle,&info);
	info.bVisible = false;
	SetConsoleCursorInfo(handle,&info);
}
