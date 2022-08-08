#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.14; //Constant
    int r;                  //variables
    double a;

    cout << "Develop minimum 2 programs using constants variables arithmetic expression operators,exhibiting data type conversion " << endl;
    cout << "Enter the Radius of circle: ";
    cin >> r;
    a = pi * r * r; //Using operators

    cout << "Araea of circle is : " << a << endl;

    return 0;
}