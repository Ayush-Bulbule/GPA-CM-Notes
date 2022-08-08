//Implement a ‘C’ program to search a particular data from the given Array using: (i)Linear Search */

#include <stdio.h>
#include <conio.h>
#define MAX 100

//function to perform linear search
int linearSearch(int arr[], int n, int key)
{
    int result;
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

//Function to print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[MAX];
    int n, size, result;

    printf("Enter the Number of Elements in Array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter elements in array: ");
        scanf("%d", &arr[i]);
    }
    printf("Input Array: ");
    printArray(arr, size);

    printf("Eneter an Element to Search : ");
    scanf("%d", &n);
    result = linearSearch(arr, size, n);
    (result == -1) ? printf("Element not Found in Array") : printf("Element is present at index %d", result);

    return 0;
}