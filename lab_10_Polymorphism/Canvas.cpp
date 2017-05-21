#include "Canvas.h"

#include <ncurses.h>

using namespace std;

void Canvas::set_circles(unsigned int num)
{
	circles = num;
}
unsigned int Canvas::get_circles()
{
	return circles;
}
void Canvas::add_circles(unsigned int more)
{
	circles += more;
}
void Canvas::set_rectangles(unsigned int num)
{
	rectangles = num;
}
unsigned int Canvas::get_rectangles()
{
	return rectangles;
}
void Canvas::add_rectangles(unsigned int more)
{
	rectangles += more;
}
void Canvas::set_shapes()
{
	 for (unsigned int counter = 0; counter < get_circles(); ++counter)
	{
		shapes.push_back(shared_ptr<Shape>(new Circle));
	}
	for (unsigned int counter = 0; counter < get_rectangles(); ++counter)
	{
		shapes.push_back(shared_ptr<Shape>(new Rectangle));
	}
}
void Canvas::draw()
{	
	for (unsigned int counter = 0; counter < get_circles() + get_rectangles(); ++counter)
		shapes[counter]->draw();

}
double Canvas::get_area()
{
	double area = 0;
	for (unsigned int counter = 0; counter < get_circles(); ++counter)
		area += shapes[counter]->get_area();
	return area;
}
void Canvas::get_info()
{
	attron(A_BOLD);
	mvprintw(0, 0, "Total Objects:\t\t%d", get_circles() + get_rectangles());
	mvprintw(1, 0, "\tCircles :\t%d", get_circles());
	mvprintw(2, 0, "\tRectangles :\t%d", get_rectangles());
	mvprintw(3, 0, "Total Area :\t%f", get_area());
	attroff(A_BOLD);
}
Canvas::~Canvas()
{
}
