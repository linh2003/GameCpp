#ifndef _INDICATOR_
#define _INDICATOR_
#include "Point.h"
#include "Frame.h"

class Indicator : public Point
{
private:
	char val;
public:
	Frame board;
public:
	Indicator();
	Indicator* operator=(const Point& p)
	{
		this->x = p.x;
		this->y = p.y;
		return this;
	}
	void setValue(char);
	char getValue() const;
	void MoveTo();
	void Show();
	void Clean();

};

#endif //_INDICATOR_