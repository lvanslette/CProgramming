/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct item
{
    int index;
    int value;
};

void partition(int (&arr)[], int n, int pivot)
{
    // first element, starting from the left, that is larger than pivot
    item itemFromLeft;
    itemFromLeft.index = 0;
    itemFromLeft.value = arr[itemFromLeft.index];
    // first element, starting from the right, that is smaller than pivot
    item itemFromRight;
    itemFromRight.index = n-1;
    itemFromRight.value = arr[itemFromRight.index];
    
    // first element, starting from the left, that is larger than pivot
    while (itemFromLeft.value <= pivot)
    {
        itemFromLeft.index++;
        itemFromLeft.value = itemFromLeft[itemFromLeft.index];
    }
    // first element, starting from the right, that is smaller than pivot
    while (itemFromLeft.value >= pivot)
    {
        itemFromRight.index--;
        itemFromRight.value = itemFromLeft[itemFromRight.index];
    }
    
    while (itemFromRight.index > itemFromLeft.index)
    
    
}

void quicksort(int (&arr)[], int n)
{
    // pick a pivot
    int pivot = arr[n-1];
    // partition the array
    partition(arr, n, pivot);
    // recurse on the left and right hand sides of pivot
}


int
main ()
{
  int arr[10] = { 3, 6, 8, 9, 1, 3, 2, 5, 9, 6 };
  
  quicksort(arr, 10);

  return 0;
}
