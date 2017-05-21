#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string.h>
#include <sstream>
#include "House.h"
#include "City.h"
#include "Town.h"

using namespace std;

City::City()
{
	//three towns in a city.
	towns = new Town[3];
}
City::~City()
{
	delete[] towns;
}
string City::get_cityInfo()
{
	string indent = "\t";
	stringstream ss;
	//the composition over Town, House, and Person.
	for (unsigned int counter = 0; counter < 3; ++counter)
	{
		ss << indent << "TOWN : " << counter + 1 << endl
			<< towns[counter].get_townInfo() << endl;
	}
	return ss.str();
}
