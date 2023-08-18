// d_time24.cpp
#include "d_time24.h"
#include <iostream>

using namespace std;


time24::time24(int h, int m) : hour(h), minute(m)
{
    normalizeTime();
}
time24 time24::duration(const time24&t)
{
    int currTime = hour*60 + minute;
    int tTime = t.hour*60 + t.minute;

    // if t is earlier than current time, throw exception (Precondition)
    if (tTime < currTime)
        throw range_error(
            "time24 duration(): argument is an earlier time");
    else
    {       
        // create autonomous object as the return value
        int minuteDifference = tTime - currTime;
        time24 outputTime = time24(0, tTime-currTime);
        outputTime.normalizeTime();
        return outputTime;
    }
    
}
void time24::readTime()
{
    char delimiter;
    cin >> hour >> delimiter >> minute;
    normalizeTime();
}
void time24::writeTime() const
{
    cout << hour << ":" << minute << endl;
}
time24 operator+ (const time24& lhs, const time24& rhs)
{
    time24 tempTime = time24(lhs.hour+rhs.hour, lhs.minute+rhs.minute);
    tempTime.normalizeTime();
    return tempTime;
}
time24 operator+ (const time24& lhs, int min)
{
    time24 tempTime = time24(lhs.hour, lhs.minute+min);
    tempTime.normalizeTime();
    return tempTime;
}
time24 operator+ (int min, const time24& rhs)
{
    time24 tempTime = time24(rhs.hour, rhs.minute+min);
    tempTime.normalizeTime();
    return tempTime;
}
time24 operator- (const time24& lhs, const time24& rhs)
{
    // convert current time and time t to minutes
    int currTime = lhs.getHour() * 60 + lhs.getMinute();
    int tTime = rhs.getHour() * 60 + rhs.getMinute();

    // if rhs is earlier than current time, throw exception
    if (tTime < currTime)
    {
        throw range_error("time24 operator - : rhs < lhs");
    }
    else
    {
        return time24(0, tTime-currTime);
    }
}
bool operator< (const time24& lhs, const time24& rhs)
{
    return (lhs.hour*60 + lhs.minute) < (rhs.hour*60 + rhs.minute);
}
ostream& operator<<(ostream& ostr, const time24& t)
{
    ostr << t.hour << ':' << t.minute;
    return ostr;
}
istream& operator>>(istream& istr, time24& t)
{
    char separatorChar;
    istr >> t.hour >> separatorChar >> t.minute;
    t.normalizeTime();
    return istr;
}
int time24::getHour() const
{
    return hour;
}
int time24::getMinute() const
{
    return minute;
}

void time24::normalizeTime()
{
    int extraHours = minute/60;
    minute %= 60;
    hour = (hour + extraHours) % 24;
}

