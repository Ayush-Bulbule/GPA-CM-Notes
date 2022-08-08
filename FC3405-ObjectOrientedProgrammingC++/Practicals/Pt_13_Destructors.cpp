//Practical 13:Write a program to implement constructor overloading with destructor

#include <iostream>

using namespace std;
class Cube
{
private:
    int a;

public:
    Cube()
    {
        a = 1;
        cout << "\nCube created with side : " << a << endl;
    }
    Cube(int s)
    {
        a = s;
        cout << "\nCube created with side : " << a << endl;
    }
    void getArea()
    {
        cout << "The area of cube is: " << 6 * a * a << " squareunits." << endl;
    }
    void getVolume()
    {
        cout << "The volume of cube is: " << a * a * a << " cubicunits." << endl;
    }
    ~Cube()
    {
        cout << "Cube of side " << a << " is destroyed!" << endl;
    }
};
int main()
{
    int s;
    cout << "Practical No 13: Write a program to implement constructor overloading with destructor" << endl;

    cout << "Enter the side of cube: ";
    cin >> s;
    Cube c1(s);
    c1.getArea();
    c1.getVolume();

    Cube c2;
    c2.getArea();
    c2.getVolume();

    return 0;
}
