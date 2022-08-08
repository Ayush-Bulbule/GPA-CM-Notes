//Practical 16:Write a program for implementing single inheritance.

#include <iostream>
using namespace std;

class Shape
{
protected:
    int breadth;
    int length;
    int side;

public:
    void setdata(int S)
    {
        side = S;
    }
    void setdata(int L, int B)
    {
        breadth = B;
        length = L;
    }
};
class Rectangle : public Shape
{
public:
    void getdata()
    {
        cout<<"Length of Rectangle: "<<length<<endl;
        cout<<"Breadth of Rectangle: "<<breadth<<endl;
    }
    void rectarea()
    {
        int area;
        area = length * breadth;
        cout << "Area of Rectangle is " << area << endl;
    }
};
main()
{
    cout << "Practical 16: Write a program for implementing single inheritance.\n"
         << endl;
    Rectangle a;
    a.setdata(20, 30);
    a.getdata();
    a.rectarea();

    return 0;
}



/*
class Square : public Shape
{
public:
    void squarea()
    {
        int area;
        area = side * side;
        cout << "Area of Rectangle is " << area << endl;
    }
};

Square b;
    b.setdata(10);
    b.squarea();

*/



