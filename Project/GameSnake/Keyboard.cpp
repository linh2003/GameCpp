#include "Keyboard.h"

Keyboard::Keyboard()
{
}

Action Keyboard::GetAction()
{
	if (GetAsyncKeyState(VK_UP))
	{
		return Action::UP;
	}else if (GetAsyncKeyState(VK_DOWN))
	{
		return Action::DOWN;
	}else if (GetAsyncKeyState(VK_LEFT))
	{
		return Action::LEFT;
	}else if(GetAsyncKeyState(VK_RIGHT))
	{
		return Action::RIGHT;
	}
	return Action::NONE;
}
