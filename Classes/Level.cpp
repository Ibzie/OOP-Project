#include "Level.h"

Level::Level(int type, Player* P1, int x1, int x2, int x3, int y1, int y2, int y3)
{
	//level 1
	if (type == 0)
	{

		DrawRectangle(x1, 200, 250, 100, colors[WHITE]);
		DrawRectangle(x1 + 50, 150, 150, 200, colors[WHITE]);
		DrawRectangle(x2, 200, 250, 100, colors[WHITE]);
		DrawRectangle(x2 + 50, 150, 150, 200, colors[WHITE]);
	}
	//level 2
	else if (type == 1)
	{

		DrawLine(0, 580, 1000, 580, 20, colors[WHITE]);
		DrawLine(0, 50, 1000, 50, 20, colors[WHITE]);
		DrawRectangle(x1, y1, 80, 200, colors[DARK_MAGENTA]);
		DrawRectangle(x2, y2, 80, 200, colors[DARK_MAGENTA]);
		DrawRectangle(x3, y3, 80, 200, colors[DARK_MAGENTA]);
	}
	//level 3
	else if (type == 2)
	{
		DrawLine(0, 580, 1000, 580, 20, colors[WHITE]);
		DrawLine(0, 50, 1000, 50, 20, colors[WHITE]);
		DrawRectangle(x1, y1, 80, 200, colors[DARK_MAGENTA]);
		DrawRectangle(x2, y2, 80, 200, colors[DARK_MAGENTA]);
		DrawRectangle(x3, y3, 80, 200, colors[DARK_MAGENTA]);
	}
}

Level::Level(int type, Player* P1, Player* P2, int x1, int x2)
{


	DrawRectangle(x1, 200, 250, 100, colors[WHITE]);
	DrawRectangle(x1 + 50, 150, 150, 200, colors[WHITE]);


	DrawRectangle(x2, 200, 250, 100, colors[WHITE]);
	DrawRectangle(x2 + 50, 150, 150, 200, colors[WHITE]);
}