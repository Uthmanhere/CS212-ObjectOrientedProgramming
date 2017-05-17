#include <iostream>
#include "Tictac.h"

using namespace std;

int main()
{
	int result;
	Tictac tictacGame;
	do
	{
		tictacGame.get_board();
		tictacGame.get_menu();
	} while (result = tictacGame.set_mark() == -1);
	tictacGame.get_board();
	tictacGame.get_result();

	system("pause");

	return 0;
}