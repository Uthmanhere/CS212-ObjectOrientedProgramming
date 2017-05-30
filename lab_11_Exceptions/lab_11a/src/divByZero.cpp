/*
 * =====================================================================================
 *
 *       Filename:  Exception.hpp
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

#include <stdexcept>

using namespace std;

class divByZero : public runtime_error
{
public:
	divByZero()
		:	runtime_error("Divided by Zero"){}
};


