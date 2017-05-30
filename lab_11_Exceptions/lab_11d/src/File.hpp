/*
 * 
 * =====================================================================================
 *
 *       Filename:  Calculator.hpp
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

#include <string>

class File
{
public:
	void app_file(std::string, int);
	void throw_except(std::string, int);
	bool get_ifExist(std::string);
};
