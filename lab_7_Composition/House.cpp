#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string.h>
#include <sstream>
#include "House.h"
#include "Person.h"

using namespace std;

House::House()
{
	set_noOfPeople();
	people = new Person[noOfPeople];
}
House::~House()
{
	delete[] people;
}
void House::set_noOfPeople()
{
	//three to five persons in a house.
	noOfPeople = (rand() % 3) + 3;
}
unsigned int House::get_noOfPeople()
{
	return noOfPeople;
}
string House::get_houseInfo()
{
	string indent = "\t\t\t";
	stringstream ss;
	//composition of House over Person.
	for (unsigned int counter = 0; counter < get_noOfPeople(); ++counter)
	{
		ss << indent << "PERSON : " << counter + 1 << endl
			<< people[counter].get_personInfo() << endl;
	}
	return ss.str();
}
