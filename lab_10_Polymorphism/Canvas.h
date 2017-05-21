#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
#include <memory>

class Canvas
{
private:
	std::vector < std::shared_ptr<Shape> > shapes;
	unsigned int circles = 0;
	unsigned int rectangles = 0;
public:
	void set_circles(unsigned int);
	void set_rectangles(unsigned int);
	void add_circles(unsigned int);
	void add_rectangles(unsigned int);
	unsigned int get_circles();
	unsigned int get_rectangles();
	void set_shapes();
	void draw();
	double get_area();
	void get_info();
	~Canvas();
};
