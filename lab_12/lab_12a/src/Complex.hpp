/*
 * =====================================================================================
 *
 *       Filename:  Complex.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/05/2017 10:24:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#pragma once

class Complex
{
private :
	double real = 0;
	double image = 0;
public :
	Complex();
	Complex(const Complex& C);
	Complex(double, double);
	void set_real(double);
	void set_image(double);
	double get_real() const;
	double get_image() const;
	void get_print();
	void get_data();
};
