#include "header.h"

int main()
{
	char player1;
	char player2;
	int  players;
	char board[3][3] = {'0'};


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
