//Practical 12:Write a program to implement Copy Constructors
#include <iostream>
using namespace std;

class vehical
{
private:
    int wheels;
    int doors;
    int seats;

public:
    vehical() {}
    vehical(int w, int d, int s);
    vehical(vehical &obj, int s); //Copy Constructor
    void display();
};
vehical::vehical(int w, int d, int s)
{
    wheels = w;
    doors = d;
    seats = s;
}
vehical::vehical(vehical &obj, int s)
{
    wheels = obj.wheels;
    doors = obj.doors;
    seats = s;
}
void vehical::display()
{
    cout << "No of wheels: " << wheels << endl;
    cout << "No of doors: " << doors << endl;
    cout << "No of seats: " << seats << endl;
}
main()
{
    cout << "Practical No 12: Write a program to implement Copy Constructors\n" << endl;
    vehical car, truck, bus;
    car = vehical(4, 4, 5);
    bus = vehical(6, 2, 48);
    truck = vehical(bus, 2);

    cout << "\nDetails of Car: " << endl;
    car.display();
    cout << "\nDetails of Bus: " << endl;
    bus.display();
    cout << "\nDetails of Truck: " << endl;
    truck.display();
}
