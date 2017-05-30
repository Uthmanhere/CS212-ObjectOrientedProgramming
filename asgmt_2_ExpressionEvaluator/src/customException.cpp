/*
 * =====================================================================================
 *
 *       Filename:  customException.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28/05/2017 00:09:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include <stdexcept>

using namespace std;

class divByZero : public runtime_error
{
public:
	divByZero()
		:	runtime_error("Divided by Zero"){}
};

class undefined : public runtime_error
{
public:
	undefined()
		:	runtime_error("Undifined: 0/0"){}
};
