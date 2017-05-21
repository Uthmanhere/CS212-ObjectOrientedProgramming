#pragma once

class Shape
{
private:
	unsigned int pos[2] = { 0 };
	unsigned int size[2] = { 0 };
public:
	void set_pos(unsigned int, unsigned int);
	unsigned int get_posX();
	unsigned int get_posY();
	void set_size(unsigned int, unsigned int);
	unsigned int get_sizeX();
	unsigned int get_sizeY();
	virtual double get_area() = 0;
	virtual void draw() = 0;
	
};
