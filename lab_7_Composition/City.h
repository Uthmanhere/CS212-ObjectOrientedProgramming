#pragma once
#include <iostream>
#include <string.h>
#include "Town.h"

class City
{
private:
	Town * towns;
public:
	City();
	~City();
	std::string get_cityInfo();

};
