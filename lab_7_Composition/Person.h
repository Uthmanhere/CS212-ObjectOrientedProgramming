#pragma once
#include <iostream>
#include <string.h>

class Person
{
private:
	unsigned long idNo = 0;
	unsigned int age = 0;
	unsigned int weight = 0;
public:
	Person();
	//~Person();
	//setters...
	void set_idNo();
	void set_age();
	void set_weight();
	//getters...
	unsigned long get_idNo();
	unsigned int get_age();
	unsigned int get_weight();
	std::string get_personInfo();
};
