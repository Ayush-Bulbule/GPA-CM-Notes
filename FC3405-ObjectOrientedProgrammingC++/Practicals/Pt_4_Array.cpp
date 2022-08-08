//Practical NO : 4 Develop a program to implement 1-dimension array

#include <iostream>

using namespace std;

int main()
{
    cout<<"Practical No 4:Develop a program to implement 1-dimension array\n"<<endl;

    //Array Decleration By specifizing size and initilizing Elements
    string arr[6] = {"Ayush", "Pratik", "Soham", "Sahil", "Tilak", "Varad"};

    cout << "One Dimensional Array of Strings: " << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Value at index " << i << "  " << arr[i] << endl;
    }
    return 0;
}
