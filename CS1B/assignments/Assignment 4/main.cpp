/*******************************************************************************
 * AUTHOR     :Faris Hijazi
 * STUDENT ID :1039438
 * LAB #12    :Recursion Performance
 * CLASS      :CS1B
 * SECTION    :MW: 7:30pm
 * DUE DATE   :4/30/19
 ******************************************************************************/

#include "header.h"

int main()
{
    int n;                               //IN - number to calculate fib of factorial
    int i;                               //CALC - LCV in for loop
    int menuOpt;                         //IN&CALC - menu option user chooses
    int numEx;                           //CALC - LCV in for loop, num of executions
                                         //     - when calculation ex time
    high_resolution_clock::time_point t1;//CALC - time before execution
    high_resolution_clock::time_point t2;//CALC - time after execution
    long long duration1;                 //CALC&OUT - difference between t1 and t2 in 
                                         //         - microseconds

    PrintHeader(cout,'A',"Recursion Performance",4,"Faris Hijazi");

    menuOpt = menuInput();

    while(menuOpt != 0)
    {
        switch (menuOpt)
        {
            case EXIT:
                break;
        
            case FAC:
                cout << endl << "Enter a number n: ";
                cin >> n;
                cout << "calculating...\n";
                cout << "Factorial of " << n << " is: " << factorialR(n) << endl;
                break;
            
            case FIB:
                cout << endl << "Enter a number n: ";
                cin >> n;
                cout << "Fibonachi series: ";
                for(i=0;i < n; i++)
                {
                    cout << endl << fibR(i);
                    if(i < n-1)
                    {
                        cout << ',';
                    }
                }
                cout << endl;        
                break;
            case FACP:
                cout << endl << "Enter a number n: ";
                cin >> n;
                cout << endl;

                cout << "Measuring exicution time for recursive...\n";

                t1 = high_resolution_clock::now();
                for(numEx=0;numEx<=100;numEx++)
                {
                    factorialR(n);
                }
                t2 = high_resolution_clock::now();
                duration1 = duration_cast<microseconds>( t2 -t1 ).count();

                cout << "It took the program "<< duration1 << " microseconds to execute.\n\n";

                cout << "Measuring execution time for non recursive...\n";
                t1 = high_resolution_clock::now();
                for(numEx=0;numEx<=100;numEx++)
                {
                    factorial(n);
                }
                t2 = high_resolution_clock::now();
                duration1 = duration_cast<microseconds>( t2 -t1 ).count();

                cout << "It took the program "<< duration1 << " microseconds to execute.\n";

                break;

            case FIBP:
                cout << endl << "Enter a number n: ";
                cin >> n;
                cout << endl;

                cout << "Measuring exicution time for recursive...\n";

                t1 = high_resolution_clock::now();
                for(numEx=0;numEx<=100;numEx++)
                {
                    for(i=0;i < n; i++)
                    {
                        fibR(i);
                    }
                }
                t2 = high_resolution_clock::now();
                duration1 = duration_cast<microseconds>( t2 - t1 ).count();

                cout << "It took the program "<< duration1 << " microseconds to execute.\n\n";

                cout << "Measuring execution time for non recursive...\n";
                t1 = high_resolution_clock::now();
                for(numEx=0;numEx<=100;numEx++)
                {
                    fib(n);
                }
                t2 = high_resolution_clock::now();
                duration1 = duration_cast<microseconds>( t2 -t1 ).count();

                cout << "It took the program "<< duration1 << " microseconds to execute.\n";
                break;

        }
        menuOpt = menuInput();
    }

    return 0;
}