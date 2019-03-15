/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

/******************************************************************************
 * This function will get input from the player and check whether it is valid
 * then put the token on the board
 *----------------------------------------------------------------------------
 * INPUT:
 *          boardAR
 *          token
 *          playerX
 *          playerO
 *          AR_SIZE
 * OUTPUT:
 *          none
 *****************************************************************************/

#include "header.h"

void GetAndCheckInp(char boardAr[][3], char token, string playerX, string playerO, const int AR_SIZE)
{   
    int movex;          //first dimention of array
    int movey;          //second dimention of array

    srand (time(NULL));

    if(playerO != "CPU")
    {
        if(token == 'X')
        {
            do
            {
                cout << playerX << " choose a spot on the board (ex: 2 3): ";
                cin >> movex;
                cin >> movey;
                cout << endl;
                if(boardAr[movex-1][movey-1] != ' ')
                {
                    cout << "space invalid try again.\n";
                }
            }while(boardAr[movex-1][movey-1] != ' ' ||
                    movex > AR_SIZE || movey > AR_SIZE ||
                    movex < 0 && movey < 0);

            boardAr[movex-1][movey-1] = token;
        }
        else
        {
            do
            {
                cout << playerO << " choose a spot on the board (ex: 2 3): ";
                cin >> movex;
                cin >> movey;
                cout << endl;
                if(boardAr[movex-1][movey-1] != ' ')
                {
                    cout << "space taken try again.\n";
                }
            }while(boardAr[movex-1][movey-1] != ' ' ||
                    movex > AR_SIZE || movey > AR_SIZE ||
                    movex < 0 && movey < 0);

            boardAr[movex-1][movey-1] = token;
        } 
    }
    else
    {
        if(token == 'X')
        {
            do
            {
                cout << playerX << " choose a spot on the board (ex: 2 3): ";
                cin >> movex;
                cin >> movey;
                cout << endl;
                if(boardAr[movex-1][movey-1] != ' ')
                {
                    cout << "space taken try again.\n";
                }
            }while(boardAr[movex-1][movey-1] != ' ');

            boardAr[movex-1][movey-1] = token;
        }
        else //cpu's turn
        {
            do
            {
                 movex = rand() % 3;
                 movey = rand() % 3;
            }while(boardAr[movex][movey] != ' ');

            boardAr[movex][movey] = token;
        }
        
    }
}