//Practical No 21:Develop minimum 1 program to demonstrate Pointer to derived class.
#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
protected:
    char N[25];
    int id;
    int sal;

};

class Manager : public Employee
{
private:
    int branch_code;

public:
    void setdata(char n[], int i, int s, int b)
    {
        strcpy(N, n);
        id = i;
        sal = s;
        branch_code = b;
    }
    void display()
    {
        cout << "Manager name: " << N << endl;
        cout << "Id:  " << id << endl;
        cout << "Brance Code: " << branch_code << endl;
        cout << "Salary:  " << sal << endl;
    }
};

int main()
{
    cout<<"Practical No 21: Develop minimum 1 program to demonstrate Pointer to derived class."<<endl;

    Manager *manager_pointer;

    Manager manager1;

    manager_pointer = &manager1;
    manager_pointer->setdata("Mukund", 24, 50000, 2);
    manager_pointer->display();
    return 0;
}
