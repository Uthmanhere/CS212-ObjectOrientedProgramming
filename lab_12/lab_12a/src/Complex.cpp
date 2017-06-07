/*
 * =====================================================================================
 *
 *       Filename:  Complex.cpp
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

#include "Complex.hpp"

#include <iostream>

using namespace std;

Complex::Complex(){};
Complex::Complex(const Complex& C)
{
	set_real(C.get_real());
	set_image(C.get_image());
}
Complex::Complex(double real, double image)
{
	set_real(real);
	set_image(image);
}
void Complex::set_real(double real)
{
	this->real = real;
}
double Complex::get_real() const
{
	return real;
}
void Complex::set_image(double image)
{
	this->image = image;
}
double Complex::get_image() const
{
	return image;
}
void Complex::get_print()
{
	cout << get_real() << " + " << get_image() << " i";
}
void Complex::get_data()
{
	cout << ">\tReal Number :\t";
	double real;
	cin >> real;
	set_real(real);
	cout << ">\tImaginary Number :\t";
	double image;
	cin >> image;
	set_image(image);
}
