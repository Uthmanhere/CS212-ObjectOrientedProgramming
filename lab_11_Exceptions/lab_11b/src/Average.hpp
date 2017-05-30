/*
 * =====================================================================================
 *
 *       Filename:  Average.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/05/2017 12:00:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

class Average
{
private:
	unsigned int marks[4] = { 0 };
public:
	void set_marks();
	double get_result();
};
