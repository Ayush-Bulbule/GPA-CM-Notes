/**Implement a ‘C’ program for performing following operations on Array: Creation,
Insertion, Deletion, Display */

#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100

//Function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

//Function to Insert new Element in array
int insertElement(int arr[], int num, int pos, int size)
{
    //If position is not valid
    if (pos > size + 1 || pos < 0)
    {
        printf("Position is not Valid please enter a position between 0 to %d", size);
    }
    else
    {
        //Making Room (Space For New Element at given position)
        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        //Insert element at given position
        arr[pos - 1] = num;
        return size + 1;
    }
}
//finding element in array
int findElement(int arr[], int num, int size)
{
    int i;
    for (i = 0; i < size; i++)
        if (arr[i] == num)
            return i;

    return -1;
}
//function to delete an element from array
int deleteElement(int arr[], int num, int size)
{
    int pos;
    pos = findElement(arr, num, size);
    if (pos == -1)
    {
        printf("Element not found!!");
        return size;
    }
    else
    {
        for (int i = pos; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        return size - 1;
    }
}

int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;

    // To Get size of array from user

    printf("Enter size of array:  ");
    scanf("%d", &size);

    // Creating Array of Preferred Size
    for (i = 0; i < size; i++)
    {
        printf("Plese enter Elements in array: ");
        scanf("%d", &arr[i]);
    }

    printArray(arr, size); //Func call to print array

    printf("Element an elemet to be inserted: ");
    scanf("%d", &num);

    printf("Enter position: ");
    scanf("%d", &pos);

    size = insertElement(arr, num, pos, size);

    printf("Array after insertion: ");
    printArray(arr, size);

    //To delete an element
    printf("Enter an element to be deleted: ");
    scanf("%d", &num);

    size = deleteElement(arr, num, size);
    printArray(arr, size);

    return 0;
}