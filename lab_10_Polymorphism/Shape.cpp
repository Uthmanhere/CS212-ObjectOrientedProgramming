#include "Shape.h"

void Shape::set_pos(unsigned int y, unsigned int x)
{
	pos[0] = y;
	pos[1] = x;
}
unsigned int Shape::get_posX()
{
	return pos[1];
}
unsigned int Shape::get_posY()
{
	return pos[0];
}
void Shape::set_size(unsigned int sizeX, unsigned int sizeY)
{
	size[0] = sizeY;
	size[1] = sizeX;
}
unsigned int Shape::get_sizeX()
{
	return size[1];
}
unsigned int Shape::get_sizeY()
{
	return size[0];
}

