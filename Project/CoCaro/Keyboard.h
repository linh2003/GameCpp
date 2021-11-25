#ifndef _KEYBOARD_H
#define _KEYBOARD_H
#include <Windows.h>

enum Action{ NONE, LEFT, RIGHT, UP, DOWN, SPACE };

class Keyboard
{
public:
	Keyboard();
	static Action GetAction();
};

#endif //_KEYBOARD_H