/*
 * 
 * =====================================================================================
 *
 *       Filename:  Calculator.hpp
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

#include <stdexcept>
#include <string>

class Calculator
{
private:
	std::string expr;
	double result = 0;
public:
	void set_expr(std::string);
	std::string get_expr();
	double get_result();
};
