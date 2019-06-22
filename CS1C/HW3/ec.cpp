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

class Invoice
{
    public:
        Invoice();
        Invoice(Time pTime);
        friend ostream& operator<<(ostream& os, const Invoice& i);
    private:
        Time purchase_time;
};

Time::Time() : hours{0}, minutes{0}, seconds{0}
{}
Time::Time(int h,int m,int s) : hours{h}, minutes{m}, seconds{s}
{}

ExtendedTime::ExtendedTime() : Time(), time_zone{TimeZone(0)}
{}
ExtendedTime::ExtendedTime(int h, int m, int s, TimeZone z) : Time(h,m,s), time_zone{z}
{}

Invoice::Invoice() : purchase_time{Time()}
{}
Invoice::Invoice(Time purchase_time) : purchase_time{purchase_time}
{}

ostream& operator<<(ostream& os, const Time& t)
{
    os << t.hours
       << ':';
    os << t.minutes
       << ':';
    os << t.seconds;
    return os;
}

ostream& operator<<(ostream& os, const ExtendedTime& et)
{
    os << Time(et);
    os << ", ";
    os << et.time_zone;
    return os;
}

ostream& operator<<(ostream& os, const Invoice& i)
{
    os << i.purchase_time;
    return os;
}

int main()
{
    ExtendedTime timeObj(2,3,4,TimeZone(2));
    Invoice Invoice(Time(2,3,4));
    cout << Invoice << endl;
    cout << timeObj << endl;
    return 0;
}