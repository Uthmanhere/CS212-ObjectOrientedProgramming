/*
 * =====================================================================================
 *
 *       Filename:  Calc.hpp
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

#include <string>

#include "Expr.hpp"

class Calc
{
private:
	Expr expr;
public:
	Calc();
	Calc(std::string);
	void simplify(char);
	double manip();
};
