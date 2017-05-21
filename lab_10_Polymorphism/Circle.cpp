#include "Circle.h"

#include <ncurses.h>
#include <math.h>
#include <stdlib.h>

Circle::Circle()
{
	set_size(rand() % (LINES / 4) + 1, rand() % (COLS / 4) + 1);
	set_pos(rand() % LINES + 1, rand() % COLS + 1);

}
double Circle::get_area()
{
	return 3.14 * get_sizeX() * get_sizeY();
}
void Circle::draw()
{
	attron(A_REVERSE);
	for (double deg = 0; deg < 360.0; deg += 1.0)
	{
		mvaddch (
			get_posX() + (int)(get_sizeX() * cos(deg * 3.14 / 180.0)),
			get_posY() + (int)(get_sizeY() * sin(deg * 3.14 / 180.0)),
			'0'
		);
	}
	attroff(A_REVERSE);
}
