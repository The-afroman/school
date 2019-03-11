/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 02/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will propagate three arrays of type string, int, and float
 * with values from an input file.
 *----------------------------------------------------------------------------
 * INPUT:
 *			ar1[]       - string array
 *			ar2[]       - int array
 *			ar3[]       - float array
 *			inFile      - input file
 * OUTPUT:
 * 			ar1[]       - string array
 * 			ar2[]       - int array
 * 			ar3[]       - float array
 * 			outFileName - name of output file
 *****************************************************************************/

#include "header.h"

void input(string &outFileName, string ar1[], int ar2[], float ar3[], const int AR_SIZE)
{
	ifstream inFile;   //IN    - input file var
	string inFileName; //IN    - name of input file
	int index;         //CALC  - lcv for while loop

	cout << left << setw(40) << "What input file would you like to use:";
	getline(cin, inFileName);

	cout << left << setw(40) << "What output file would you like to use:";
	cout << right;
	getline(cin, outFileName);

	inFile.open(inFileName);

	index = 0;

	while(index < AR_SIZE)
	{
		getline(inFile, ar1[index], '\n');
		inFile >> ar2[index];
		inFile >> ar3[index];
		inFile.ignore(1000, '\n');
		index++;
	}

	inFile.close();
}

