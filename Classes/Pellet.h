#pragma once
#include "Entities.h"
class Pellet :
    public Entity
{
public:
	int l, w;
	float* col;
	Pellet();
	void drawPellet(int, int);
};

