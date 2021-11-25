#include "Score.h"


Score::Score()
{
	score = 0;
	gameOver = true;
}

void Score::Show()
{
	board.cursor.MoveCursor(WIDTH_FRAME + 4,HEIGHT_FRAME/2);
	cout << "Score:";
	if (score > 9)
	{
		cout << score;
	}else
	{
		cout << score << ' ';
	}
	
}

void Score::setScore(int score)
{
	this->score = score;
}

int Score::getScore() const
{
	return this->score;
}

void Score::ResultGame(string s)
{
	board.cursor.MoveCursor(WIDTH_FRAME/2 - 5,HEIGHT_FRAME + 2);
	cout << s << ".End Game!";
}

void Score::GameOver()
{
	gameOver = false;
	board.cursor.MoveCursor(WIDTH_FRAME + 4,HEIGHT_FRAME + 2);
}

bool Score::getValue() const
{
	return gameOver;
}

