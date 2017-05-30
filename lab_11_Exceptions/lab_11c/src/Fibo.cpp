/*
 * =====================================================================================
 *
 *       Filename:  Average.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/05/2017 11:59:44
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
#include <math.h>

#include "outOfRange.cpp"

using namespace std;

unsigned long Fibo::get_fiboSum(unsigned int num)
{
	unsigned long sum = 0;
	unsigned int counter = 1;
	while (counter <= num)
	{
		if (!(get_fibo(counter) % 2))
			sum += get_fibo(counter);
		++counter;
		if (sum > 4 * pow(10, 6))
			throw outOfRange();
	}
	return sum;
}
unsigned long Fibo::get_fibo(unsigned int num)
{
	if (num <= 1)
		return num;
	return (Fibo::get_fibo(num - 1) + Fibo::get_fibo(num - 2));
}
