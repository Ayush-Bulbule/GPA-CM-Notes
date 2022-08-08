#include <iostream>

using namespace std;

int main()
{

    float a = 1.2;
    int c;
    char b = 'a';
    cout << "Practical 1.3 :" << endl;
    c = (int)a + 10; //float a is Explicitely converted to int
    cout << "Sum is : " << c << endl;
    //Explicitely converting char to integer
    cout << "Integer value of b is : " << (int)b << endl;
    return 0;
}