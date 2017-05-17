#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Convrt.h"

using namespace std;
void gotoxy(int, int);

int main()
{
	//making object.
	Convrt conv;
	COORD cord;
	//declaring variables.
	unsigned int const width = 10;
	char option = '\0';
	char input = '\0';
	unsigned int counter = 0;
	char pos = 'a';
	do
	{
		pos = 'a';
		do
		{
			//options menu
			conv.get_optnDisplay();
			option = _getch();
			system("CLS");
		} while (conv.set_optn(option));

		while (pos != 'q' && option != 'q')
		{
			conv.reset_num();
			counter = 0;
			switch (pos)
			{
			case 'a':
				do
				{
					//left settings
					cout << conv.get_optString(conv.get_optNum(), 1)
						<< setw(width) << conv.get_num_double();
					cout << conv.get_optString(conv.get_optNum(), 2) 
						<< setw(width) << conv.get_conv(conv.get_num_double(), conv.get_optNum(), 2);
					cout << endl << endl;
					conv.get_instructions();
					gotoxy(conv.get_optString(conv.get_optNum(), 1).length(), 0);
					input = _getch();
					if (conv.set_num_str(input, counter))
						--counter;
					++counter;
					pos = input;
					system("CLS");
				} while (pos != 'q' && pos != 'd');
				break;
			case 'd':
				//right settings
				conv.reset_num();
				counter = 0;
				do
				{
					cout << conv.get_optString(conv.get_optNum(), 1)
						<< setw(width) << conv.get_conv(conv.get_num_double(), conv.get_optNum(), 1);
					cout << conv.get_optString(conv.get_optNum(), 2)
						<< setw(width) << conv.get_num_double();
					cout << endl << endl;
					conv.get_instructions();
					gotoxy(conv.get_optString(conv.get_optNum(), 1).length() + conv.get_optString(conv.get_optNum(), 1).length() + width + 6, 0);
					input = _getch();
					if (conv.set_num_str(input, counter))
						--counter;
					++counter;
					pos = input;
					system("CLS");
				} while (pos != 'q' && pos != 'a');
				break;
			}
		}
	} while (option != 'q');	//press q to exit


	return 0;
}
void gotoxy(int x, int y) {
	COORD pos = { x, y };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, pos);
}