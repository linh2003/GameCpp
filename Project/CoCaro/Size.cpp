#include "Size.h"


Size::Size()
{
}

Size::Size(int w,int h): width(w), height(h)
{
}

void Size::setWidth(int w)
{
	this->width = w;
}

int Size::getWidth() const
{
	return this->width;
}

void Size::setHeight(int h)
{
	this->height = h;
}

int Size::getHeight() const
{
	return this->height;
}
