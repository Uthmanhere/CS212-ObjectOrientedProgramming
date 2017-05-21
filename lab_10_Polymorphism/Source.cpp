#include "Canvas.h"

#include <stdlib.h>
#include <ncurses.h>

int main()
{
	initscr();
	keypad(stdscr, true);
	noecho();
	curs_set(0);

	Canvas c;
	c.set_rectangles(10);
	c.set_circles(5);
	c.set_shapes();
	c.draw();
	c.get_info();

	getch();
	curs_set(1);
	refresh();
	endwin();

	return 0;
}
