#include "Indicator.h"

Indicator::Indicator()
{
}

void Indicator::setValue(char c)
{
	this->val = c;
}

char Indicator::getValue() const
{
	return this->val;
}

void Indicator::MoveTo()
{
	int dx = board.location.x + x * 3 + 1;
	int dy = board.location.y + y + 1;
	board.cursor.MoveCursor(dx,dy);
}

void Indicator::Show()
{
	this->MoveTo();
	cout << '[' << this->getValue() << ']';
}

void Indicator::Clean()
{
	this->MoveTo();
	cout << ' ' << this->getValue() << ' ' ;
}


