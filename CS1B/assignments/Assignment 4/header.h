/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <ios> 
using namespace std;

enum menu
{
    EXIT

};

void PrintHeader(ostream &output,     	  //output device
				 char exersize,       	  //lab or assignment?
				 string exersizeName, 	  //lab or assignment name
				 int num,             	  //lab or assignment name
				 string names);           //names of programmer(s)

long long factorial(long long num);

long long factorialR(long long num);

#endif /* HEADER_H_ */