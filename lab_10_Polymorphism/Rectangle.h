#include "Shape.h"

class Rectangle : public Shape
{
private:
	double area = 0.0;
public:
	Rectangle();
	double get_area();
	void draw();
};
