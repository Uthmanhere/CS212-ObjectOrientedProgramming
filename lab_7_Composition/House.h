#pragma once
#include <iostream>
#include <string.h>
#include "Person.h"

class House
{
private:
	Person * people;
	unsigned int noOfPeople = 0;

public:
	House();
	~House();
	//setter...
	void set_noOfPeople();
	//getter...
	std::string get_houseInfo();
	unsigned int get_noOfPeople();

};
