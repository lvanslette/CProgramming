#include <iostream>
#include "../Chapter2_Chapter3/d_time24.h"



int main() {
    // create a time24 object with values of 5pm, call it t and a pointer variable timePtr
    time24 time(17,00), *timePtr;
    timePtr = &time;
    // combine the * operator and the dot operator to execute member functions
    // (*timePtr).writeTime() is the same as time.writeTime()
    (*timePtr).writeTime();
    // which is the same thing as
    timePtr->writeTime();
    // the above is just shorthand.
    
}