#include "Person.h"
#include <cstdlib>
#include <time.h>
#include <string.h>
#include <sstream>
#include <iomanip>

using namespace std;

Person::Person()
{
	set_idNo();
	set_age();
	set_weight();
}
void Person::set_idNo()
{
	idNo = rand();
}
void Person::set_age()
{
	//age : 0-100
	age = rand() % 100;
}
void Person::set_weight()
{
	//weight : 2-102
	weight = (rand() % 100) + 2;
}
unsigned long Person::get_idNo()
{
	return idNo;
}
unsigned int Person::get_age()
{
	return age;
}
unsigned int Person::get_weight()
{
	return weight;
}
string Person::get_personInfo()
{
	stringstream ss;
	string indent = "\t\t\t\t";	//formatting stuff...
	//returning random info.
	ss << indent << "Identification Number : " << setfill('0') << setw(13) << get_idNo() << endl
		<< indent << "Age : " << get_age() << endl
		<< indent << "Weight : " << get_weight();
	return ss.str();
}
