#include "Score.h"

Score::Score()
{
	x_play = o_play = 0;
}

int Score::Win(char player)
{
	return (player == 'x' ? ++x_play : ++o_play);
}

void Score::Draw()
{
	frame.Draw();
	int x = frame.location.x + 1;
	int y = frame.location.y + 1;
	frame.cursor.MoveCursor(x,y);
	cout << "x:" << x_play;
	frame.cursor.MoveCursor(x,y + 1);
	cout << "y:" << o_play;
	Help();
}

void Score::Help()
{
	frame.cursor.MoveCursor(1,HEIGHT_FRAME + 3);
	cout << "Press SPACE key to play!!!";
}
