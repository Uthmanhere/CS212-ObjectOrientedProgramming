#pragma once
#pragma once
#include <string.h>
#include <iostream>

class Convrt
{
public:
	//setters...
	bool set_optn(char);
	void get_optnDisplay();
	bool set_num_str(char, unsigned int);
	void set_num_double(std::string);
	void reset_num();
	//getters
	unsigned int get_optNum();
	std::string get_optString(unsigned int, unsigned int);
	double get_num_double();
	void get_instructions();
	double get_feetToMeter(double);
	double get_meterToFeet(double);
	double get_lbToKg(double);
	double get_kgToLb(double);
	double get_centToFarn(double);
	double get_farnToCent(double);
	double get_conv(double, unsigned int, unsigned int);
private:
	unsigned int option = 0;
	char num_str[50] = { '\0' };
	double num_double = 0;
	const double feetToMeter = 0.3048;
	const double lbToKg = 0.453592;
};
