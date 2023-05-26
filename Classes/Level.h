#pragma once
#include "Window.h"
#include "Player.h"
class Level :public Window
{
public:
	int levelType;
	Level(int, Player*, int, int, int, int, int, int);
	Level(int, Player*, Player*, int, int);


};