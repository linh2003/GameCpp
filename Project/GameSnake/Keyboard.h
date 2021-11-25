#ifndef _KEYBOARD_H
#define _KEYBOARD_H
#include "Common.h"

enum Action{ NONE, LEFT, RIGHT, UP, DOWN };

class Keyboard
{
public:
	Keyboard();
	static Action GetAction();
};

#endif //_KEYBOARD_H