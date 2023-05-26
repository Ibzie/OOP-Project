#pragma once
#include<iostream>
#include<cmath>
#include"util.h"
#include"CImg.h"
#include"Shape.h"
#include "Entities.h"
class Player :public Entity
{
	string name;
	string score;
	int health;
public:
	Player();
	Player(int, int, string);
	Player(const Player&);
	void updateScore(string);
	void updateHealth(int);
	void drawPlayer(int, int);
};