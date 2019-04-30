/*******************************************************************************
 * AUTHOR     :Daniel Olaes & Faris Hijazi
 * STUDENT ID :1128957 &
 * LAB #12    :Intro to OOP
 * CLASS      :CS1B
 * SECTION    :MW: 7:30pm
 * DUE DATE   :4/25/19
 ******************************************************************************/

#ifndef MAINHEADER_H_
#define MAINHEADER_H_

/*******************************************************************************
 * PREPROCESSOR DIRECTIVES
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <ios>
//#include <stdio.h>
#include <math.h>
#include "ClassHeader.h"
using namespace std;

/*******************************************************************************
 * ENUMERATED TYPES
 ******************************************************************************/
enum MainMenu
{
	Exit,
	InitializeAnimals,
	AgeChange,
	ValueChange,
	DisplayAnimals
};

enum AnimalList
{
	AnimalOne,
	AnimalTwo,
	AnimalThree
};

/*******************************************************************************
 * FUNCTION PROTOTYPES
 ******************************************************************************/

/*******************************************************************************
 * ERROR CHECKING PROTOTYPES
 ******************************************************************************/

/*******************************************************************************
 * FUNCTION InputMenuOp
 *------------------------------------------------------------------------------
 * This function allows the user to select a menu option and validate the menu
 * option inputed. If menuType is 'S', then the small menu will be output and
 * the user input validated according to the small menu. If menuType is 'M', the
 * main menu will be output and the user input validated according to the main
 * menu.
 *
 * RETURN: the validated menu options selected by the user
 ******************************************************************************/
int InputMenuOp(char menuType); //IN - the type of menu option

/*******************************************************************************
 * FUNCTION InputAnimalSelected
 *------------------------------------------------------------------------------
 * This function allows the user to select a animal menu option and validate the
 * animal menu option inputed.
 *
 * RETURN: the validated animal menu options selected by the user
 ******************************************************************************/
int InputAnimalSelected(char headerType);

/*******************************************************************************
 * FUNCTION InputNewAge
 *------------------------------------------------------------------------------
 * This function allows the user to enter a new age and validate that the age is
 * within the specific range of 0 to 10 years old
 *
 * RETURN: the validated new age entered by the user
 ******************************************************************************/
int InputNewAge();

/*******************************************************************************
 * FUNCTION InputNewValue
 *------------------------------------------------------------------------------
 * This function allows the user to enter a new value and validate that the
 * value is within the specific range of 0 to 400000
 *
 * RETURN: the validated new value entered by the user
 ******************************************************************************/
float InputNewValue();

/*******************************************************************************
 * FUNCTION ConfirmReinitialize
 *------------------------------------------------------------------------------
 * This function allows the user to select 'Y' or 'N' to confirm if they wish to
 * reinitialize the animals, and validates their request.
 *
 * RETURN: the validated answer entered by the user
 ******************************************************************************/
char ConfirmReinitialize();

/*******************************************************************************
 * MISC FUNCTIONS
 ******************************************************************************/

/*******************************************************************************
 * FUNCTION PrintHeaderOStream
 *------------------------------------------------------------------------------
 * This function receives an output type, assignment name, type and number then
 * outputs appropriate header to the corresponding location - return nothing.
 *
 * RETURNS: nothing
 *  - the class header is output onto the screen IO.
 ******************************************************************************/

void PrintHeaderOStream ( ostream &output,  // IN - the type of output statement
				          string  asName,   // IN - assignment name
		                  int     asNum,    // IN - assignment number
				          char    asType ); // IN - assignment type
                                            //      ('L' = Lab
                                            //       'A' = Assignment)

/*******************************************************************************
 * FUNCTION DisplayAnimalHeader
 *------------------------------------------------------------------------------
 * This function will output the the animal list header to the screen IO.
 *
 * RETURN: nothing
 * 	- the animal list header is printed to the screen IO
 ******************************************************************************/
void DisplayAnimalHeader();

#endif /* MAINHEADER_H_ */
