/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 14		: Arrays and Linked Lists of Sheep
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/09/19
 *****************************************************************************/

/******************************************************************************
 * This function will output the menu to the console
 *----------------------------------------------------------------------------
 * INPUT:
 *          NA
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "sheepHeaderArray.h"

void outputMenu()
{
    cout << "\n1 - Add Sheep\n";
    cout << "2 - Output first sheep\n";
    cout << "3 - Find sheep\n";
    cout << "4 - List size\n";
    cout << "5 - Output list\n";
    cout << "6 - Clear list\n";
    cout << "0 - Exit\n";
    cout << "enter a command ? ";
}

/******************************************************************************
 * This function will get and check menu input
 *----------------------------------------------------------------------------
 * INPUT:
 *          NA
 * OUTPUT:
 *          NA
 *****************************************************************************/
int menuInput()
{
    int menuOpt;
    bool invalid = false;

    do
    {
        outputMenu();
        if(!(cin >> menuOpt))
        {
            cout << "\n**** Please input a number between 0 and 6 ****\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            invalid = true;
        }
        else if(menuOpt < 0 || menuOpt > 6)
        {
            cout << "\n**** The number " <<  menuOpt << " is an invalid entry ****\n";
            cout << "**** Please input a number between 0 and 5 ****\n";
            invalid =  true;
        }
        else
        {
            cin.ignore(1000, '\n');
            invalid = false;
        }
        
    }while(invalid);

    return menuOpt;
}

/******************************************************************************
 * This function will output the class header using ostream
 *----------------------------------------------------------------------------
 * INPUT:
 * 		output 		- output file variable
 * 		exersize	- Lab or Assignment
 * 		exersizeName- name of exersize
 * 		num			- number of Lab/Assignment
 * 		names		- names of programmers
 * OUTPUT:
 * 		header
 *****************************************************************************/
void PrintHeader(ostream &output, char exersize, string exersizeName,  int num, string names)
{

	int colWidth;  //CALC - changes based on exersize
	string asType; //CALC - changes based on exersize

	if(exersize == 'L')
	{
		asType = "Lab";
		colWidth = 9;
	}
	else
	{
		asType = "Assignment";
		colWidth = 2;
	}

	output << left;
	output <<"************************************************\n";
	output <<"* PROGRAMMED BY : "  << names << endl;
	output <<"* "<< setw(14) << "CLASS"   << ": " << "CS1A"    << endl;
	output <<"* "<< setw(14) << "SECTION" << ": " << "MW: 7:30P"  << endl;
	output <<"* "<< asType << " #" << setw(colWidth)  << num   << ": " << exersizeName << endl;
	output <<"************************************************\n";
	output << right;
}
