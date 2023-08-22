#include <iostream>
#include "dynamicClass.h"

void destroyDemo(int m1, int m2)
{
    // call the constructur
    dynamicClass<int> obj(m1,m2);

    // function ends, call the destructor
}

int main() {
    int initialValue = 3;
    int *ptr = new int(initialValue);
    std::cout << *ptr << std::endl;
    delete ptr;
    // using the custom-made dynamicClass, calls constructor
    dynamicClass<int> dyn(1, 2), *ptrDynaimcObj;
    // allocate a dynamicClass object dynamically with new, calls constructor
    ptrDynaimcObj = new dynamicClass<int> (100,200);

    // calls class destructor for dynamicClass object that has numbers 100,200
    delete ptrDynaimcObj;

    // by initializing an object in the function, we are calling the constructor
    // when the function ends, since the variable is local to that function, we call the destructor
    destroyDemo(300,400);

    // at the end of main, destroys dyn object, calling the destructor for the dyn object

}