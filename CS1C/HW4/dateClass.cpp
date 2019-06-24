/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

#include "dateClass.h"

date::date() : month{january}, day{1}, year{2019}
{}
date::date(months month, int day, int year) : month{month}, day{day}, year{year}
{}
date::~date(){};

std::ostream &operator<<(std::ostream &os, const date &obj)
{
    std::string sMonth;
    std::string sDay;

    //handle 0 before single digit days and months
    if(obj.month > 9)
        sMonth = std::to_string(obj.month+1);
    else
        sMonth = '0' + std::to_string(obj.month+1);
    
    if(obj.day > 9)
        sDay = std::to_string(obj.day);
    else
        sDay = '0' + std::to_string(obj.day);
    
    os << sMonth + "/" + sDay + "/" + std::to_string(obj.year);
    return os;
}

std::istream &operator>>(std::istream &is, date &obj)
{
    int month;

    std::cout << "enter date" << std::endl;

    std::cout << "day: ";
    is >> obj.day;
    std::cout << "month: ";
    is >> month;
    std::cout << "year: ";
    is >>obj.year;
    obj.month = months(month);

    return is;
}