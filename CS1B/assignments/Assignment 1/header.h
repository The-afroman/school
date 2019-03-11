/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 02/15/19
 *****************************************************************************/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

//ENUMERATED TYPES
enum menuoption {EXIT,
				 LARGERBALANCE,
				 SMALLERBALANCE,
				 SUM,
				 AVERAGE,
				 SEARCH};

//PROTOTYPES
void printHeader(ostream &output,	  //output device
				 char exersize,		  //lab or assignment?
				 string exersizeName, //lab or assignment name
				 int num,			  //lab or assignment name
				 string names         //names of programmer(s)
				 );

void input(string &outFileName,		  //name of output file
		   string ar1[],			  //string array
		   int ar2[],                 //int array
		   float ar3[],               //float array
		   const int AR_SIZE          //size of parallel arrays
		   );

void menu();

float sumAvg(menuoption token,        //menu option chosen
		     float ar3[],             //float array
			 const int AR_SIZE        //size of array
			 );

int searchBalance(menuoption token,   //menu option chosen
		          float ar3[],		  //float array
				  const int AR_SIZE   //size of array
				  );

int search(menuoption token,		  //menu option chosen
		   string ar1[],              //string array
		   const int AR_SIZE,         //size of array
		   string userInput,          //user inputed search item
		   bool &found                //returns true if found or false if not found
		   );
