//Practical 8:Write a program to implement friend function.

#include <iostream>

using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //creating friend
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
main()
{
    cout<<"Practical 8:Write a program to implement friend function.\n"<<endl;
    Complex c1, c2, sum;

    c1.setdata(2, 3);
    cout << "Number 1: ";
    c1.printNumber();
    c2.setdata(4, 5);
    cout << "Number 2: ";
    c2.printNumber();

    sum = sumComplex(c1, c2);

    cout << "Sum of above numbers is :";
    sum.printNumber();
}
