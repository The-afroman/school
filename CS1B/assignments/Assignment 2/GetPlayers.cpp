/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

/******************************************************************************
 * This function will get the number of players and their names.
 *----------------------------------------------------------------------------
 * INPUT:
 *          playerX
 *          playerO
 * OUTPUT:
 *          none
 *****************************************************************************/

#include "header.h"

void GetPlayers(string& playerX, string& playerO)
{
    int  players;   //number of players (1 or 2)

    cout << "players? (1 or 2): ";
    cin >> players;

    do
    {    
        cout << "\nplayerX enter your name: ";
        cin.ignore(1000,'\n');
        getline(cin,playerX);
        cout << endl;
        if(playerX == "CPU")
        {
            cout << "invalid name, try again.\n\n";
        }
    }while(playerX == "CPU");

    if (players == 2) 
    {
        do
        {
            cout << "playerO enter your name: ";
            getline(cin,playerO);
            cout << endl;
            if(playerO == "CPU")
             {
            cout << "invalid name, try again.\n\n";
            }
        }while(playerX == "CPU");
    }
    
}