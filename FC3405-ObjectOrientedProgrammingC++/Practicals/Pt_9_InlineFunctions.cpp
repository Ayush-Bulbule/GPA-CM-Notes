//Practical No 9: Write a program to implement inline function.
#include <iostream>
using namespace std;

class Operation
{
private:
    int a, b;

public:
    Operation(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum();
    void diff();
    void mult();
    void div();
};
//creating inline functions
inline void Operation::sum()
{
    cout << "Sum of entered numbers is " << a + b << endl;
}
inline void Operation::diff()
{
    cout << "Difference of entered numbers is " << a - b << endl;
}
inline void Operation::mult()
{
    cout << "Multiplication of entered numbers is " << a * b << endl;
}
inline void Operation::div()
{
    cout << "Division of entered numbers is " << a / b << endl;
}
main()
{
    cout<<"Practical No 9: Write a program to implement inline function.\n"<<endl;
    int n1, n2;
    cout << "Enter num 1:";
    cin >> n1;
    cout << "Enter num 2:";
    cin >> n2;

    Operation op1(n1, n2);
    op1.sum();
    op1.diff();
    op1.mult();
    op1.div();
}
