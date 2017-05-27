/*
 * =====================================================================================
 *
 *       Filename:  Source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26/05/2017 16:31:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <stdexcept>

#include "Calc.hpp"
#include "customException.cpp"

using namespace std;

int main()
{
	string expression;

	do
	{
		cout << "> Expression :\t";
		getline(cin, expression);
		Calc cal(expression);
		try
		
		{
			cout << "\t"<< "\e[1m"
				<< cal.manip() 
				<< "\e[0m" 
				<< endl << endl;
		}
		catch (exception& e)
		{
			cerr << "Exception!\t" << "what?\t" 
				<< e.what() << endl << endl;
		}

	} while (1);

	return 0;
}
