#ifndef _SNAKE_H
#define _SNAKE_H
#include <vector>
#include "Point.h"
#include "Keyboard.h"
#include "Frame.h"

class Snake
{
public:
	Point pTail;
	Frame board;
	vector<Point> dot;
public:
	Snake();
	void Init();
	void Show();
	void Clean();
};

#endif //_SNAKE_H