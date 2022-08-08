//Practical No 6:Develop a program that implements a class and use it with objects.
#include <iostream>
using namespace std;

class Box //Class named Box
{

private:
    int H, B, L;

public:
    void setdata(int l, int b, int h)
    {
        H = h;
        B = b;
        L = l;
    }

    void getdata()
    {

        cout << "Length of Box is " << L << "cm" << endl;
        cout << "Breadth of Box is " << B << "cm" << endl;
        cout << "Height of Box is " << H << "cm" << endl;
    }
    int getVolume()
    {
        return (L * B * H);
    }
};
int main()
{
    cout << "Practical No 6: Develop a program that implements a class and use it with objects.\n"
         << endl;
    Box b1; //Creating objects of class Box
    b1.setdata(20, 10, 30);
    b1.getdata();
    cout << "\nThe volume of Box b1 is " << b1.getVolume() << " cucm.\n"
         << endl;

    Box b2;
    b2.setdata(40, 20, 60);
    b2.getdata();
    cout << "\nThe volume of Box b2 is " << b2.getVolume() << " cucm." << endl;

    return 0;
}

/*Develop a program that implements a class and use it with objects. 2
7. Develop a program that implements a class and create array of objects. 2
8. Write a program to implement friend function. 2
9. Write a program to implement inline function. 2
10. Write a program to implement Constructor for creation of Object. 3
11. Write a program to implement Multiple constructors. 3
12. Write a program to implement Copy Constructors. 3
13. Write a program to implement constructor overloading with destructor.*/
