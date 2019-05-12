#include "sheepHeaderArray.h"
//sheep methods
Sheep ::Sheep()
{
}
Sheep ::~Sheep()
{
}

void Sheep::SetInitialValues(string sheepName,int sheepAge)
{
    name = sheepName;
    age =sheepAge;
}

void Sheep::GetValues(string &sheepName,int &sheepAge) const
{
    sheepAge = age;
    sheepName = name;
}

string Sheep::GetName() const
{
    return name;
}

//Farm methods
Farm ::Farm()
{
    sheepCount = 0;
}
Farm ::~Farm()
{
}

void Farm::AddSheep(Sheep newSheep)
{
    if(sheepCount-1 < AR_SIZE)
    {
        sheepArray[sheepCount] = newSheep;
        sheepCount++;
    }
}

void Farm::ClearList()
{
    sheepCount = 0;
}

Sheep Farm::FindSheep(string sheepName) const
{
    int i;
    Sheep sheep;
    bool found = false;

    while(i<sheepCount-1 && !found)
    {
        if(sheepName == sheepArray[i].GetName())
        {
            found = true;
        }
        else
        {
            i++;
        }
    }
    return(sheepArray[i]);
}

Sheep Farm::GetFirstSheep() const
{
    return(sheepArray[0]);
}

int Farm::TotalSheep() const
{
    return(sheepCount);
}

void Farm::DisplaySheepTable() const
{
    const int NCOL_SIZE = 14;
    const int ACOL_SIZE = 3;
    int i = 0;
    int sheepAge;
    string sheepName;

    cout << left;
    cout << setw(NCOL_SIZE) << "NAME";
    cout << setw(NCOL_SIZE) << "AGE";
    cout << endl;
    cout << setfill('-') << setw(NCOL_SIZE-1) << '-';
    cout << ' ';
    cout << setfill('-') << setw(ACOL_SIZE) <

    while(i < sheepCount-1)
    {
        cout << setw(14) << sheepArray[i].GetName();

    }
}

