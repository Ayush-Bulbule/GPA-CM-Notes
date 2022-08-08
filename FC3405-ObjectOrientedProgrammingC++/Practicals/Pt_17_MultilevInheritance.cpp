//Practical 17: Write a program for implementing multi level inheritance.
#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;

public:
    void setId(int a)
    {
        id = a;
    }
    void putId()
    {
        cout << "Id of Employee is: " << id << endl;
    }
};
class Salary : public Employee
{
protected:
    int sal;
    int bonus;

public:
    void setsalary(int s, int b)
    {
        sal = s;
        bonus = b;
    }
    void getsalary()
    {
        cout << "Salary is :" << sal << endl;
        cout << "Bonus is: " << bonus << endl;
    }
};
class Package : public Salary
{
private:
    float package;

public:
    void getPackage()
    {
        package = (sal * 12) + (2 * bonus);
        cout << "The Yearly Package is : " << package << endl;
    }
};
int main()
{
    cout << "Practical 17: Write a program for implementing multi level inheritance.\n"
         << endl;
    Package Employee1;
    Employee1.setId(7);
    Employee1.setsalary(50000, 4000);
    Employee1.putId();
    Employee1.getsalary();
    Employee1.getPackage();

    return 0;
}
