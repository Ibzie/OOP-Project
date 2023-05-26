#pragma once
#include "Entities.h"
class Cannon :
    public Entity
{
	int r;
	int cannon_type; //0-4
	bool picked_up;
public:
	Cannon();
	Cannon(int, int, int);
	void Update_PickedUp(bool);
	void drawCannon();
};

