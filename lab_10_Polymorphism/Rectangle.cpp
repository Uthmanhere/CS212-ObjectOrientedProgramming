#include "Rectangle.h"

#include <ncurses.h>
#include <stdlib.h>

Rectangle::Rectangle()
{
	set_size(rand() % LINES+ 1, rand() % (COLS / 4) + 1);
	set_pos(rand() % LINES + 1, rand() % COLS + 1);
}
double Rectangle::get_area()
{
	return get_sizeX() * get_sizeY();
}
void Rectangle::draw()
{
	attron(A_REVERSE);
	for (unsigned int rowCounter = 0; rowCounter < get_sizeY(); ++rowCounter)
	{
		for (unsigned int colCounter = 0; colCounter < get_sizeX(); ++colCounter)
			mvaddch(get_posY() + rowCounter, get_posX() + colCounter, '0');
	}
	attroff(A_REVERSE);
}
