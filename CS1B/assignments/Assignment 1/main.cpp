/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS		: CS1B
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 02/15/19
 *****************************************************************************/
/******************************************************************************
 * Functions and Arrays
 * ----------------------------------------------------------------------------
 * This program will receive an input file with the names, ids, and balances
 * of users, the program will prompt the user with a menu which will let the user
 * see the largest/smallest balance sum of all balances average of all balances
 * or search the array for a specific person. The results of this are output to
 * the specified output file.
 * ----------------------------------------------------------------------------
 * INPUT:
 *			input file and menu option
 * OUTPUT:
 *			output file
 *****************************************************************************/
#include "header.h"

int main()
{
	const int AR_SIZE = 10;

	ofstream oFile; 	   //OUT 	    - output file variable
	string outfile;		   //IN         - name of output file
	string name[10];       //OUT        - name array
	int id[10];            //OUT        - id array
	float balance[10];     //OUT        - balances array
	int menuInput;         //IN & CALC  - menu item chosen
	int searchIndex;       //OUT        - index of search item
	bool nameFound;        //CALC       - name found/not found
	string nameSearch;     //IN         - name to search for
	menuoption menuChoice; //IN         - menu item chosen

	printHeader(cout, 'A', "Functions and Arrays", 1, "Faris Hijazi");

	input(outfile, name, id, balance, AR_SIZE);

	oFile.open(outfile);

	printHeader(oFile, 'A', "Functions and Arrays", 1, "Faris Hijazi");

	menu();
	cin >> menuInput;
	cin.ignore(1000, '\n');
	menuChoice = menuoption(menuInput);

	while(menuChoice > 0 && menuChoice < 6)
	{
		switch(menuChoice)
		{
			case EXIT 			: break;

			case LARGERBALANCE  : searchIndex = searchBalance(LARGERBALANCE, balance, AR_SIZE);
								  cout  << "\nFinding the larger balance…\n\n";
								  oFile << "Larger Balance:\n";
								  oFile << left << setw(9) << "ID #"
										<< setw(25) << "NAME" << "BALLANCE DUE\n";
								  oFile << left << setw(9) << "----"
									    << setw(25) << "--------------------" << "-----------\n";
								  oFile << left << setw(9) << id[searchIndex] << setw(25)
									    << name[searchIndex];
								  oFile <<  "$" << setprecision(2) << right << fixed << setw(10) << balance[searchIndex]
									    << endl << endl << setprecision(6);
								  oFile.unsetf(ios::fixed);
								  break;

			case SMALLERBALANCE : searchIndex = searchBalance(LARGERBALANCE, balance, AR_SIZE);
			                      cout  << "\nFinding the smaller balance…\n";
								  oFile << "Smaller Balance:\n";
								  oFile << left << setw(9) << "ID #"
										<< setw(25) << "NAME" << "BALLANCE DUE\n";
								  oFile << left << setw(9) << "----"
									    << setw(25) << "--------------------" << "-----------\n";
								  oFile << left << setw(9) << id[searchIndex] << setw(25)
									    << name[searchIndex];
								  oFile <<  "$" << setprecision(2) << right << fixed << setw(10) << balance[searchIndex]
				                        << endl << endl << setprecision(6);
								  oFile.unsetf(ios::fixed);
								  break;

			case SUM 			: cout  << "\nFinding the larger sum…\n";
								  oFile << "Sum of Balance for all persons:\n";
								  oFile << setprecision(2) << fixed;
								  oFile << "$" << setw(10) << sumAvg(SUM, balance, AR_SIZE);
								  oFile << endl << endl;
								  oFile << setprecision(6);
								  oFile.unsetf(ios::fixed);
								  break;

			case AVERAGE 		: cout  << "\nFinding the larger average…\n";
				                  oFile << "Average of Balance for all persons:\n";
			  	  	  	  	  	  oFile << setprecision(2) << fixed;
			                      oFile << "$" << setw(10) << sumAvg(AVERAGE, balance, AR_SIZE);
			                      oFile << endl << endl;
			                      oFile << setprecision(6);
			                      oFile.unsetf(ios::fixed);
			                      break;

			case SEARCH 		: cout << "\nWho do you want to search for (enter done to exit): ";
								  getline(cin, nameSearch);

				                  searchIndex = search(LARGERBALANCE, name, AR_SIZE, nameSearch, nameFound);

								  if(nameFound)
								  {
								  	  oFile << "Search Name:\n";
								  	  oFile << left << setw(9) << "ID #"
					   	   	   	   	     	<<setw(25) << "NAME" << "BALLANCE DUE\n";
								  	  oFile << left << setw(9) << "----"
								 		    <<setw(25) << "--------------------" << "-----------\n";
								  	  oFile << left << setw(9) << id[searchIndex] << setw(25)
									        << name[searchIndex];
								  	  oFile <<  "$" << setprecision(2) << right << fixed << setw(10) << balance[searchIndex]
									        << endl << endl << setprecision(6);
								  	  oFile.unsetf(ios::fixed);
								   }
								  break;
		}
		menu();
		cin >> menuInput;
		cin.ignore(1000, '\n');
		menuChoice = menuoption(menuInput);
	}
	return(0);
}
