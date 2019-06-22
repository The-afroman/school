/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

#include <string>
#include <iostream>
#include <iomanip>

//emum of months
typedef enum
{
    january,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
}months;

class date
{
    public:
        date();
        date(months month, int day, int year);
        ~date();
        //overloads i-stream for printing date
        friend std::ostream &operator<<(std::ostream &os, const date &obj);

    private:
        months month;
        int day;
        int year;
};