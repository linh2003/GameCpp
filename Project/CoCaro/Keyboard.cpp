#include "Keyboard.h"

Keyboard::Keyboard()
{
}

Action Keyboard::GetAction()
{
	Sleep(150);

	if (GetAsyncKeyState(VK_LEFT))
	{
		return Action::LEFT;
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		return Action::RIGHT;
	}
	if (GetAsyncKeyState(VK_UP))
	{
		return Action::UP;
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		return Action::DOWN;
	}
	if (GetAsyncKeyState(VK_SPACE))
	{
		return Action::SPACE;
	}
	return Action::NONE;
}

