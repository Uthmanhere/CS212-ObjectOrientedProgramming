#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string.h>
#include <sstream>
#include "House.h"
#include "Town.h"

using namespace std;

Town::Town()
{
	//ten houses in a town.
	houses = new House[10];
}
Town::~Town()
{
	delete[] houses;
}
string Town::get_townInfo()
{
	string indent = "\t\t";
	stringstream ss;
	//composition of Town over House and Person.
	for (unsigned int counter = 0; counter < 10; ++counter)
	{
		ss << indent << "House : " << counter + 1 << endl
			<< houses[counter].get_houseInfo() << endl;
	}
	return ss.str();
}
