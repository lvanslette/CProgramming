template <typename T>
class dynamicClass
{
    public:
        // constructor with argument of type T
        dynamicClass (const T& m1, const T& m2) : member1(m1)
        {
            // allocate dynamic memory
            member2 = new T(m2);
            std::cout << "Constructor: " << member1 << '/' << *member2 << std::endl;
        }
        // destructor
        ~dynamicClass()
        {
            std::cout << "Destructor: " << member1 << '/' << *member2 << std::endl;
            delete member2;
        }

    private:
        T member1;
        T *member2;
    
};