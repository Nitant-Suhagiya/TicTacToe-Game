#include "TicTacToe.h"
#include <iostream>

using namespace std;


int main()
{
	int Play;	

	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Enter 1 to Play : " << endl;
	cout << "Enter 0 to Exit : ";
	cin >> Play;

	if (Play == 1)
		Game();
	else
		exit(0);

	cin >> Play;
	cout << endl;


	Game();


	cin.ignore();
	cin.get();
	return 0;
}