//Practical 11:Write a program to implement Multiple constructors
#include <iostream>
using namespace std;

class shape
{
private:
    int l, b;

public:
    shape(int L, int B)
    {
        l = L;
        b = B;
    }
    shape(int S)
    {
        l = S;
        b = S;
    }
    int area()
    {
        int a = l * b;
        return a;
    }
    int perimeter()
    {
        int p = 2*(l + b);
        return p;

    }
};
int main()
{
    cout<<"Practical 11:Write a program to implement Multiple constructors\n"<<endl;
    shape x(20);
    cout << "Area of Square 'x' is " << x.area() << endl;
    cout << "Perimeter of Square 'x' is " << x.perimeter() << endl;

    shape y(10, 20);
    cout << "\nArea of Rectangle 'y' is " << y.area() << endl;
    cout << "Perimeter of Rectangle 'y' is " << y.perimeter() << endl;
    return 0;
}
