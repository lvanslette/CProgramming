#include <iostream>
#include <vector>


// given a vector reference v, sort v
template <typename T>
void insertionSort(std::vector<T>& v)
{
    int i,j,n = v.size();
    T target;
    // for each element in v, place v[i] into a sublist: 
    //   v[0] ... v[i-1], 1 <= i < n, so it is in the correct position
    for(i = 1; i < n; i++)
    {
        // index j scans down list from v[i] looking for correct position to locate target
        // once target is found, assign it to v[j]
        j = i;
        target = v[i];
        // locate insertion point b scanning downward, as long as target < v[j-1] and we haven't encountered the beginning of the list
        while (j > 0 && target < v[j-1])
        {
            // shift elements up list to make room for insertion
            v[j] = v[j-1];
            j--;
        }
        // the location is found; insert target
        v[j] = target;

    }
}

template <typename T>
std::vector<T> join (std::vector<T> a, std::vector<T> b)
{
    std::vector<T> c;
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    return c;
}


int main() {
    int a_arr[] = {1,1,1,1,1};
    std::vector<int> a(a_arr, a_arr+sizeof(a_arr)/sizeof(int));        // vector created from array a_arr
    int b_arr[] = {2,2,2,2};
    std::vector<int> b(b_arr, b_arr+sizeof(b_arr)/sizeof(int));        // vector created from array b_arr

    // create a new vector by joining two vectors
    //std::vector<int> c = join(a,b);
    std::vector<int> c = join<int>(b,a);

    // sort the vector c
    insertionSort(c);

    // print each of the vector c's elements
    for(int i = 0; i < c.size(); i++)
        std::cout << c[i];
    std::cout << std::endl;

    

    return 0;
}