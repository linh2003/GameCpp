#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"
#include "Size.h"

class Rectangle
{
protected:
	Point location;
	Size size;
public:
	Rectangle();
	Rectangle(int,int,int,int);
};

#endif //_RECTANGLE_H