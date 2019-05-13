/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 14		: Arrays and Linked Lists of Sheep
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/09/19
 *****************************************************************************/

#ifndef HEADER_H_LL
#define HEADER_H_LL
#include "mainheader.h"

const int AR_SIZE = 50;

class Sheep
{
    public:
        Sheep();
        ~Sheep();    
        /******************
         ***  MUTATORS  ***
         ******************/
        void SetInitialValues(string sheepName,int sheepAge);
        /*******************
         ***  ACCESSORS  ***
         *******************/
        void GetValues(string &sheepName,int &sheepAge) const;
        string GetName() const;    
    private:
        string name;
        int age;
};

class Farm
{
    public:
        Farm();
        ~Farm();
        /******************
         ***  MUTATORS  ***
         ******************/
        //add new sheep object to the list incriment sheep count
        void AddSheep(Sheep newSheep);//Adds new sheep to list
        void ClearList();//remove all sheep
        /******************
         *** ACCESSORS  ***
         ******************/
        Sheep FindSheep(string sheepName) const;
        Sheep GetFirstSheep() const;//Return first sheep
        int TotalSheep() const;//Displays number of sheep
        void DisplaySheepTable() const;//Output all sheep

    private:

    struct SheepNode
    {
        Sheep currentSheep; //sheep object
        SheepNode *next;    //next pointer
    };
    SheepNode *head;//head pointer
    int sheepCount;//number of sheep in LL
};

#endif /* HEADER_H_LL */