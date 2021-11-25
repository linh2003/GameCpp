#include "Food.h"


Food::Food()
{
}

void Food::Init()
{
	srand(time(0));
	this->x = rand() % (WIDTH_FRAME - 3) + 2;
	this->y = rand() % (HEIGHT_FRAME - 3) + 2;
	board.cursor.MoveCursor(x,y);
	cout << char(48); //Foo:48
}

void Food::Clear()
{
	board.cursor.MoveCursor(this->x,this->y);
	cout << char(32);
}
