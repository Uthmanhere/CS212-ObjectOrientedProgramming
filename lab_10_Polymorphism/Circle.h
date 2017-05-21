#include "Shape.h"

class Circle : public Shape
{
private:
	double area = 0.0;
public:
	Circle();
	double get_area();
	void draw();
};
