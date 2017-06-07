/*
 * =====================================================================================
 *
 *       Filename:  Source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/05/2017 11:13:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (N12), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include "CCal.hpp"
#include "Complex.hpp"

#include <iostream>

using namespace std;

int main()
{
	cout << "Data for first Complex Number :" << endl;
	Complex C1;
	C1.get_data();
	cout << "Data for second Complex Number :" << endl;
	Complex C2;
	C2.get_data();

	CCal cal;
	//add
	Complex C3 = cal.add_Complex(C1, C2);
	cout << ">\t";
	C1.get_print();
	cout << "  +  ";
	C2.get_print();
	cout << " =\t";
	C3.get_print();
	//sutract
	Complex C4 = cal.sub_Complex(C1, C2);
	cout << endl << ">\t";
    C1.get_print();
	cout << "  -  ";
	C2.get_print();
	cout << " =\t";
	C4.get_print();
	//multiply
	Complex C5 = cal.mul_Complex(C1, C2);
	cout << endl << ">\t";
	C1.get_print();
	cout << "  x  ";
	C2.get_print();
	cout << " =\t";
	C5.get_print();
	//divide
	Complex C6 = cal.div_Complex(C1, C2);
	cout << endl << ">\t";
	C1.get_print();
	cout << "  /  ";
	C2.get_print();
	cout << " =\t";
	C6.get_print();
	cout << endl;	
	return 0;
}
