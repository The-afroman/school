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
    employee emp1;
    employee emp2("Bob Marley", 10001, 9494206969, 62, 'M', "Mechanic", 99999, date(months(1), 12, 2018));
    swArchitect ar1;
    swArchitect ar2("Sarah Bob", 10, 10003, 22, 'F', "Architect", 160000, date(january, 1,2001), 123456, "Will Smith", 10, 10);
    programmer pg1;
    programmer pg2("Billy Bob", 10, 10005, 18, 'M', "Programmer", 120000, date(july, 4,2011), 123457, "Will Smith", 10, true, true);
    
    //print objects before changes
    colTitle();
    emp1.print(std::cout);
    std::cout << std::endl;
    emp2.print(std::cout);
    std::cout << std::endl;

    ar1.print(std::cout);
    ar2.print(std::cout);

    pg1.print(std::cout);
    pg2.print(std::cout);
    std::cout << std::endl;

    //make changes
    emp1.chAge(43);
    emp1.chGender('F');
    emp1.chHireDate(date(february, 1, 2011));
    emp1.chId(10000);
    emp1.chJob("Janitor");
    emp1.chName("Samantha Smith");
    emp1.chPhone(9491234567);
    emp1.chSalary(400221);

    ar1.chExp(3);
    ar1.chSvName("Jimmy Neutron");
    ar1.chlastSalInc(4);
    ar1.chDepNum(123456);
    ar1.chAge(22);
    ar1.chGender('M');
    ar1.chHireDate(date(december, 9, 2014));
    ar1.chId(10002);
    ar1.chJob("Architect");
    ar1.chName("Jimmy Smith");
    ar1.chPhone(7143333333);
    ar1.chSalary(200221);
    
    pg1.chCpp(1);
    pg1.chJava(1);
    pg1.chSvName("Jimmy Neutron");
    pg1.chlastSalInc(7);
    pg1.chDepNum(123336);
    pg1.chAge(19);
    pg1.chGender('F');
    pg1.chHireDate(date(december, 3, 2018));
    pg1.chId(10004);
    pg1.chJob("Programmer");
    pg1.chName("Jimmy Smith");
    pg1.chPhone(7142222222);
    pg1.chSalary(155111);

    //print objects after changes
    colTitle();
    emp1.print(std::cout);
    std::cout << std::endl;
    emp2.print(std::cout);
    std::cout << std::endl;

    ar1.print(std::cout);
    ar2.print(std::cout);

    pg1.print(std::cout);
    pg2.print(std::cout);
    std::cout << std::endl;
 
    return 0;
}