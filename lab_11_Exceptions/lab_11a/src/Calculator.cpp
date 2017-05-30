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
#include "Calculator.hpp"

#include <math.h>
#include <iostream>

#include "divByZero.cpp"

using namespace std;

void Calculator::set_expr(string expr)
{
	this->expr = expr;
}
string Calculator::get_expr()
{
	return expr;
}
double Calculator::get_result()
{
	unsigned int exprCounter = 0;
	unsigned int numCounter = 0;
	double num1 = 0;
	while (get_expr().at(exprCounter) > '0' && get_expr().at(exprCounter < '9'))
	{
		num1 = (get_expr().at(exprCounter) - '0') + (num1 * 10);
		++numCounter;
		++exprCounter;
	}
	char op = get_expr().at(exprCounter);
	++exprCounter;
	double num2 = 0;
	numCounter = 0;
	while (exprCounter < get_expr().length() 
			&& get_expr().at(exprCounter) > '0' && get_expr().at(exprCounter) < '9')
	{
		num2 = (get_expr().at(exprCounter) - '0') + (num2 * 10);
		++numCounter;
		++exprCounter;
	}
	switch (op)
	{
	case '+':
		return (num1 + num2);
		break;
	case '-':
		return (num1 - num2);
		break;
	case '/':
		if (num2 == 0)
			throw divByZero();
		return ((static_cast<double>(num1) / num2));
		break;
	case '*':
	case 'x':
		return (num1 * num2);
		break;
	default:
		throw
			invalid_argument("Invalid Argument");	
	}

}

