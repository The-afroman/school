/*******************************************************************************
 * AUTHOR     :Daniel Olaes & Faris Hijazi
 * STUDENT ID :1128957 & 1039438
 * LAB #12    :Intro to OOP
 * CLASS      :CS1B
 * SECTION    :MW: 7:30pm
 * DUE DATE   :4/25/19
 ******************************************************************************/

#include "MainHeader.h"
#include "ClassHeader.h"

/*******************************************************************************
 * FUNCTION PrintHeaderOStream
 *------------------------------------------------------------------------------
 * This function receives an output type, assignment name, type and number then
 * outputs appropriate header to the corresponding location - return nothing.
 *
 * RETURNS: nothing
 *  - the class header is output onto the screen IO.
 ******************************************************************************/

void PrintHeaderOStream ( ostream &output, // IN - the type of output statement
				          string  asName,  // IN - assignment name
		                  int     asNum,   // IN - assignment number
				          char    asType ) // IN - assignment type
                                           //      ('L' = Lab
                                           //       'A' = Assignment)
{
	output << left;
	output << "**************************************************\n";
	output << "*  PROGRAMMED BY : Daniel Olaes & Faris Hijazi\n";
	output << "*  "   << setw(14) << "STUDENT ID" << ": 1128957 & 1039438\n";
	output << "*  "   << setw(14) << "CLASS"    << ": CS1B - MW - 7:30pm\n";
	output << "*  ";

	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}

	output << asNum << ": " << asName << endl;
	output << "**************************************************\n\n";
	output << right;
}

//------------------------------------------------------------------------------

/*******************************************************************************
 * FUNCTION DisplayAnimalHeader
 *------------------------------------------------------------------------------
 * This function will output the the animal list header to the screen IO.
 *
 * RETURN: nothing
 * 	- the animal list header is printed to the screen IO
 ******************************************************************************/
void DisplayAnimalHeader()
{
	/***************************************************************************
	 * CONSTANT
	 *--------------------------------------------------------------------------
	 * ANIMAL_COL - animal column width
	 * NAME_COL   - name column width
	 * AGE_COL    - age column width
	 * VALUE_COL  - value column width
	 **************************************************************************/
	const int ANIMAL_COL = 11;
	const int NAME_COL   = 15;
	const int AGE_COL    = 3;
	const int VALUE_COL  = 11;

	cout << left << endl
		 << setw(ANIMAL_COL)  << "ANIMAL"
		 << setw(NAME_COL)    << "NAME"
		 << right
		 << setw(AGE_COL)     << "AGE"
		 << setw(1)           << " "
		 << setw(VALUE_COL-8) << " " << "VALUE" << endl;

	cout << left
	     << setw(ANIMAL_COL) << "----------"
	     << setw(NAME_COL)   << "--------------"
	     << right
	     << setw(AGE_COL)    << "---"
		 << setw(1)          << " "
	     << setw(VALUE_COL)  << "-----------\n";

	cout << left;

}
