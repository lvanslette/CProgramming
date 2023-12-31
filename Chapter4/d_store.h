#ifndef _XXX_
#define _XXX_
// NOTE: Template classes can only be defined in the header file
//       - if they weren't in the header file they wouldn't be accessible, and therefore the compiler wouldn't be able to instantiate the template
#include <iostream>

template <typename T>
class store
{
    public: 
        // initialize value with item or the default object of type T
        store(const T& item = T()) : value(item) {};
        // retrieve and return data member value
        T getValue() const { return value; }
        // update the data member value to item (implemented as INLINE CODE)
        void setValue(const T& item) { value = item; }
        // diplay output in the form "Value = " value
        friend std::ostream& operator<< (std::ostream& ostr, const store<T>& obj)
        {
            ostr << "Value = " << obj.value;
            return ostr;
        }

    private:
        // data stored by the object
        T value;
};

#endif