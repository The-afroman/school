/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

/* 
 * This program creates two objects of each class, one with a default constructor 
 * and one with an alternate constructor. all data members are printed out for
 * each object. Then data members are modified using member functions. Lastly 
 * modified data members are printed out to the console
 */

#include "swArchitectClass.h"

//writes column titles to console
void colTitle()
{
    std::cout << std::left << std::setw(COL_WIDTH) << "Name";
    std::cout << std::setw(COL_WIDTH) << "Id";
    std::cout << std::setw(COL_WIDTH) << "Phone";
    std::cout << std::setw(COL_WIDTH/2) << "Age";
    std::cout << std::setw(COL_WIDTH/2) << "Gender";
    std::cout << std::setw(COL_WIDTH) << "Job";
    std::cout << std::setw(COL_WIDTH) << "Salary";
    std::cout << std::setw(COL_WIDTH) << "Hire Date";
    std::cout << std::setw(COL_WIDTH) << "Department";
    std::cout << std::setw(COL_WIDTH) << "Supervisor";
    std::cout << std::setw(COL_WIDTH/2) << "Raise %";
    std::cout << std::setw(COL_WIDTH) << "Years Experience";
    std::cout << std::setw(COL_WIDTH/2) << "Cpp";
    std::cout << std::setw(COL_WIDTH/2) << "Java";
    std::cout << std::endl;

    std::cout << std::setw(COL_WIDTH*11.5) << std::setfill('-') << '-';
    std::cout << std::setfill(' ') << std::endl;
}

int main()
{
    //declare & init all objects
    employee emp1("Bob Marley", 10001, 9494206969, 62, 'M', "Mechanic", 99999, date(months(1), 12, 2018));
    employee emp2("Jim Marley", 10002, 1234567890, 62, 'M', "Janitor", 99009, date(months(4), 11, 2017));
    programmer pg1("Billy Bob", 10, 9494206969, 18, 'M', "Programmer", 120000, date(july, 4,2011), 123457, "Will Smith", 10, true, true);
    
    //print objects before changes
    colTitle();
    emp1.print(std::cout);
    std::cout << std::endl;
    pg1.print(std::cout);
    std::cout << std::endl;

    //check phone num pg and emp
    if(emp1 == pg1)
        std::cout << "Phone Nums are ==" << std::endl << std::endl;

    emp1.chPhone(1234567890);

    colTitle();
    emp1.print(std::cout);
    std::cout << std::endl;
    pg1.print(std::cout);
    std::cout << std::endl;

    if(emp1 != pg1)
        std::cout << "Phone Nums are !=" << std::endl << std::endl;

    //check phone num emp and emp
    colTitle();
    emp1.print(std::cout);
    std::cout << std::endl;
    emp2.print(std::cout);
    std::cout << std::endl << std::endl;
    
    if(emp1 == emp2)
        std::cout << "Phone Nums are ==" << std::endl << std::endl;

    emp1.chPhone(9494206969);

    colTitle();
    emp1.print(std::cout);
    std::cout << std::endl;
    emp2.print(std::cout);
    std::cout << std::endl << std::endl;

    if(emp1 != emp2)
        std::cout << "Phone Nums are !=" << std::endl << std::endl;

    //inc age
    emp1 = emp1 + 3;

    colTitle();
    emp1.print(std::cout);
    std::cout << std::endl;

    //read in employee data
    std::cout << "\nInsertion overload:\n";
    std::cin >> emp1;

    //print out employee data
    std::cout << std::endl;
    colTitle();
    std::cout << emp1 << std::endl;

    //pre and post inc ec
    std::cout << "\npre-inc emp1 : \n" << ++emp1 << std::endl;
    std::cout << "post-inc emp1 : \n" << emp1++ << std::endl;
    std::cout << "after assignment: \n" << emp1 <<std::endl;

    return 0;
}