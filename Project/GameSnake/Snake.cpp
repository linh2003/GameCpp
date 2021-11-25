#include "Snake.h"

Snake::Snake()
{
}

void Snake::Init()
{
	pTail.x = WIDTH_FRAME/2;
	pTail.y = HEIGHT_FRAME/2;
	dot.push_back(pTail);
}

void Snake::Show()
{
	for (int i = 0; i < dot.size(); i++)
	{
		board.cursor.MoveCursor(dot[i].x,dot[i].y);
		if (i == 0)
		{
			cout << char(153);
		}else
		{
			cout << char(111); // Body:111
		}
	}
}

void Snake::Clean()
{
	for (int i = 0; i < dot.size(); i++)
	{
		board.cursor.MoveCursor(dot[i].x,dot[i].y);
		cout << char(32);
	}
}




