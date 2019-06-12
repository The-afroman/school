#include <iostream>
#include <iomanip>

using namespace std;

enum TimeZone
{
    PACIFIC,
    MOUNTAIN,
    CENTRAL,
    EASTERN
};

class Time
{
    public:
        Time();
        Time(int hrs, int min, int sec);
    private:
        int hours;
        int minutes;
        int seconds;
        friend ostream& operator<<(ostream& os, const Time& t);
};

class ExtendedTime: public Time
{
    public:
        ExtendedTime();
        ExtendedTime(int hrs, int min, int sec, TimeZone z);
        friend ostream& operator<<(ostream& os, const ExtendedTime& et);

    private:
        TimeZone time_zone;
};

Time::Time()
{hours=0;minutes=0;seconds=0;}

Time::Time(int h,int m,int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

ExtendedTime::ExtendedTime()
{
    Time();
    time_zone = TimeZone(0);
}

ExtendedTime::ExtendedTime(int h, int m, int s, TimeZone z)
{
   Time(h,m,s);
   time_zone = z;
}

ostream& operator<<(ostream& os, const Time& t)
{
    os << t.hours
       << ':';
    os << t.minutes
       << ':';
    os << t.seconds
       << ", ";
    return os;
}

ostream& operator<<(ostream& os, const ExtendedTime& et)
{
    os << Time(et);
    os << et.time_zone;
    return os;
}

int main()
{
    ExtendedTime *timePtr;
    ExtendedTime timeObj(2,3,4,TimeZone(2));

    cout << timeObj;
    return 0;
}