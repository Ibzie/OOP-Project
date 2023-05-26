#include "enemy.h"


enemy::enemy()
{
	bot_score = 0;
	setX(0);
	setY(0);
	E1 = NULL;
}

enemy::enemy(int a, int b)
{
	bot_score = 0;
	DrawCircle(a, b, 5, colors[RED]);
}
void enemy::drawEnemy()
{
	float* f = colors[DARK_BLUE];
	E1->drawShape(getX(), getY(), f);
}void enemy::updateBot_Cords(int a, int b)
{
	setX(a);
	setY(b);
}

void enemy::updateBot_Score(int s)
{
	bot_score = s;
}