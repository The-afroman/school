#include <string>
#include <iostream>

class date
{
    public:
        date();
        ~date();
    
    private:
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

        months month;
        int day;
        int year;
}