//Practical No 19: Write a program for implementing Constructor in Derived class
#include <iostream>
#include<string.h>

using namespace std;

class Vehicle
{
protected:
    int id;

public:
    Vehicle(int n)
    {
        id = n;
    }
};

class Bike : public Vehicle
{
private:
    char company_name[10];

public:
    Bike(char c[],int n) : Vehicle(n)
    {
        strcpy(company_name,c);
    }
    void getDetails()
    {
        cout << "The Company name is: " << company_name << endl;
        cout << "The Vehical id is : " << id << endl;
    }
};
int main()
{
    cout<<"Practical No 19: Write a program for implementing Constructor in Derived class.\n"<<endl;
    Bike a("Honda", 250);
    a.getDetails();

    return 0;
}
