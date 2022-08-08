//Practical 18:Write a program for implementing multiple inheritance.
#include <iostream>
using namespace std;

class Shape
{
protected:
    int breadth;
    int length;

public:
    void setdata(int L, int B)
    {
        breadth = B;
        length = L;
    }
};
class cuttingCost
{
public:
    float getCuttingCost(float area)
    {
        return area * 90;
    }
};
class Field : public Shape, public cuttingCost
{

public:
    float fieldarea()
    {
        return (length * breadth);
    }
};

main()
{
    cout << "Practical 18: Write a program for implementing multiple inheritance.\n"
         << endl;

    float area, coast;
    Field a;
    a.setdata(20, 30);
    area = a.fieldarea();
    coast = a.getCuttingCost(area);

    cout << "Area of field is: " << area << endl;
    cout << "Coast of cutting grass is: " << coast << endl;

    return 0;
}
