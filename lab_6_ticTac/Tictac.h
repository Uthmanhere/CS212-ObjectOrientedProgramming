#pragma once
class Tictac
{
public:
	//constructor
	Tictac();
	//setters...
	int set_mark();
	void set_choice(int c);
	void set_defaultSquareFile();
	void set_squareFile();
	void set_nextPlayer();
	void set_prevPlayer();
	void get_board();
	//getters...
	void get_menu();
	void get_squareFile();
	int get_win();
	char get_player();
	void get_result();
	//destructor...
	~Tictac();
private:
	char square[10];
	int choice;
	char mark;
};

