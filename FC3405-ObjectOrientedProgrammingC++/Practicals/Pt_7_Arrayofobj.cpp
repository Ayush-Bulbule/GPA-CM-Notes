//Practical 7: Develop a program that implements a class and create array of objects
#include <iostream>

using namespace std;

class employee
{
private:
    char name[30];
    float age;
    char job[20];

public:
    void getdata();
    void putdata();
};
void employee::getdata()
{
    cout << "Enter name of Employee: ";
    cin >> name;
    cout << "Enter Job: ";
    cin >> job;
    cout << "Enter of age: ";
    cin >> age;
}
void employee::putdata()
{
    cout << "Name of Emploee: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Job: " << job << endl;
}
int main()
{
    cout<<"Practical 7: Develop a program that implements a class and create array of objects\n"<<endl;
    const int size = 3;

    employee manager[size]; //declaring array of Obj

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter details of Emploee no : " << i + 1 << endl;
        manager[i].getdata();
    }

    cout << "\nSaved details of employees:" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << "Details of manager: " << i + 1 << endl;
        manager[i].putdata();
    }

    return 0;
}
