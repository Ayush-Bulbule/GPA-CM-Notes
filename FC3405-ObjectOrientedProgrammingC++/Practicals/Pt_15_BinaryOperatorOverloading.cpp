//Practical 15: Write a program to demonstrate operator overloading for Binary operator.
#include <iostream>
using namespace std;

class Circle
{
private:
    float r, area;

public:
    Circle(float R = 0)
    {
        r = R;
    }
    void display()
    {
        cout << "The Radius of Circle is: " << r << endl;
    }
    float getarea()
    {
        area = 3.14 * r * r;
        return area;
    }
    Circle operator+(Circle b)
    {
        Circle t;
        t.r = r + b.r;
        return t;
    }
    Circle operator-(Circle b)
    {
        Circle t;
        t.r = r - b.r;
        return t;
    }
};
int main()
{
    cout << "Practical 15: Write a program to demonstrate operator overloading for Binary operator.\n"
         << endl;

    Circle a(10),
        b(2), c;
    cout << "The value of Circle 'a' " << endl;
    a.display();
    cout << "\nThe value of Circle 'b' " << endl;
    b.display();

    c = a + b;
    cout << "\nThev Valuesm of a+b is: " << endl;
    c.display();
    cout << "The area of circle c is: " << c.getarea() << endl;
    return 0;
}
