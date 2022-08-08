//Pointer to Object Demonstration Practical
#include <iostream>
using namespace std;

class Field
{
private:
    int l, b;

public:
    Field(int L, int B)
    {
        l = L;
        b = B;
    }
    int getCoast()
    {
        return (200 * (l * b));
    }
};

int main()
{

    cout << "Practical No 20: Develop minimum 1 program to demonstrate Pointer to object.\n"
         << endl;
    Field f1(90, 80);
    Field f2(120, 80);

    Field *ptr = &f1;
    cout << "Cost of Field 1 is: " << ptr->getCoast() << endl;

    ptr = &f2;
    cout << "Cost of Field 2 is: " << ptr->getCoast() << endl;

    return 0;
}
