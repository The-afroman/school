#ifndef CLASS_HEADER_H_
#define CLASS_HEADER_H_
#include "mainheader.h"
 /******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 5	: DVD Movie List Intro to OOP
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/21/19
 *****************************************************************************/

 class StackList // Base Class - Using linked list implementation 
 {
     public:
        /**
         *  CONSTRUCTOR
         **/
        StackList();
        /**
         * DECONSTRUCTOR
         **/
        ~StackList();

        /**
         *  MUTATORS
         **/
        void Push(DVDNode newDVD);  // create a DVDNode, add a  
                                    // DVDNode in the stack, by adding 
                                    // to the front of the linked List 

        DVDNode Pop();              // return the DVDNode in the top of  
                                    // the stack, remove the DVDNode 
                                    // from the stack, delete the DVDNode 
        /**
         *  ACCESSORS 
         **/
        bool IsEmpty() const;       // check if stack is empty 
        DVDNode Peek() const;       // return the DVDNode at the top of the stack  
        int Size() const;           // return the number of people in the stack
        
    protected: 
        DVDNode *head;              // head pointer for stack 
        int stackCount;             // total number of persons in the stack 
};

class MovieList: public StackList // Derrived Class
{
    public:
        /**
         * CONSTRUCTOR
         **/
        MovieList();
        /**
         * DESTRUCTOR
         **/
        ~MovieList();

        /**
         * ACCESSORS
         **/
        void OutputList(string outFileName);    
        /**
         * MUTATORS
         **/
        void CreateList(string inFileName);
    private:
        void wordwrap();
        void classheader();

};

#endif