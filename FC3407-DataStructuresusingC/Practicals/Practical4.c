//Implement a ‘C’ program to sort an array using Bubble Sort.
#include <stdio.h>
#include <conio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
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
    int arr[] = {1, 2, 9, 4, 5, 10, 6, 7, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nInput Array: ");
    printArray(arr, size);

    bubbleSort(arr, size);
    printf("Sorted Array: ");
    printArray(arr, size);
}