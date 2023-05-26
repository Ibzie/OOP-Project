#include "Cannon.h"
Cannon::Cannon()
{
	picked_up = false;
	cannon_type = 0;
	r = 0;
}

Cannon::Cannon(int a, int b, int t)
{
	cannon_type = t;
	x = a, y = b;
	r = 0;
	picked_up = false;
}

void Cannon::Update_PickedUp(bool x)
{
	picked_up = x;
}

void Cannon::drawCannon()
{
	if (cannon_type == 0)
		DrawCircle(x, y, r, colors[DARK_GRAY]);

	else if (cannon_type == 1)
		DrawCircle(x, y, r, colors[DARK_GRAY]);

	else if (cannon_type == 2)
		DrawCircle(x, y, r, colors[DARK_GRAY]);

	else if (cannon_type == 3)
		DrawCircle(x, y, r, colors[DARK_GRAY]);

	else if (cannon_type == 4)
		DrawCircle(x, y, r, colors[DARK_GRAY]);
}