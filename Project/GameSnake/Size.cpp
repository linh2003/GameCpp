#include "Size.h"


Size::Size()
{
	width = height = 0;
}


Size::Size(int w,int h) : width(w), height(h)
{
}

int Size::getWidth() const
{
	return this->width;
}

int Size::getHeight() const
{
	return this->height;
}