/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

#include "header.h"

int main()
{
    movNode *head;  //CALC    - head of list
    movNode *perPtr;
    int menuOpt;    //IN&CALC - user menu choice
    ofstream ofile; //OUT     - output file variable
    string ofileName;

    head = NULL;

    PrintHeader(cout,
                'l',
                "Creating an Ordered list",
                10,
                "Faris Hijazi");

    inputfile(head);

    cout << "which outputfile would you like to use (d for default) ?: ";
    getline(cin, ofileName);
    if(ofileName == "d")
    {
        ofileName = "outFile.txt";
    }
    ofile.open(ofileName);

    getInput(menuOpt, head, ofile);
    
    while(menuOpt != EXIT)
    {
        getInput(menuOpt, head, ofile);
    }

    ofile.close();
    return 0;

}
