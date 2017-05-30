/*
 * =====================================================================================
 *
 *       Filename:  Source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/05/2017 21:01:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include <iostream>
#include <stdexcept>

#include "Array.hpp"

using namespace std;

int main()
{
	Array *ptr[10];
	unsigned int memCounter = 0;
	for (memCounter = 0; memCounter < 10; ++memCounter)
	{
		try
		{
			ptr[memCounter] = new Array(100000L);
		}
		catch (exception& e)
		{
			cout << "> Exception ?:\t" << e.what() << endl;
		}
	}
	for (unsigned int counter = 0; counter < memCounter; ++counter)
		delete ptr[memCounter];

	return 0;
}
