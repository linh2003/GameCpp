#include "Game.h"

Game::Game() : board(1,1,WIDTH_FRAME * 3 + 2,HEIGHT_FRAME + 2)
{
	board.Draw();
	player = 'x';
	ind = Point(WIDTH_FRAME/2,HEIGHT_FRAME/2);
	ind.board = board;
	ind.setValue(32);
	ind.Show();
	score = board;
	score.Draw();
	matrix.assign(HEIGHT_FRAME,vector<char>(WIDTH_FRAME,32));
}

char& Game::CurrentValue()
{
	return matrix[ind.y - 1][ind.x - 1];
}

bool Game::CountKey(int r,int c,char key)
{
	int d = 0;
	for (int i = 1; i <= 4; i++)
	{
		int x = ind.x + i * c;
		int y = ind.y + i * r;
		if (matrix[y - 1][x - 1] == key)
		{
			d++;
		}else
		{
			return false;
		}
	}
	return (d == 4 ? true : false);
}

void Game::Move(int x,int y)
{
	ind.setValue(CurrentValue());
	ind.Clean();
	if ((ind.x + x < 1) || (ind.x + x > WIDTH_FRAME - 1))
	{
		x = 0;
	}
	ind.x += x;
	if ((ind.y + y < 1) || (ind.y + y > HEIGHT_FRAME - 1))
	{
		y = 0;
	}
	ind.y += y;
	ind.setValue(CurrentValue());
	ind.Show();
}

void Game::Restart()
{
	system("cls");
	board.Draw();
	player = 'x';
	ind = Point(WIDTH_FRAME/2,HEIGHT_FRAME/2);
	ind.board = board;
	ind.setValue(32);
	ind.Show();
	score.Draw();
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			matrix[i][j] = 32;
		}
	}
}

void Game::Play()
{
	while (1)
	{
		Action k = Keyboard::GetAction();
		switch (k)
		{
		case LEFT:
			Move(-1,0);
			break;
		case RIGHT:
			Move(1,0);
			break;
		case UP:
			Move(0,-1);
			break;
		case DOWN:
			Move(0,1);
			break;
		case SPACE:
			if (CurrentValue() != 32)
			{
				break;
			}
			CurrentValue() = player;
			player = (player == 'x') ? 'o' : 'x';
			Move(0,0);
			if (CountKey(-1,0,CurrentValue()) || CountKey(0,1,CurrentValue()) || 
				CountKey(1,0,CurrentValue()) || CountKey(0,-1,CurrentValue()) ||
				CountKey(-1,-1,CurrentValue()) || CountKey(-1,1,CurrentValue()) ||
				CountKey(1,1,CurrentValue()) || CountKey(1,-1,CurrentValue()))
			{
				board.cursor.MoveCursor(WIDTH_FRAME/2-4,HEIGHT_FRAME + 4);
				cout << CurrentValue() << " win!!!\n";
				score.Win(CurrentValue());
				score.Draw();
				Sleep(1500);
				Restart();
			}
			break;
		default: //NONE
			break;
		}
	}
}


