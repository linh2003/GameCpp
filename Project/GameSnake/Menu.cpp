#include "Menu.h"
#include "Common.h"

Menu::Menu()
{
}

void Menu::MoveMenu(int x,int y)
{
	board.cursor.MoveCursor(x,y);
}

void Menu::PrintMenu()
{
	system("cls");
	MoveMenu(WIDTH_FRAME + 4,1);
	cout << "1.Restart\n";
	MoveMenu(WIDTH_FRAME + 4,2);
	cout << "2.Exit";
}

void Menu::Input()
{
	MoveMenu(WIDTH_FRAME + 4,4);
	cout << "Chon:";
	cin >> menu;
}

int Menu::getMenu() const
{
	return this->menu;
}
