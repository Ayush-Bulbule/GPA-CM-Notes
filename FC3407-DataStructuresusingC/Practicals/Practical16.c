#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top;

void push(int data)
{

    // Create new node temp and allocate memory
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = data;

    // Put top pointer reference into temp next
    temp->next = top;

    // Make temp as top of Stack
    top = temp;
}

int isEmpty()
{
    return top == NULL;
}

// Utility function to return top element in a stack
int peek()
{

    // Check for empty stack
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop()
{
    struct Node *temp;

    if (top == NULL)
    {
        printf("Stack UnderFlow\n");
        exit(1);
    }
    else
    {
        temp = top;
        // Assign second node to top
        top = top->next;
        // Destroy connection between
        // first and second
        temp->next = NULL;

        // Release memory of top node
        free(temp);
    }
}

void printStack()
{
    struct Node *temp;

    // Check for stack underflow
    if (top == NULL)
    {
        printf("Stack UnderFlow");
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            // Print node data
            printf("%d ", temp->data);

            // Assign temp next to temp
            temp = temp->next;
        }
    }
}

int main()
{

    printf("Stack Using Linked List\n\n");
    push(11);
    push(22);
    push(33);
    push(44);

    printStack();

    printf("\nTop element is %d\n", peek());

    pop();
    pop();
    printStack();
    printf("\nTop element is %d\n", peek());

    return 0;
}
