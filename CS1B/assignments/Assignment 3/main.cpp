/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

#include "header.h"

int main()
{
    movNode *head;   //CALC    - head of list
    int menuOpt;     //IN&CALC - user menu choice
    ofstream ofile;  //OUT     - output file variable
    string ofileName;//OUT    - name of oFile

    head = NULL;

    PrintHeader(cout,
                'l',
                "Searching Linked Lists",
                3,
                "Faris Hijazi");

    inputfile(head);//initialize list with input file

    cout << "which outputfile would you like to use (d for default) ?: ";
    getline(cin, ofileName);//name output file
    if(ofileName == "d")
    {
        ofileName = "outFile.txt";
    }
    ofile.open(ofileName);

    getInput(menuOpt, head, ofile);
    while(menuOpt != EXIT)//main loop
    {
        getInput(menuOpt, head, ofile);
    }
    ofile.close();

    return 0;

}
