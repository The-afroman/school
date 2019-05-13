/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 14		: Arrays and Linked Lists of Sheep
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/09/19
 *****************************************************************************/

#include "sheepHeaderLL.h"
//sheep methods

/*******************************************************************************
 * CONSTRUCTOR Animal
 *------------------------------------------------------------------------------
 *
 * RETURN: NA
 ******************************************************************************/
Sheep ::Sheep()
{
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * DECONSTRUCTOR Animal
 *------------------------------------------------------------------------------
 *
 * RETURN: NA
 ******************************************************************************/
Sheep ::~Sheep()
{
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD SetInitialValues
 *------------------------------------------------------------------------------
 * sets values for sheepName and SheepAge
 * RETURN: NA
 ******************************************************************************/
void Sheep::SetInitialValues(string sheepName,int sheepAge)
{
    name = sheepName;
    age = sheepAge;

    cout << "The sheep...\n";
    cout << setw(12) << "Sheep Name:" << name << endl;
    cout <<setw(12) << "Sheep Age:" << age << endl;
    cout << "Has been added\n";
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD GetValues
 *------------------------------------------------------------------------------
 * gets values of sheepName and sheepAge
 * RETURN: NA
 ******************************************************************************/
void Sheep::GetValues(string &sheepName,int &sheepAge) const
{
    sheepAge = age;
    sheepName = name;
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD GetName
 *------------------------------------------------------------------------------
 * Returns name
 * RETURN: name
 ******************************************************************************/
string Sheep::GetName() const
{
    return name;
}

//Farm methods

/*******************************************************************************
 * Farm CONSTRUCTOR
 *------------------------------------------------------------------------------
 * RETURN: NA
 ******************************************************************************/
Farm ::Farm()
{
    head = NULL;
    sheepCount = 0;
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * Farm DECONSTRUCTOR
 *------------------------------------------------------------------------------
 * RETURN: NA
 ******************************************************************************/
Farm ::~Farm()
{
    SheepNode *sheepPtr;

    sheepCount = 0;
    while(head != NULL)
    {
        sheepPtr = head;
        head = sheepPtr->next;
        delete sheepPtr;
    }
    sheepPtr = NULL;
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD AddSheep
 *------------------------------------------------------------------------------
 * adds a sheep to the linked list
 * RETURN: NA
 ******************************************************************************/
void Farm::AddSheep(Sheep newSheep)
{
    SheepNode *sheepPtr;

    sheepCount++;
    sheepPtr = new SheepNode;
    sheepPtr->next = head;
    head = sheepPtr;
    sheepPtr->currentSheep = newSheep;
    sheepPtr = NULL;
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD ClearList
 *------------------------------------------------------------------------------
 * clears the list of all sheep
 * RETURN: NA
 ******************************************************************************/
void Farm::ClearList()
{
    SheepNode *sheepPtr;

    sheepCount = 0;
    while(head != NULL)
    {
        sheepPtr = head;
        head = sheepPtr->next;
        delete sheepPtr;
    }
    sheepPtr = NULL;
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD FindSheep
 *------------------------------------------------------------------------------
 * Finds sheep with specified name
 * RETURN: sheep to search
 ******************************************************************************/
Sheep Farm::FindSheep(string sheepName) const
{
    int i = 0;
    bool found = false;
    SheepNode *sheepPtr;
    if(sheepCount > 0)
    {
        sheepPtr = head;
        while(sheepPtr!=NULL && !found)
        {
            if (sheepPtr->currentSheep.GetName() == sheepName)
            {
                found = true;
            }
            else
            {
                sheepPtr = sheepPtr->next;
            }
        }
    }
    return(sheepPtr->currentSheep);
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD GetFirstSheep
 *------------------------------------------------------------------------------
 * returns the first sheep
 * RETURN: first sheep
 ******************************************************************************/
Sheep Farm::GetFirstSheep() const
{
    return(head->currentSheep);
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD TotalSheep
 *------------------------------------------------------------------------------
 * returns total sheep
 * RETURN: sheepCount
 ******************************************************************************/
int Farm::TotalSheep() const
{
    return(sheepCount);
}
//------------------------------------------------------------------------------

/*******************************************************************************
 * METHOD DisplaySheepTable
 *------------------------------------------------------------------------------
 * displays all sheep
 * RETURN: NA
 ******************************************************************************/
void Farm::DisplaySheepTable() const
{
    if(sheepCount > 0)
    {
        const int NCOL_SIZE = 14;
        const int ACOL_SIZE = 3;
        int i = 0;
        int sheepAge;
        string sheepName;
        SheepNode *sheepPtr;

        cout << left;
        cout << setw(NCOL_SIZE) << "NAME";
        cout << setw(NCOL_SIZE) << "AGE";
        cout << endl;
        cout << setfill('-') << setw(NCOL_SIZE-1) << '-';
        cout << ' ';
        cout << setfill('-') << setw(ACOL_SIZE) << '-';
        cout << setfill(' ');
        cout << endl;

        sheepPtr = head;
        while(sheepPtr!=NULL)
        {
            sheepPtr->currentSheep.GetValues(sheepName, sheepAge);
            cout << setw(NCOL_SIZE) << sheepName;
            cout << setw(ACOL_SIZE) << sheepAge;
            cout << endl;

            sheepPtr = sheepPtr->next;
        }
    }
    else
    {
        cout << "no sheep\n";
    }
}