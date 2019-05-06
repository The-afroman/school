#include "header.h"
/******************************************************************************
 * This function will find the factorial of an int num
 *----------------------------------------------------------------------------
 * INPUT:
 * 		num - long long integer
 * OUTPUT:
 * 		factorial of num
 *****************************************************************************/
long long factorial(long long num)
{
    long long factorial; //OUT - holds factorial of num

    factorial = num;

    if (num <= 1)
    {
       factorial = 1;
    }
    while(num-1 > 0)
    {
        factorial = factorial * (--num);
    }
    return factorial;
}

/******************************************************************************
 * This function will output the fibonachi series, up to (num) numbers
 *----------------------------------------------------------------------------
 * INPUT:
 * 		num - number of numbers in series to calculate
 * OUTPUT:
 * 		fibonachi series
 *****************************************************************************/
string fib(long num)
{
    int i;          //CALC - int used in for loop
    long fib;       //CALC - stores result of calculation 
                    //       for next number in series 
    long series[50];//CALC - array of fib series
    string output;  //OUT  - string of series to output

    if(num <= 1)
    {
        series[0] = 1;
    }
    else
    {
        fib = 0;
        for(i = 0;i < num;i++)
        {
            if(i == 0)
            {
                series[i] = 0;
            }
            else if (i == 1)
            {
                series[i] = 1;
            }
            else
            {
                series[i] = series[i-1] + series[i-2];        
            }
        }
    }
    return outputArray(series, num);
}

/******************************************************************************
 * This function will get a menu infut from the user and error check the input
 *----------------------------------------------------------------------------
 * INPUT:
 * 		NA
 * OUTPUT:
 * 		menuOpt
 *****************************************************************************/
int menuInput()
{
    int menuOpt;
    bool invalid = false;
    do
    {
        outputMenu();
        if(!(cin >> menuOpt))
        {
            cout << "\n**** Please input a number between 0 and 4 ****\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            invalid = true;
        }
        else if(menuOpt < 0 || menuOpt > 4)
        {
            cout << "\n**** The number " <<  menuOpt << " is an invalid entry ****\n";
            cout << "**** Please input a number between 0 and 4 ****\n";
            invalid =  true;
        }
        else
        {
            cin.ignore(1000, '\n');
            invalid = false;
        }
    }while(invalid);

    return menuOpt;
}
/******************************************************************************
 * This function will output a menu of options for the user to pick from
 *----------------------------------------------------------------------------
 * INPUT:
 * 		NA
 * OUTPUT:
 * 		NA
 *****************************************************************************/
void outputMenu()
{
    cout << "\n1 - Calculate and Display Factorial of a Number\n";
    cout << "2 - Calculate and Display Fibonachi Series of a Number\n";
    cout << "3 - Compare Performance for Factorial Implementations\n";
    cout << "4 - Compare Performance for Fibonachi Implementations\n";
    cout << "0 - Exit\n";
    cout << "enter a command (0 to exit): ";
}

/******************************************************************************
 * This function will output a series of numbers from an array
 *----------------------------------------------------------------------------
 * INPUT:
 * 	    arr[]   - array of numbers to output
 *      num     - number of numbers to output from array
 * OUTPUT:
 * 		NA
 *****************************************************************************/
string outputArray(long arr[], int num)
{
    string output;
    int i;
    for(i=0;i<num;i++)
    {
        output += to_string(arr[i]);
        if(i < num-1)
        {
            output += ",";
        }
    }
    return output;
}

/******************************************************************************
 * This function will output the class header using ostream
 *----------------------------------------------------------------------------
 * INPUT:
 * 		output 		- output file variable
 * 		exersize	- Lab or Assignment
 * 		exersizeName- name of exersize
 * 		num			- number of Lab/Assignment
 * 		names		- names of programmers
 * OUTPUT:
 * 		header
 *****************************************************************************/
void PrintHeader(ostream &output, char exersize, string exersizeName,  int num, string names)
{

	int colWidth;  //CALC - changes based on exersize
	string asType; //CALC - changes based on exersize

	if(exersize == 'L')
	{
		asType = "Lab";
		colWidth = 9;
	}
	else
	{
		asType = "Assignment";
		colWidth = 2;
	}

	output << left;
	output <<"************************************************\n";
	output <<"* PROGRAMMED BY : "  << names << endl;
	output <<"* "<< setw(14) << "CLASS"   << ": " << "CS1A"    << endl;
	output <<"* "<< setw(14) << "SECTION" << ": " << "MW: 7:30P"  << endl;
	output <<"* "<< asType << " #" << setw(colWidth)  << num   << ": " << exersizeName << endl;
	output <<"************************************************\n";
	output << right;
}

