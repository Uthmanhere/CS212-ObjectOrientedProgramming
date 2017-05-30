/*
 * =====================================================================================
 *
 *       Filename:  File.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/05/2017 01:04:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include "Array.hpp"

#include <stdexcept>

using namespace std;

Array::Array(int size)
{
	if (size > 10000)
		throw bad_alloc(); 
	count = size;
	elts  = new int[count];
}
Array::~Array()
{
	delete[] elts;
}
