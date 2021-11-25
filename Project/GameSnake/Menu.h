#ifndef _MENU_H
#define _MENU_H
#include "Frame.h"

class Menu
{
private:
	int menu;
public:
	Frame board;
public:
	Menu();
	void MoveMenu(int,int);
	void PrintMenu();
	void Input();
	int getMenu() const;
};

#endif //_MENU_H