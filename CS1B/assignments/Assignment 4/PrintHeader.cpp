/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

#include "header.h"

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
