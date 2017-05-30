/*
 * =====================================================================================
 *
 *       Filename:  Average.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/05/2017 11:59:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include "Average.hpp"

#include <iostream>

#include "outOfRange.cpp"

using namespace std;

void Average::set_marks()
{
	cout << "Enter marks :";
	for (unsigned int counter = 0; counter < 4; ++counter)
		cin >> marks[counter];
}
double Average::get_result()
{
	for (unsigned int counter = 0; counter < 4; ++counter)
	{
		if (marks[counter] > 100)
			throw outOfRange();
	}
	
	double sum = 0;
	for (unsigned int counter = 0; counter < 4; ++counter)
		sum += marks[counter];
	return (sum / 4);
}
