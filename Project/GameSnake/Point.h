#ifndef _POINT_H
#define _POINT_H

class Point
{
public:
	int x;
	int y;
public:
	Point();
	Point(int,int);
	friend bool operator==(const Point& left, const Point& right)
	{
		if (left.x == right.x && left.y == right.y)
		{
			return true;
		}
		return false;
	}
};

#endif //_POINT_H

