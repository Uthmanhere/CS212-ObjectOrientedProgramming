/*
 * =====================================================================================
 *
 *       Filename:  Expr.hpp
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
#pragma once

#include <string>
#include <vector>

class Expr
{
private:
	std::string expr;
	unsigned int size = 0;
	unsigned int nums_size = 0;
	unsigned int ops_size = 0;	
	std::vector <double> nums;
	std::vector <double> ops;
public: 
	//constructors...
	Expr();
	Expr(std::string);
	//expression
	void set_exprSize();
	unsigned int get_exprSize();
	void set_default_expr(std::string);
	//nums
	char get_expr(unsigned int);
	void set_default_nums();
	void set_nums_size();
	double get_num(unsigned int);
	unsigned int get_nums_size();
	void set_op_nums(unsigned int, double);
	//ops
	void set_default_ops();
	void set_op_ops(unsigned int);
	char get_op(unsigned int);
	void set_ops_size();
	unsigned int get_ops_size();
};
