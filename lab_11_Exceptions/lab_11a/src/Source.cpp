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

#include "Calculator.hpp"

#include <iostream>
#include <string>

#include "divByZero.cpp"

using namespace std;

int main()
{
	string expr;
	Calculator cal;
	cout << "> Enter an Expression\t";
	getline(cin, expr);
	cal.set_expr(expr);
	try
	{
		cout << ">\t" << cal.get_result() << endl;
	}
	catch (divByZero &e)
	{
		cerr << "Exception\t" << e.what() <<  endl;
	}
	return 0;
}
