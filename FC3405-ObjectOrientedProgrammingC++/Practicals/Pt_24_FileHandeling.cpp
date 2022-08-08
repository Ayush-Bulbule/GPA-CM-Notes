#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Student
{
private:
    int StudentId;
    char StudentName[20];

public:
    void setData()
    {
        cout << "Enter StudentId: ";
        cin >> StudentId;
        cout << "Enter Student Name: ";
        cin.ignore();
        cin.getline(StudentName, 19);
        cout << "Student Initilized!!"<<endl;
    }
    void readData()
    {
        cout << "Student Id: " << StudentId << endl;
        cout << "Student Name: " << StudentName << endl;
    }
};

int main()
{
    cout<<"Practical 24: Write a program to read and write data to and from a file\n" << endl;
    Student student1;
    student1.setData();

    ofstream fout;
    fout.open("studentData.txt", ios::app);
    fout.write((char *)&student1, sizeof(student1));
    cout<<"\nStudent Data Saved To File\n"<<endl;
    fout.close();


    cout<<"\n\nReading Data From File"<<endl;
    ifstream fin;
    fin.open("studentData.txt", ios::in);
    fin.read((char *)&student1, sizeof(student1));
    fin.seekg(0);
    student1.readData();

    return 0;
}
