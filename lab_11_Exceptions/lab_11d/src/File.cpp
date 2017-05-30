/*
 * =====================================================================================
 *
 *       Filename:  Calculator.cpp
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

#include <stdexcept>
#include <fstream>

#include "outOfRange.cpp"

using namespace std;

void File::app_file(string name, int num)
{
	throw_except(name, num);
	ofstream out(name, ios::app);
	out << num;
}
void File::throw_except(string name, int num)
{
	if (!get_ifExist(name))
		throw invalid_argument("Inconsistent Filename");
	if (num > 100)
		throw outOfRange();
}

bool File::get_ifExist(string name)
{
	ifstream file(name);
	if(!file)
		return false;
	else                 
		return true;     
}

