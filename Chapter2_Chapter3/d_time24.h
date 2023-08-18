// d_time24.h
#include <iostream>

class time24
{
    public: 
        time24(int h = 0, int m = 0);       // constructor initializes hour and minute
        void addTime(int m);                // update time by adding m minutes to the current time
            // Precondition: m >= 0
            // Postcondition: the new time is m minutes later
        time24 duration(const time24& t);   // return the length of time from the current time to some later time
            // Precondition: Time t must not be easlier than the current time
        void readTime();                    // input from the keyboard time in the form hh:mm
            // Postcondition: Assign value hh to hour and mm to minute, adjust units to the proper range
        void writeTime() const;             // display on the screen the current time in the form hh:mm

        // binary + operators: add minute and time24 objects
        friend time24 operator+ (const time24& lhs, const time24& rhs);
        friend time24 operator+ (const time24& lhs, int min);
        friend time24 operator+ (int min, const time24& rhs);

        // binary - operator: subtract 2 time24 objects if rhs is not earlier than lhs. if this precondition is not satisfied, throw a range_error exception
        friend time24 operator- (const time24& lhs, const time24& rhs);

        // comparison operators
        //friend bool operator== (const time24& lhs, const time24& rhs);
        friend bool operator< (const time24& lhs, const time24& rhs);

        // I/O operators
        friend std::ostream& operator<<(std::ostream& ostr, const time24& t);
        friend std::istream& operator>>(std::istream& istr, time24& t);

        // access member functions
        int getHour() const;                // return the hour value for the current time
        int getMinute() const;              // return the minute value for the current time

    private:
        int hour, minute;        // data members
        void normalizeTime();   // utility function that makes sure the house/minutes are within 0 to 23 / 0 to 59

};