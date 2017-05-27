/*
 * =====================================================================================
 *
 *       Filename:  Calc.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/05/2017 19:30:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include "Calc.hpp"
#include "customException.cpp"

#include <stdexcept>

using namespace std;

Calc::Calc(string expression)
{
	expr.set_default_expr(expression);
}
void Calc::simplify(char op)
{
	if (expr.get_nums_size() != expr.get_ops_size() + 1)
		throw invalid_argument("Invalid Expression");
	double simpNum = 0;
	for (unsigned int counter = 0; counter < expr.get_ops_size(); ++counter)
	{
		if (expr.get_op(counter) == op)
		{
			switch (op)
			{
			case '+':
				simpNum = expr.get_num(counter) + expr.get_num(counter + 1);
				break;
			case '-':
				simpNum = expr.get_num(counter) - expr.get_num(counter + 1);
				break;
			case '*':
			case 'x':
				simpNum = expr.get_num(counter) * expr.get_num(counter + 1);
				break;
			case '/':
				if (!expr.get_num(counter) && !expr.get_num(counter + 1))
					throw undefined();
				if (!expr.get_num(counter + 1))
					throw divByZero();
				simpNum = expr.get_num(counter) / expr.get_num(counter + 1); 
			}
			expr.set_op_nums(
					counter ,
					simpNum
					);
			expr.set_op_ops(counter);
			--counter;
		}
	}
}
double Calc::manip()
{
	simplify('/');
	simplify('*');
	simplify('+');
	simplify('-');
	return expr.get_num(0);
}

