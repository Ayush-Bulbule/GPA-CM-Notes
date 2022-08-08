//Develop a program to demonstrate control structures (for, while, do-while).
#include <iostream>

using namespace std;

int main()
{
    cout << "Practical 3: Develop a program to demonstrate control structures (for, while, do-while)." << endl;
    cout << "Printing Prime numbers from 1 to 50: " << endl;
    int i;
    for (i = 1; i <= 100; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            cout << i << "\t";
        }
    }
    return 0;
}