#ifndef _SCORE_H
#define _SCORE_H
#include "Frame.h"

class Score
{
private:
	Frame board;
	int score;
	bool gameOver;
public:
	Score();
	void Show();
	void setScore(int);
	int getScore() const;
	void ResultGame(string);
	void GameOver();
	bool getValue() const;
};

#endif //_SCORE_H