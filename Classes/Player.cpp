#include "Player.h"


Player::Player()
{
	name = " ";
	score = "0";
	Rec P1;
	health = 0;
}

Player::Player(int a, int b, string n)
{
	name = n;
	health = 0;
	setX(a);
	setY(b);
	score = string(0);
	Rec P1(15, 15);
	P1.setX(a);
	P1.setY(b);
	P1.drawShape(a, b);
}

Player::Player(const Player& o)
{
	name = o.name;
	score = o.score;
	health = o.health;
	x = o.x;
	y = o.y;
}
void Player::updateHealth(int s)
{
	health = s;
}

void Player::updateScore(string s)
{
	score = s;
}

void Player::drawPlayer(int x, int y)
{
	DrawRectangle(x, y, 10, 10, colors[CYAN]);
}