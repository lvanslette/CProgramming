template <typename T>
class templateClass
{
    public:
        // constructor with argument of type T
        templateClass (const T& item);
        // member function returning a value of type T
        T f();
        // member function has an argument of type T
        void g(const T& item);

    private:
        T dataValue;
    
};