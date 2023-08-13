/*
Use time24 objects to compute cost of parking a car in a garage if the rate is 6$/hour
- User inputs time at which a customer engters and exits the garage
- Program outputs a receipt that includes the enter and exit times, the length of time the car has parked there, and the total charges
*/

#include <iostream>
#include "d_time24.h"

using namespace std;

int main() 
{
    const double PERHOUR_PARKING = 6.00;

    time24 enterGarage, exitGarage, parkingTime;

    // length of billing time, in hours
    double billingHours;

    cout << "Enter the times the car enters and leaves the garage: ";
    enterGarage.readTime();
    exitGarage.readTime();

    // get the total time in minutes that the car was parked in the garage
    parkingTime = enterGarage.duration(exitGarage);

    // calculate the cost of parking
    billingHours = parkingTime.getHour() + parkingTime.getMinute()/60.0;

    cout << "Car enters at: ";
    enterGarage.writeTime();

    cout << "Car exits at: ";
    exitGarage.writeTime();

    cout << "Parking time: ";
    parkingTime.writeTime();

    cout << "Cost is $" << billingHours * PERHOUR_PARKING << endl;

    return 0;
}
