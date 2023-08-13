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

