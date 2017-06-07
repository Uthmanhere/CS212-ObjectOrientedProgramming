/*
 * =====================================================================================
 *
 *       Filename:  CCal.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/05/2017 10:42:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include "CCal.hpp"

#include <iostream>

using namespace std;

Complex CCal::add_Complex(Complex C1, Complex C2)
{
	C.set_real(C1.get_real() + C2.get_real());
	C.set_image(C1.get_image() + C2.get_image());
	return C;
}
Complex CCal::sub_Complex(Complex C1, Complex C2)
{
	C.set_real(C1.get_real() - C2.get_real());
	C.set_image(C2.get_image() - C2.get_image());
	return C;
}
Complex CCal::div_Complex(Complex C1, Complex C2)
{
	C.set_real(
			(C1.get_real() * C2.get_real() + C1.get_image() * C2.get_image()) /
			(C2.get_real() * C2.get_real() + C2.get_image() * C2.get_image())
			);
	C.set_image(
			(C1.get_image() * C2.get_real() - C1.get_real() * C2.get_image()) /
			(C2.get_real() * C2.get_real() + C2.get_image() * C2.get_image())
			);
	return C;
}
Complex CCal::mul_Complex(Complex C1, Complex C2)
{
	C.set_real(C1.get_real() * C2.get_real() - C1.get_image() * C2.get_image());
	C.set_image(C1.get_real() * C2.get_image() + C2.get_real() * C1.get_image());
	return C;
			
}
