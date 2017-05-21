#pragma once
#include <iostream>
#include <string.h>
#include "House.h"

class Town
{
private:
	House * houses;
public:
	Town();
	~Town();
	//getter...
	std::string get_townInfo();
};
