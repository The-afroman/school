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
 * LAB 12 - INTRO TO OOP
 *------------------------------------------------------------------------------
 *
 ******************************************************************************/

int main()
{
	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	Animal fluffy; //CALC - instance of animal class
	Animal maa;    //CALC - instance of animal class
	Animal babe;   //CALC - instance of animal class

	int    menuOption;   //IN - menu option input by user
	char   initialCon;   //IN - gets initial conditions for initialization
	int    animalOption; //IN - gets animal option user selected
	int    newAge;       //IN - value of new age input by user
	float  newValue;     //IN - new animal value input by user

	PrintHeaderOStream ( cout, "Intro to OOP", 12, 'L');

	menuOption = InputMenuOp('S');

	if(menuOption == InitializeAnimals)
	{
		cout << "\nInitializing Fluffy, Maa, Babe...\n";
		fluffy.SetInitialValues("Fluffy", "Sheep", 1, 15000.00);
		maa.SetInitialValues("Maa", "Sheep", 3, 16520.35);
		babe.SetInitialValues("Babe", "Pig", 2, 10240.67);

		menuOption = InputMenuOp('M');

		while(menuOption != 0)
		{

			switch(menuOption)
			{
				case InitializeAnimals:initialCon = ConfirmReinitialize();
					if(initialCon == 'Y')
					{
						cout << "Initializing Fluffy, Maa, "
							<< "Babe...\n";
						fluffy.SetInitialValues("Fluffy",
												"Sheep",
												1,
												15000.00);
						maa.SetInitialValues("Maa",
											"Sheep",
												3,
												16520.35);
						babe.SetInitialValues("Babe",
												"Pig",
												2,
												10240.67);
					}
					else
					{
						cout << "Animals have not been "
							<< "reinitialized!\n";
					}
					break;
				case AgeChange:animalOption = InputAnimalSelected('A');
					newAge = InputNewAge();
					cout << "\nChanging ";
					switch(animalOption)
					{
						case AnimalOne:cout << "Fluffy's ";
										fluffy.ChangeAge(newAge);
										break;
						case AnimalTwo:cout << "Maa's ";
										maa.ChangeAge(newAge);
										break;
						case AnimalThree:cout << "Babe's ";
										babe.ChangeAge(newAge);
										break;
					}
					cout << "age to " << newAge << "...\n";
					break;

				case ValueChange:animalOption = InputAnimalSelected('V');
					newValue = InputNewValue();
					cout << "\nChanging ";
					switch(animalOption)
					{
						case AnimalOne:cout << "Fluffy's ";
									fluffy.ChangeValue(newValue);
									break;
						case AnimalTwo:cout << "Maa's ";
									maa.ChangeValue(newValue);
									break;
						case AnimalThree:cout << "Babe's ";
									babe.ChangeValue(newValue);
									break;
					}
					cout << fixed << setprecision(2);
					cout << "value to " << newValue << "...\n";
					cout.unsetf(ios::fixed);
					cout << setprecision(6);
					break;

				case DisplayAnimals:DisplayAnimalHeader();
					fluffy.Display();
					maa.Display();
					babe.Display();
					break;
				case Exit: break;  
			}

			menuOption = InputMenuOp('M');

		}
	}
	return 0;
}
