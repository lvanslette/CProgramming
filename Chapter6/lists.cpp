#include <list>
#include <iostream>

template <typename T> typename std::list<T>::iterator seqSearch(typename std::list<T>::iterator first, typename std::list<T>::iterator last, const T& target)
{
    // create general iterator iter, start at first
    typename std::list<T>::iterator iter = first;
    // compare list elements with target until we have found it or we have found the end of the list
    while( iter != last && (*iter !=  target))
    {
        iter++;
    }

    // if iter returns as last, we know we haven't found the value
    return iter;
}

int main()
{
    // create empty list
    std::list<int> intList;
    // list with 8 elements of value 0.0
    std::list<double> realList(8);

    // list iterator moves through the list
    std::list<double>::iterator iter = realList.begin();
    // auto tells the compiler to deduce the correct type for the variable
    auto it = realList.begin();
    
    // move the iterator by 5 elements
    advance(iter, 5);
    // assign the list element at index 5 to value 8.5
    *iter = 8.5;
    // print the element that at iterator
    std::cout << *iter << std::endl;
    // constant iterator
    std::list<double>::const_iterator c_iter = realList.begin();

    // list implementation of sequential (linear) search
    std::list<double>::iterator first = realList.begin();
    std::list<double>::iterator last = realList.end();
    double target = 8.5;
    iter = seqSearch<double>(first, last, target);

    if(iter == last)
    {
        std::cout << "Didn't find the target value of " << target << std::endl;
    }
    else
    {
        std::cout << "Found the value " << target << " at index " << std::distance(first, iter) << std::endl;
    }

    iter = realList.end();
    iter++;
    std::cout << *iter << std::endl;
    return 0;

}