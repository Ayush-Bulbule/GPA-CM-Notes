// Vitual Functions Runtime Polymorphism
#include <iostream>

using namespace std;

class BaseClass
{
protected:
    int var_base = 10;

public:
    virtual void display()
    {
        cout << "Value of Base class variable: " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
    int var_derived = 20;

public:
    void display()
    {
        cout << "Value of derived class variable: " << var_derived << endl;
    }
};

int main()
{
    cout<<"Practical 22: Develop minimum 1 program to Implement run time polymorphism using virtual functions."<<endl;
    BaseClass *base_class_pointer;
    BaseClass base_class_obj;


    DerivedClass *derived_class_pointer;
    DerivedClass derived_class_obj;

    base_class_pointer = &derived_class_obj;

    base_class_pointer->display();
    derived_class_pointer = &derived_class_obj;
    derived_class_pointer->display();

    return 0;
}
