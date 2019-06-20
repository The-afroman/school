#include <string>
#include <iostream>

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
    
    private:

        months month;
        int day;
        int year;
};