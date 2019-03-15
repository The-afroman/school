/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

/******************************************************************************
 * This function will output the state of the board
 *----------------------------------------------------------------------------
 * INPUT:
 *          boardAr
 * OUTPUT:
 *          state of board to console
 *****************************************************************************/

#include "header.h"

void DisplayBoard(const char boardAr[][3])
{
	int i; //first dimention of array
	int j;    //second dimention of array

	system("clear");

	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";

	for (i = 0; i < 3; i++)
	{
		cout << setw(7) << "[" << i+1 << "][1] | " << "[" << i+1;
		cout << "][2] | " << "[" << i+1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;
		for (j = 0; j < 3; j++)
		{
			switch(j)
			{
				case 0: cout << i + 1 << setw(9) << boardAr[i][j];
				cout << setw(4) << "|";
				break;
				case 1: cout << setw(4) << boardAr[i][j];
				cout << setw(5) << "|";
				break;
				case 2: cout << setw(4) << boardAr[i][j] << endl;
				break;
				default: cout <<"ERROR!\n\n";
			}
		}

		cout << setw(14)<< "|" << setw(10) << "|\n";

		if (i != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;
}
