/*
 * =====================================================================================
 *
 *       Filename:  CCal.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/05/2017 10:42:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include "Complex.hpp"

class CCal
{
private:
	Complex C;
public:
	Complex add_Complex(Complex, Complex);
	Complex sub_Complex(Complex, Complex);
	Complex mul_Complex(Complex, Complex);
	Complex div_Complex(Complex, Complex);
};
