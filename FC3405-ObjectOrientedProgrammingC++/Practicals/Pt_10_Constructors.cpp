//Practical 10:Write a program to implement Constructor for creation of Object.
#include <iostream>
#define PI 3.141592653589793238
using namespace std;
class Circle
{
private:
    double R;

public:
    Circle(double r)
    {
        R = r;
        cout<<"Radius of Circle: "<<R<<endl;
    }

    void area()
    {
        double area = PI * R * R;
        cout << "Area of Circle is " << area << endl;
    }
    void circumference()
    {
        double circumference = 2 * PI * R;
        cout << "Circumfernce of Circle is " << circumference << endl;
    }
};
int main()
{
    cout<<"Practical 10:Write a program to implement Constructor for creation of Object.\n"<<endl;
    Circle c1(4);
    c1.area();
    c1.circumference();

    return 0;
}
