// prompt the user for the time a movie starts along with the length
// use the + operator to determine when the movie ends
// output the waiting time at bus stop, assuming the bus gets there at 10:45pm (22:45), and the time the movie ends
#include "d_time24.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    time24 startMovie, movieLength, endMovie, busArrival(22,45), waitingTime;

    bool equal = busArrival < busArrival;
    if (!equal) 
    {
        cout << "ballsacks" << endl;
    }
    // prompt user for time a movie starts along with the length of the movie
    cout << "Enter the time the movie starts and its length: ";
    cin >> startMovie >> movieLength;

    // // compute the time movie ends and waiting time for the bus
    // endMovie = startMovie + movieLength;
    // waitingTime = busArrival - endMovie;

    // cout << "Movie ends at " << endMovie << endl;
    // cout << "Waiting time for the bus is" << waitingTime << endl;

    return 0;

}