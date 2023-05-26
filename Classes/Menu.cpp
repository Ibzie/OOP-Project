#include "Menu.h"

Menu::Menu()
{
	DrawRectangle(300, 400, 300, 100, colors[BLACK]);
	DrawString(330, 430, "Atari Combat 1997", colors[WHITE]);
	DrawRectangle(300, 230, 250, 70, colors[WHITE]);
	DrawString(310, 260, "Press P to Play", colors[BLACK]);
	DrawRectangle(300, 130, 250, 70, colors[WHITE]);
	DrawString(310, 160, "Press O for Multiplayer Mode", colors[BLACK]);
}
