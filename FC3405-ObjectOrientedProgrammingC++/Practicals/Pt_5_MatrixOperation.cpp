//Practical No 5: Develop a program to perform matrix operation using multi-dimensional array.
#include <iostream>

using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];

    cout<<"Practical No 5: Develop a program to perform matrix operation using multi-dimensional array.\n"<<endl;

    //Taking frist input
    cout << "Enter Frist matrix : " << endl;
    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
            cin >> a[i][j];

    //taking second matrix input
    cout << "Enter Second matrix : " << endl;

    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
            cin >> b[i][j];

    cout << "Entered 1st Matrix: " << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Entered 2nd Matrix: " << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "Addition of matrix: " << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Subtraction of matrix: " << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
