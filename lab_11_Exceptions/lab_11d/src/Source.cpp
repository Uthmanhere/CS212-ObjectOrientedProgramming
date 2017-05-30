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

#include "File.hpp"

#include <iostream>
#include <string>

#include "outOfRange.cpp"

using namespace std;

int main()
{
	string name;
	int num = 0;
	File f;
	cout << "> Enter the filename :\t";
	cin >> name;
	cout << "> Enter the number:\t";
	cin >> num;
	try
	{
		f.app_file(name, num);	
	}
	catch (outOfRange &e)
	{
		cerr << "Exception\t" << e.what() <<  endl;
	}
	catch (exception &e)
	{
		cerr << "Exception\t" << e.what() <<  endl;

	}
	return 0;
}
