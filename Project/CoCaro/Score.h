#ifndef _SCORE_H
#define _SCORE_H
#include "Frame.h"

class Score
{
private:
	int x_play;
	int o_play;
	Frame frame;
public:
	Score();
	Score* operator=(const Frame& f)
	{
		frame.location.x = f.size.getWidth() + 2;
		frame.location.y = f.location.y;
		frame.size.setWidth(7);
		frame.size.setHeight(4);
		return this;
	}
	void Draw();
	int Win(char);
	void Help();
};

#endif //_SCORE_H