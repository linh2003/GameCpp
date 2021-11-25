#ifndef _GAME_H
#define _GAME_H
#include <vector>
#include "Frame.h"
#include "Indicator.h"
#include "Keyboard.h"
#include "Score.h"

class Game
{
private:
	Frame board;
	Indicator ind;
	char player;
	Score score;
	vector<vector<char>> matrix;
public:
	Game();
	void Move(int,int);
	char& CurrentValue();
	bool CountKey(int,int,char);
	void Restart();
	void Play();
};

#endif //_GAME_H