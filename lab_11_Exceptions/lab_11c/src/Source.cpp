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

#include "Fibo.hpp"

#include <iostream>
#include <string>

#include "outOfRange.cpp"

using namespace std;

int main()
{
	Fibo fibonacci;
	cout << "> Number :\t";
	unsigned int num;
	cin >> num;
	try
	{
		cout << ">\t" << fibonacci.get_fiboSum(num) << endl;
	}
	catch (outOfRange &e)
	{
		cerr << "Exception\t" << e.what() <<  endl;
	}
	return 0;
}
