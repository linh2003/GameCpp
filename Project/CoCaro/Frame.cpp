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
	for (int i = 2; i < size.getWidth(); i++)
	{
		cout << middle;
	}
	cout << right;
}

void Frame::Draw()
{
	Point p = location;
	DrawLine(p,218,196,191);
	for (int i = 2; i < size.getHeight(); i++)
	{
		DrawLine(p,179,32,179);
	}
	DrawLine(p,192,196,217);
	cursor.Hide();
}