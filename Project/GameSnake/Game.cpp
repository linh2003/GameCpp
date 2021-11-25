#include "Game.h"

Game::Game() : board(1,1,WIDTH_FRAME,HEIGHT_FRAME), second(times), delay(g_delay)
{
	menu.board = board;
	menu.PrintMenu();
	board.Draw();
	snake.Init();
	snake.Show();
	food.board = board;
	food.Init();
	score.Show();
}

int Game::Runtime()
{
	board.cursor.MoveCursor(WIDTH_FRAME/2,0);
	cout << "  ";
	board.cursor.MoveCursor(WIDTH_FRAME/2,0);
	cout << second;
	return --second;
}

void Game::Restart()
{
	menu.PrintMenu();
	board.Draw();
	snake.dot.clear();
	snake.Init();
	snake.Show();
	score.setScore(0);
	score.Show();
	food.Clear();
	food.Init();
	delay = g_delay;
	second = times;
}

void Game::Move(int x,int y)
{
	snake.Clean();
	if (snake.dot.size() == 1)
	{
		snake.pTail = snake.dot[0];
	}else
	{
		snake.pTail = snake.dot.back();
		for (int i = snake.dot.size() - 1; i > 0; i--)
		{
			snake.dot[i] = snake.dot[i - 1];
		}
	}
	int dx = snake.dot[0].x + x;
	int dy = snake.dot[0].y + y;
	if (dx == 1)
	{
		snake.dot[0].x = WIDTH_FRAME - 1;
	}else if (dx == WIDTH_FRAME)
	{
		snake.dot[0].x = 2;
	}else if (dy == 1)
	{
		snake.dot[0].y = HEIGHT_FRAME - 1;
	}else if (dy == HEIGHT_FRAME)
	{
		snake.dot[0].y = 2;
	}
	else
	{
		snake.dot[0].x = dx;
		snake.dot[0].y = dy;
	}
	if (snake.dot[0] == food)
	{
		food.Init();
		for (int i = 0; i < snake.dot.size(); i++)
		{
			if (food == snake.dot[i])
			{
				food.Init();
				i = 0;
			}
		}
		score.setScore(score.getScore() + 2);
		score.Show();
		second = times;
		delay -= 2;
		snake.dot.push_back(snake.pTail);
	}
	if (Runtime() <= 0)
	{
		score.setScore(score.getScore() - 1);
		score.Show();
		if (score.getScore() < 0)
		{
			score.ResultGame("So diem am");
			snake.Show();
			menu.Input();
			switch (menu.getMenu())
			{
			case 1:
				Restart();
				Play();
				break;
			default:
				score.GameOver();
				break;
			}
		}else
		{
			food.Clear();
			second = times;
			food.Init();
		}
	}
	snake.Show();
	for (int i = 1; i < snake.dot.size(); i++)
	{
		if (snake.dot[0] == snake.dot[i])
		{
			score.ResultGame("Ran mat dau");
			menu.Input();
			switch (menu.getMenu())
			{
			case 1:
				Restart();
				Play();
				break;
			default:
				score.GameOver();
				break;
			}
		}
	}
}

void Game::Play()
{
	int dx = 1, dy = 0;
	while (score.getValue())
	{
		Sleep(delay);
		Action k = Keyboard::GetAction();
		switch (k)
		{
		case LEFT:
			dx = -1, dy = 0;
			break;
		case RIGHT:
			dx = 1, dy = 0;
			break;
		case UP:
			dx = 0, dy = -1;
			break;
		case DOWN:
			dx = 0, dy = 1;
			break;
		default: //NONE
			break;
		}
		Move(dx,dy);
	}
}
