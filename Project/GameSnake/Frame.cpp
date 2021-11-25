#include "Frame.h"

Frame::Frame()
{
}

Frame::Frame(int x, int y, int w, int h) : Rectangle(x,y,w,h)
{
}

void Frame::DrawLine(Point& p,char left,char middle, char right)
{
	cursor.MoveCursor(p.x,p.y++);
	cout << left;
	for (int i = 2; i < WIDTH_FRAME; i++)
	{
		cout << middle;
	}
	cout << right;
}

void Frame::Draw()
{
	Point p = location;
	DrawLine(p,201,205,187);
	for (int i = 2; i < HEIGHT_FRAME; i++)
	{
		DrawLine(p,186,32,186);
	}
	DrawLine(p,200,205,188);
	cursor.Hide();
}

