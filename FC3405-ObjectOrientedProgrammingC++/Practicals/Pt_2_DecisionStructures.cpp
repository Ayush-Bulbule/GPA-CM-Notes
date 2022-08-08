#include <iostream>

using namespace std;

int main()
{
    float marks;
    cout << "Practical 2:Develop a program to implement decision making statements(if-else, switch)" << endl;
    cout << "Enter Your marks : ";
    cin >> marks;
    //Demonstrating if-else in C++
    if (marks <= 100 && marks >= 90)
        cout << "You are passed with A Grade." << endl;
    else if (marks < 90 && marks >= 80)
        cout << "You are passed with B Grade." << endl;
    else if (marks < 80 && marks >= 70)
        cout << "You are passed with C Grade." << endl;
    else if (marks < 70 && marks >= 60)
        cout << "You are passed with D Grade." << endl;
    else if (marks < 60 && marks >= 45)
        cout << "You are passed." << endl;
    else if (marks < 45 && marks > 0)
        cout << "You are Fail." << endl;
    else
        cout << "Invalid marks!!" << endl;
    return 0;
}