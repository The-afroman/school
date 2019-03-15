/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

#ifndef TICTACHEADER_H_
#define TICTACHEADER_H_
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

void PrintHeader(ostream &output,     //output device
				 char exersize,       //lab or assignment?
				 string exersizeName, //lab or assignment name
				 int num,             //lab or assignment name
				 string names);       //names of programmer(s)

/******************************************************************************
* OutputInstruct
* This function outputs instructions to the users. There are no input
* or output parameters for this function as it only displays text to
* the screen.
*
* RETURNS: nothing
*  Displays the instructions to the user
*****************************************************************************/

void OutputInstruct();

/******************************************************************************
* InitBoard
* This function initializes each spot in the board to a space ' '.
*
* RETURNS: Board initialized with all spaces
*****************************************************************************/

void InitBoard(char boardAr[][3], const int AR_SIZE); // OUT - tic tac toe board

/******************************************************************************
* DisplayBoard
* This function outputs the tic tac toe board including the tokens
* played in the proper format (as described below).
*
* 	1 		 2 		  3
* [1][1] | [1][2] | [1][3]
*        |        |
* 1      |        |
*        |        |
* --------------------------
* [2][1] | [2][2] | [2][3]
*        |        |
* 2      |        |
*        |        |
* --------------------------
* [3][1] | [3][2] | [3][3]
*        |        |
* 3	     |        |
*        |        |
*
* RETURNS: nothing
* outputs the current state of the board
* *****************************************************************************/

void DisplayBoard(const char boardAr[][3]); // IN - tic tac toe board

/******************************************************************************
* GetPlayers
* This function prompts the user and gets the input for the players' names.
* playerX will always contain the name of the player that is using the X token.
* playerO will always contain the name of the player that is using the O token.
*
* RETURNS: the players names through the variables playerX and playerO.
*****************************************************************************/
void GetPlayers(string& playerX,  // OUT - player X's name
				string& playerO); // OUT - player O'x name

// As this was written in class - you need to document this

void GetAndCheckInp(char boardAr[][3], char token, string playerX,
					string playerO, const int AR_SIZE);

/******************************************************************************
* SwitchToken
* This function switches the active player.
* It takes in a parameter representing the current player's token
* as a character value (either an X or an O) and returns the opposite.
* For example, if this function receives an X it returns an 0. If it
* receives and O it returns and X.
*
* RETURNS: the token opposite of the one in which it receives.
*****************************************************************************/

char SwitchToken(char token); // IN - current player's token ('X' or 'O')

/******************************************************************************
* CheckWin
* This function checks to see if either player has run. Once it is
* possible for a win condition to exist, this should run after each a
* player makes a play.
*
* RETURNS the character value of the player that won or a value that
* indicates a tie.
*****************************************************************************/

char CheckWin(const char boardAr[][3], const int AR_SIZE); // IN - tic tac toe board

/******************************************************************************
* OutputWinner
* This function receives as input a character indicating which player won
* or if the game was a tie and outputs an appropriate message. This function
* does not return anything as it simply outputs the appropriate message to
* the screen.
*
* RETURNS: nothing
* � Displays the winner�s name
*****************************************************************************/

void OutputWinner(char whoWon,    // IN - represents the winner/tied game.
				  string playerX, // OUT - player X's name
				  string playerO);// OUT - player O'x name

#endif /* TICTACHEADER_H_ */
