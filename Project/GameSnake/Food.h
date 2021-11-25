#ifndef _FOOD_H
#define _FOOD_H
#include "Frame.h"
#include "Point.h"
#include <time.h>
class Food : public Point
{
public:
	Frame board;
public:
	Food();
	void Init();
	void Clear();
};

#endif //_FOOD_H