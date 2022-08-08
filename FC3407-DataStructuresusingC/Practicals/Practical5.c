//TODO:Implement a ‘C’ program to sort an array using Selection Sort
//!Points to remember:
//*1)Selection Sort is not Stable:
//*2)Selection Sort is not Adaptive
//*3)Sorting in minimum number of swaps

#include <stdio.h>
#include <conio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSort(int arr[], int size)
{
    int indexofMin, temp;
    for (int i = 0; i < size - 1; i++)
    {
        indexofMin = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexofMin])
            {
                indexofMin = j;
            }

            temp = arr[i];
            arr[i] = arr[indexofMin];
            arr[indexofMin] = temp;
        }
    }
}
int main()
{
    int arr[] = {18, 3, 2, 33, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Input Array: \n");
    printArray(arr, size);
    selectionSort(arr, size);
    printf("Sorted Array: \n");

    printArray(arr, size);

    return 0;
}