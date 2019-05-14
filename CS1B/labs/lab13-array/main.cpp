/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 13		: Arrays and Linked Lists of Sheep
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/09/19
 *****************************************************************************/

#include "sheepHeaderArray.h"

int main()
{
    const int NCOL_SIZE = 14;
    const int ACOL_SIZE = 3;

    int sheepAge;
    string sheepName;
    bool invalid;
    Farm newFarm;
    Sheep newSheep;
    int menuOpt;

    PrintHeader(cout, 'l',"Arrays and Linked Lists of Sheep - Array", 13, "Faris Hijazi");

    menuOpt = menuInput();
    while(menuOpt!=0)
    {
        switch (menuOpt)
        {
            case ADD:
                cout << endl;
                cout << left << setw(12) << "Sheep Name:";
                getline(cin, sheepName);
                //error check sheep age
                do
                {
                    cout <<setw(12) << "Sheep Age:";
                    if(!(cin >> sheepAge))
                        {
                            cout << "\n**** Please input a number between 0 and 9 ****\n";
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            invalid = true;
                        }
                        else if(sheepAge < 0 || sheepAge > 9)
                        {
                            cout << "\n**** The number " <<  sheepAge << " is an invalid entry ****\n";
                            cout << "**** Please input a number between 0 and 9 ****\n";
                            invalid =  true;
                        }
                        else
                        {
                            cin.ignore(1000, '\n');
                            invalid = false;
                        }
                    cout << endl;
                }while(invalid);
                newSheep.SetInitialValues(sheepName, sheepAge);
                newFarm.AddSheep(newSheep);
                break;
            
            case PEEK:
                if(newFarm.TotalSheep() > 0)
                {
                    cout << endl;
                    cout << left;
                    cout << setw(NCOL_SIZE) << "NAME";
                    cout << setw(NCOL_SIZE) << "AGE";
                    cout << endl;
                    cout << setfill('-') << setw(NCOL_SIZE-1) << '-';
                    cout << ' ';
                    cout << setfill('-') << setw(ACOL_SIZE) << '-';
                    cout << setfill(' ');
                    cout << endl;
                    newFarm.GetFirstSheep().GetValues(sheepName, sheepAge);
                    cout << setw(NCOL_SIZE) << sheepName;
                    cout << setw(ACOL_SIZE) << sheepAge;
                    cout << endl;
                }
                else
                {
                    cout << "\nno sheep in list\n";
                }
                
                break;
            case SEARCH:
                if (newFarm.TotalSheep() > 0)
                {        
                    cout << "\nwho are you looking for? ";
                    getline(cin, sheepName);

                    cout << endl;
                    cout << left;
                    cout << setw(NCOL_SIZE) << "NAME";
                    cout << setw(NCOL_SIZE) << "AGE";
                    cout << endl;
                    cout << setfill('-') << setw(NCOL_SIZE-1) << '-';
                    cout << ' ';
                    cout << setfill('-') << setw(ACOL_SIZE) << '-';
                    cout << setfill(' ');
                    cout << endl;
                    newFarm.FindSheep(sheepName).GetValues(sheepName, sheepAge);
                    cout << setw(NCOL_SIZE) << sheepName;
                    cout << setw(ACOL_SIZE) << sheepAge;
                    cout << endl <<endl;

                    cout << "has been found\n";
                }
                else
                {
                    cout << "\nno sheep to search\n";
                }
                break;
            case SIZE:
                cout <<endl;
                cout << "There are " << newFarm.TotalSheep() 
                    << " sheep in the list\n";
                break;
            case OUTPUT:
                cout << endl;
                newFarm.DisplaySheepTable();
                break;
            case CLEAR:
                newFarm.ClearList();
                cout << "\nthe list has been cleared!\n";
                break;
        }
        menuOpt = menuInput();
    }
        return 0;
}