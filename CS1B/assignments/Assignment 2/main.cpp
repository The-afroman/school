#include "header.h"

int main()
{
	string player1[1];
	string player2[1];
	int  players;
	char board[3][3] = {' '};


	cout << "players? (1 or 2): ";
	cout << "player 1 (X, enter your name): ";
	cin.get(player1);
	if(players == 2);
	{
		cout << "player 2 (O, enter your name): ";
		cin.get(player2);
	}
	
	DisplayBoard(board);

	return 0;
}
