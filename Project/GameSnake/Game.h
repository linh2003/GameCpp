#ifndef _GAME_H
#define _GAME_H

#include "Frame.h"
#include "Snake.h"
#include "Food.h"
#include "Score.h"
#include "Menu.h"
#include "Keyboard.h"
class Game
{
private:
	Frame board;
	Snake snake;
	Food food;
	Score score;
	Menu menu;
	Keyboard key;
	int second;
	int delay;
public:
	Game();
	void Move(int,int);
	void Play();
	int Runtime();
	void Restart();
};

#endif //_GAME_H