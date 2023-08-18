// program uses store class to create objects associated with  int, double, and string types. 
// using the overloaded << operator, it outputs the value in each object. 
// the program illustrates the member functions getValue() and setValue() for the store object with string data
#include <iostream>
#include <string>
#include "d_store.h"

int main()
{
    // declare three different types of store objects
    store<int> intStore;
    store<double> realStore(2.718);
    store<std::string> strStore("Template");

    std::cout << "The values stored by the objects are:" << std::endl;
    std::cout << intStore << std::endl;
    std::cout << realStore << std::endl;
    std::cout << strStore << std::endl;

    std::cout << "The concatentation of 'Template' in strStore and " << "'Class' is: " << std::endl;
    // access current value strStore and concatenate " Class"
    // update the value in strStore with the new string
    strStore.setValue(strStore.getValue() + " Class");
    std::cout << strStore << std::endl;

    return 0;
}