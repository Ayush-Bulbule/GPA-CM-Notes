//Comipe time Polymorphism -> Function / operator Overloading
#include <iostream>
using namespace std;

class Circle
{
private:
    float R;

public:
    Circle(int r)
    {
        R = r;
        cout << "R = " << r << endl;
    }
    void area()
    {
        double a = R * 3.114 * R;
        cout << "R = " << R << endl;
        cout << "Area of Circle is " << a << endl;
    }

    void operator++()
    {
        R++;
    }
    void operator--()
    {
        --R;
    }
};
main()
{
    cout << "Practical 22: Develop minimum 1 program to Implement Compile time polymorphism." << endl;
    cout << "Compile time polymorphism using Operator Overloading:\n\n"
         << endl;
    Circle a(5);
    a.area();
    ++a;
    a.area();

    Circle b(5);
    b.area();
    --b;
    b.area();
}