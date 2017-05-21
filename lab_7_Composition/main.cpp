#include <iostream>
#include <sstream>
#include <string.h>
#include <fstream>
#include <new>
#include "City.h"

using namespace std;

int main()
{
	ofstream outF("citDat.txt", ios::out);
	City * myCity = new City;
	string indent = "\t";
	stringstream ss;
	//finalizing the outpus
	ss << "DISTRICT DATABASE SYSTEM" << endl
		<< "------------------------" << endl
		<< myCity->get_cityInfo();
	outF << ss.str();
	outF.close();
	delete myCity;
	
	return 0;
}

