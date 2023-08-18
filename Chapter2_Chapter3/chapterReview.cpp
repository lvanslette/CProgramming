#include <iostream>
#include <string>
#include <array>
#include <stdio.h>
#include <cmath>

#include "d_time24.h"

using namespace std;

int binarySearch(const int arr[], size_t arrLen, int target)
{
    // get middle of the array
    int mid = arrLen/2 - 1;
    // get starting index of sub-array
    int start = 0;
    // get ending index of sub-array
    int end = arrLen - 1;

    int iterations = 0;

    while(arr[mid] != target)
    {
        if (arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;

        // if we have accomplished greater than log2(total length), 
        // then we know we will never find it so exit and return an impossible index: the length of the array
        if (iterations++ > log2(arrLen))
        {
            mid = arrLen;
            break;
        }
    }
    return mid;
}

template <typename T>
T func(const T list[], int n) 
{
    T m1 = list[0], m2 = list[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if (list[i] < m1)
        {
            m1 = list[i];
        }
        if (list[i] < m2)
        {
            m2 = list[i];
        } 
    }
    return m1-m2;
}


int main() {
    printf("Answers to Review Exercises:\n\n");

    // // Review Exercises Question 3
    // int sortedList[] = {1,2,3,4,5,6,7,8};
    // size_t n = (sizeof(sortedList) / sizeof(sortedList[0]));
    // int target = 9;
    // int index = binarySearch(sortedList, n, target);
    // cout << "Target value: " << target << endl;
    // cout << "Index of value: " << index << endl;

    // Reveiew Exercises Question 8
    int intArr[] = {7,5,2,3,8,9};
    time24 timeArr[] = {time24(5,15), time24(15,45), time24(12,0)};

    cout << func(intArr, 6) << endl;
    cout << func(timeArr, 3) << endl;


    return 0;

}