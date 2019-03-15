/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

#include "header.h"

int main()
{
	const int AR_SIZE = 3; //size of array

	string player1;  // IN & OUT - first player X
	string player2;  // IN & OUT - second player O
	char board[3][3];// IN & OUT - Tic Tac Toe array
	char token;      // CALC	 - X or O changes every turn
	char winner;     // CALC & OUT - winner of game, game ends if winner found 
	int turnCount;   // CALC     - incremented every turn 


	player2 = "CPU";
	token = 'X';
	winner = 'N';
	turnCount = 0;

	PrintHeader(cout, 'A',"Tick Tac Toe", 2, "Faris Hijazi");
	OutputInstruct();
	InitBoard(board, AR_SIZE);
	GetPlayers(player1, player2);
	
	DisplayBoard(board);

	while(winner == 'N' && turnCount < 9)
	{
		GetAndCheckInp(board, token, player1, player2, AR_SIZE);
		token = SwitchToken(token);
		winner = CheckWin(board, AR_SIZE);
		DisplayBoard(board);
		turnCount++;
	}

	OutputWinner(winner, player1, player2);
	
	//cout << "\nwinner is: " << winner << endl << endl;

	return 0;
}
