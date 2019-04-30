/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

/******************************************************************************
 * This function will recieve menu input from user and call the required
 * function based on menu input.
 *----------------------------------------------------------------------------
 * INPUT:
 *          menuOpt - user menu input
 *          head    - head of list
 *          perNode - search ptr for outputing searchPtr->name
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void getInput(int &menuOpt, movNode *&head, ofstream &ofile)
{
    bool invalid; // CALC - if true input is invalid
    string search;

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

    switch (menuOpt)
    {
        case EXIT:
            break;
        case OUTPUTL:
            break;
        case TSEARCH:
            titleSearchNode(head, ofile);
            break;
        case GSEARCH:

            break;
        case ASEARCH:
            
            break;
        case YSEARCH:

            break;
        case RSEARCH:

            break;
    }
}