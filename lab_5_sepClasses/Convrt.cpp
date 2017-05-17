#include "Convrt.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string.h>

using namespace std;

void Convrt::get_optnDisplay()	//display the menu.
{
	cout << "THE CONVERSION PROGRAM" << endl;
	cout << "----------------------" << endl << endl;
	cout << "\tLength :\t1" << endl;
	cout << "\tWeight :\t2" << endl;
	cout << "\tTemperature :\t3" << endl;
	cout << endl << "Enter an option : ";
}
bool Convrt::set_optn(char optn)	//converting to characters
{
	switch (optn)
	{
	case '1':
		option = 1;
		break;
	case '2':
		option = 2;
		break;
	case '3':
		option = 3;
	case 'q':
		break;
	default:
		return true;	//return according to POSIX standards
	}
	return false;
}
unsigned int Convrt::get_optNum()	//return option in int
{
	return option;
}
string Convrt::get_optString(unsigned int option, unsigned int subOpt)	//return string required for the particular option.
{
	switch (option)
	{
	case 1:
		switch (subOpt)
		{
		case 1:
			return "Length in Feet: ";
		case 2:
			return "\tLength in Meter: ";
		}
	case 2:
		switch (subOpt)
		{
		case 1:
			return "Weight in Pounds: ";
		case 2:
			return "\tWeight in Kilograms: ";
		}
	case 3:
		switch (subOpt)
		{
		case 1:
			return "Temperature in Farenheit: ";
		case 2:
			return "\tTemperature in Celcuis: ";
		}
	case 'q':
		return "Nothing";
	}
}
bool Convrt::set_num_str(char num, unsigned int pos)	//set number to string form input chars
{
	if (num >= '0' && num <= '9' || num == '.')
	{
		num_str[pos] = num;
		set_num_double(num_str);
	}
	else
		return 1;
	return 0;
}
void Convrt::set_num_double(string num)
{
	double doubleNum = 0;
	unsigned int counter = 0;
	while (num[counter] != '.' &&  num[counter] != '\0' && num[counter] != 'q')
	{
		doubleNum *= 10;
		doubleNum += (num[counter] - '0');	//accumulating numbers to the left of decimal
		++counter;
	}
	if (num[counter] == '.')
	{
		//accumulating numbers to the right of decimal.
		for (int decimalCounter = 1; num[counter + decimalCounter] != '\0'; ++decimalCounter)
		{
			doubleNum += ((num[counter + decimalCounter] - '0') / pow(10, decimalCounter));
		}
	}

	num_double = doubleNum;
}
void Convrt::reset_num()
{
	for (unsigned int counter = 0; num_str[counter] != '\0'; ++counter)
		num_str[counter] = '\0';
}
double Convrt::get_num_double()
{
	return num_double;
}
void Convrt::get_instructions()
{
	cout << "Move Left:\ta\t";
	cout << "Move Right:\td" << endl;
	cout << "Exit:\tq" << endl;
}
//conversions...
double Convrt::get_feetToMeter(double num)
{
	return num * feetToMeter;
}
double Convrt::get_meterToFeet(double num)
{
	return num / feetToMeter;
}
double Convrt::get_lbToKg(double num)
{
	return num * lbToKg;
}
double Convrt::get_kgToLb(double num)
{
	return num / lbToKg;
}
double Convrt::get_centToFarn(double num)
{
	return (9.0 / 5.0) * num + 32;
}
double Convrt::get_farnToCent(double num)
{
	return (num - 32) * 5.0 / 9.0;
}
//the conversion case function.
double Convrt::get_conv(double num, unsigned int opt, unsigned int subOpt)
{
	switch (opt)
	{
	case 1:
		switch (subOpt)
		{
		case 1:
			return get_meterToFeet(num);
		case 2:
			return get_feetToMeter(num);
		}
	case 2:
		switch (subOpt)
		{
		case 1:
			return get_kgToLb(num);
		case 2:
			return get_lbToKg(num);
		}
	case 3:
		switch (subOpt)
		{
		case 1:
			return get_centToFarn(num);
		case 2:
			return get_farnToCent(num);
		}
	}
}