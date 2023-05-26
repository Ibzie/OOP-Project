#pragma once
#include "Entities.h"

	class enemy :public Entity
	{
		Cir* E1;
		int bot_score;
	public:
		enemy();
		enemy(int, int);
		void updateBot_Score(int);
		void updateBot_Cords(int, int);
		void drawEnemy();
	};

