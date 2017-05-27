/*
 * =====================================================================================
 *
 *       Filename:  Expr.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/05/2017 17:44:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include <Expr.hpp>
#include <math.h>

using namespace std;

Expr::Expr(){};
Expr::Expr(string expr)
{
	set_default_expr(expr);
	set_exprSize();
	set_default_nums();
	set_default_ops();
}
void Expr::set_exprSize()
{
	size = expr.size();
}
unsigned int Expr::get_exprSize()
{
	return size;
}
void Expr::set_default_expr(std::string expr)
{
	this->expr = expr;
	set_exprSize();
	set_default_nums();
	set_nums_size();
	set_default_ops();
	set_ops_size();
}
char Expr::get_expr(unsigned int pos)
{
	return expr.at(pos);
}
void Expr::set_default_nums()
{
	double temp = 0;
	unsigned int counter = 0;
	bool dotFlag = 0;
	unsigned int digCounter = 0;
	while (counter < get_exprSize())
	{
		temp = 0;
		dotFlag = 0;
		digCounter = 1;
		if (get_expr(counter) >= '0' && get_expr(counter) <= '9')
		{
			while ( counter < get_exprSize() &&
					(
					 (get_expr(counter) >= '0' && get_expr(counter) <= '9') ||
					get_expr(counter) == '.')
					)
			{
				if (get_expr(counter) == '.')
					dotFlag = true;
				else
				{
					if (!dotFlag)
					{
						temp *= 10;
						temp += get_expr(counter) - '0';
					}
					else
					{
						temp += ((get_expr(counter) - '0') / pow(10.0, digCounter));
						++digCounter;
					}
				}
				++counter;
			}
			nums.push_back(temp);
		}
		else
			++counter;
	}
}
void Expr::set_op_nums(unsigned int pos, double num)
{
	nums[pos] = num;
	nums.erase(nums.begin() + pos + 1);
	set_nums_size();
}
double Expr::get_num(unsigned int pos)
{
	return nums[pos];
}
void Expr::set_nums_size()
{
	nums_size = nums.size();
}
unsigned int Expr::get_nums_size()
{
	return nums_size;
}
void Expr::set_default_ops()
{
	for (unsigned int counter = 0; counter < get_exprSize(); ++counter)
	{
		if  (
				get_expr(counter) == '+' ||
				get_expr(counter) == '-' ||
			  	get_expr(counter) == '*' ||
				get_expr(counter) == 'x' ||
			   	get_expr(counter) == '/' 
			)
			ops.push_back(get_expr(counter));
	}
}
void Expr::set_op_ops(unsigned int pos)
{
	ops.erase(ops.begin() + pos);
	set_ops_size();
}
char Expr::get_op(unsigned int pos)
{
	return ops[pos];
}
void Expr::set_ops_size()
{
	ops_size = ops.size();
}
unsigned int Expr::get_ops_size()
{
	return ops_size;
}
