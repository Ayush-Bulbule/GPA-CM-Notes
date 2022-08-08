//Practical 13:Write a program to demonstrate operator overloading for Unary operator.
#include <iostream>
using namespace std;

class Team
{
private:
    int points;
    int stat;

public:
    Team(int p, int s)
    {
        points = p;
        stat = s;
    }
    void getdata()
    {
        cout << "Points are: " << points << endl;
        cout << "Status is: " << stat << endl;
    }
    void operator++()
    {
        ++points;
    }

    void operator--()
    {
        --points;
    }
};
int main()
{
    cout << "Practical No 14: Write a program to demonstrate operator overloading for Unary operator.\n"<< endl;

    Team A(4, 5), B(2, 6);
    A.getdata();
    B.getdata();
    --A;
    ++B;
    cout << "Increasing Points of Team B and Decreasing Points of Team A" << endl;
    A.getdata();
    B.getdata();

    return 0;
}
