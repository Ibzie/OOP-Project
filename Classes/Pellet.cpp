#include "Pellet.h"


Pellet::Pellet()
{
	l = 5;
	w = 5;
	float* col = colors[BLACK];
}

void Pellet::drawPellet(int a, int b)
{
	DrawRectangle(x, y, w, l, colors[WHITE]);
}
