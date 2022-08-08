//Implement a ‘C’ program to search a particular data from the given Array using Binary Search

#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l < r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
        {
            r = m - 1;
        }
    }
    return -1;
}

//Function to print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; //array
    int n = sizeof(arr) / sizeof(arr[0]);       //number of elements
    int x = 6;

    printf("Input Array:");
    printArray(arr, n);
    printf("Element to be Found : %d\n\n", x);
    int result = binarySearch(arr, 0, n, x); //Element to be found

    (result == -1) ? printf("Element Not Found!!") : printf("Element Found At index : %d", result);
}

void