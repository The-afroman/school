/*******************************************************************************
 * AUTHOR     :Daniel Olaes & Faris Hijazi
 * STUDENT ID :1128957 & 1039438
 * LAB #12    :Intro to OOP
 * CLASS      :CS1B
 * SECTION    :MW: 7:30pm
 * DUE DATE   :4/25/19
 ******************************************************************************/

#include "MainHeader.h"

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

int InputMenuOp(char menuType) //IN - the type of menu option
{
	/***************************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------------
	 * ERROR_MESSAGE - the number of spaces reserved for the error message
	 **************************************************************************/
	const int ERROR_MESSAGE = 43;

	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	int    menuOp;    //IN,CALC,OUT - the menu option selected by the user
	string menuError; //CALC        - the string that holds the error message
	bool   menuValid; //CALC        - the boolean that checks the validity of
	                  //            - the list
	if(menuType == 'S')
	{
		do
		{
			cout << "MENU\n"
			     << "1 - Initialize Animals\n"
				 << "0 - EXIT\n"
				 << "Enter Selection: ";

			menuValid = false;

			cout << left;

			if(!(cin >> menuOp))
			{
				cout << setw(ERROR_MESSAGE)
					 << "\n**** Please input a NUMBER between 0 and 1 ****"
					 << endl << endl;
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else if(menuOp < 0 || menuOp > 1)
			{
				menuError = "**** The number "
						    + to_string(menuOp)
						    + " is an invalid entry ";

				cout << endl
					 << setw(ERROR_MESSAGE)
				     << menuError
					 << "****\n";
			    cout << setw(ERROR_MESSAGE)
					 << "**** Please input a number between 0 and 1 ****\n\n";

			}
			else
			{
				menuValid = true;
			}

		} while(!menuValid);

	}
	else if (menuType == 'M')
	{

		do
		{
			cout << "\nMENU\n"
			     << "1 - Initialize Animals\n"
				 << "2 - Change Age\n"
				 << "3 - Change Value\n"
				 << "4 - Display\n"
				 << "0 - EXIT\n"
				 << "Enter Selection: ";

			menuValid = false;

			cout << left;

			if(!(cin >> menuOp))
			{
				cout << setw(ERROR_MESSAGE)
					 << "\n**** Please input a NUMBER between 0 and 4 ****"
					 << endl;
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else if(menuOp < 0 || menuOp > 4)
			{
				menuError = "**** The number "
						    + to_string(menuOp)
						    + " is an invalid entry ";

				cout << endl
					 << setw(ERROR_MESSAGE)
				     << menuError
					 << "****\n";
			    cout << setw(ERROR_MESSAGE)
					 << "**** Please input a number between 0 and 4 ****\n";

			}
			else
			{
				menuValid = true;
			}

		} while(!menuValid);
	}

	cout << right;

	cin.ignore(1000,'\n');

	return menuOp;
}

//------------------------------------------------------------------------------

/*******************************************************************************
 * FUNCTION InputAnimalSelected
 *------------------------------------------------------------------------------
 * This function allows the user to select a animal menu option and validate the
 * animal menu option inputed. Depending on the header type, the animal menu
 * will have a different header for age or value change.
 *
 * RETURN: the validated animal menu options selected by the user
 ******************************************************************************/

int InputAnimalSelected(char headerType)
{
	/***************************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------------
	 * ERROR_MESSAGE - the number of spaces reserved for the error message
	 **************************************************************************/
	const int ERROR_MESSAGE = 43;

	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	int    animalOp;    //IN,CALC,OUT - the menu option selected by the user
	string animalError; //CALC        - the string that holds the error message
	bool   animalValid; //CALC        - the boolean that checks the validity of
	                    //            - the list

	do
		{
			if(headerType == 'A')
			{
				cout << "\nCHANGE AGE:\n";
			}
			else if (headerType == 'V')
			{
				cout << "\nCHANGE VALUE:\n";
			}

			cout << "1 - Fluffy\n"
				 << "2 - Maa\n"
				 << "3 - Babe\n"
			     << "Select the animal you'd like to choose: ";

			animalValid = false;

			cout << left;

			if(!(cin >> animalOp))
			{
				cout << setw(ERROR_MESSAGE)
					 << "\n**** Please input a NUMBER between 1 and 3 ****\n";
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else if(animalOp < 1 || animalOp > 3)
			{
				animalError = "**** The number "
						    + to_string(animalOp)
							+ " is an invalid entry ";

				cout << endl
					 << setw(ERROR_MESSAGE)
					 << animalError
					 << "****\n";
				cout << setw(ERROR_MESSAGE)
					 << "**** Please input a number between 1 and 3 ****\n";

			}
			else
			{
				animalValid = true;
			}

		} while(!animalValid);

	cout << right;

	cin.ignore(1000,'\n');

	return animalOp - 1;
}

//------------------------------------------------------------------------------

/*******************************************************************************
 * FUNCTION InputNewAge
 *------------------------------------------------------------------------------
 * This function allows the user to enter a new age and validate that the age is
 * within the specific range of 0 to 10 years old
 *
 * RETURN: the validated new age entered by the user
 ******************************************************************************/

int InputNewAge()
{
	/***************************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------------
	 * ERROR_MESSAGE - the number of spaces reserved for the error message
	 **************************************************************************/
	const int ERROR_MESSAGE = 44;

	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	int    age;      //IN,CALC,OUT - the new age entered by the user
	string ageError; //CALC        - the string that holds the error message
	bool   ageValid; //CALC        - the boolean that checks the validity of
	                 //            - the list

	do
		{
			cout << "\nNEW AGE: ";

			ageValid = false;

			cout << left;

			if(!(cin >> age))
			{
				cout << setw(ERROR_MESSAGE)
					 << "\n**** Please input a NUMBER between 0 and 10 ****\n";
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else if(age < 0 || age > 10)
			{
				ageError = "**** The number "
						   + to_string(age)
						   + " is an invalid entry ";

				cout << endl
					 << setw(ERROR_MESSAGE)
					 << ageError
					 << "****\n";
				cout << setw(ERROR_MESSAGE)
					 << "**** Please input a number between 0 and 10 ****\n";

			}
			else
			{
				ageValid = true;
			}

		} while(!ageValid);

	cout << right;

	cin.ignore(1000,'\n');

	return age;
}

//------------------------------------------------------------------------------

/*******************************************************************************
 * FUNCTION InputNewValue
 *------------------------------------------------------------------------------
 * This function allows the user to enter a new value and validate that the
 * value is within the specific range of 0 to 400000
 *
 * RETURN: the validated new value entered by the user
 ******************************************************************************/

float InputNewValue()
{
	/***************************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------------
	 * ERROR_MESSAGE - the number of spaces reserved for the error message
	 **************************************************************************/
	const int ERROR_MESSAGE = 48;

	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	float  value;      //IN,CALC,OUT - the new value by the user
	string valueError; //CALC        - the string that holds the error message
	bool   valueValid; //CALC        - the boolean that checks the validity of
	                   //            - the list

	do
		{
			cout << "\nNEW VALUE: ";

			valueValid = false;

			cout << left;

			if(!(cin >> value))
			{
				cout << setw(ERROR_MESSAGE)
					 << "\n**** Please input a NUMBER between 0 and 400000 ****"
					 << endl;
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else if(value < 0 || value > 400000)
			{

				valueError = "**** The number "
						     + to_string(int(round(value)))
							 + " is an invalid entry ";

				cout << endl
					 << setw(ERROR_MESSAGE)
					 << valueError
					 << "****\n";
				cout << setw(ERROR_MESSAGE)
					 << "**** Please input a number between 0 and 400000 ****"
					 << endl;

			}
			else
			{
				valueValid = true;
			}

		} while(!valueValid);

	cout << right;

	cin.ignore(1000,'\n');

	return value;
}

//------------------------------------------------------------------------------

/*******************************************************************************
 * FUNCTION ConfirmReinitialize
 *------------------------------------------------------------------------------
 * This function allows the user to select 'Y' or 'N' to confirm if they wish to
 * reinitialize the animals, and validates their request.
 *
 * RETURN: the validated answer entered by the user
 ******************************************************************************/

char ConfirmReinitialize()
{
	/***************************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------------
	 * ERROR_MESSAGE - the number of spaces reserved for the error message
	 **************************************************************************/
	const int ERROR_MESSAGE = 27;

	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	char   answer;      //IN,CALC,OUT - the answer entered by the user
	string ansString;
	string answerError; //CALC        - the string that holds the error message
	bool   answerValid; //CALC        - the boolean that checks the validity of
	                    //            - the list

	do
		{

			answerValid = false;

			cout << left;

			cout << "\nAre you sure you want to reinitialize (Y/N)? ";
			cin.get(answer);
			cin.ignore(1000,'\n');

			if(toupper(answer) != 'Y' && toupper(answer) != 'N')
			{
				ansString.assign(1,answer);
				answerError = "**** " + ansString
						      + " is an invalid entry ";

				cout << endl
					 << setw(ERROR_MESSAGE)
					 << answerError
					 << "****";
				cout << setw(ERROR_MESSAGE)
					 << "\n**** Please Enter Y or N   ****\n";

			}
			else
			{
				answerValid = true;
			}

		} while(!answerValid);

	cout << right;

	return toupper(answer);
}
