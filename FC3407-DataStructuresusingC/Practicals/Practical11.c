//Write C program to perform INSERT and DELETE operations on queue using array.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

void printStack(struct stack *s)
{
    for (int i = 0; i < s->top; i++)
    {
        int t;
        printf("Enter Element at %d : %d\n", i + 1, s->arr[i]);
    }
}
int push(struct stack *s, int value)
{
    if (s->size == s->top)
    {
        printf("Stack Full!!");
    }
    else
    {
        s->top = s->top + 1;
        s->arr[s->top] = value;
        return 1;
    }
}
int pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Empty!!");
        return 0;
    }
    else
    {
        int value = s->arr[s->top];
        s->top = s->top - 1;
        s->size = s->size - 1;
        return value;
    }
}
int main()
{
    int i;
    char ch;
    int n = 0;
    struct stack *s, *temp;

    s->top = -1;
    s->size = 10;
    s->arr = (int *)malloc(s->size * sizeof(int));
    temp->top = -1;
    temp->size = 10;
    temp->arr = (int *)malloc(s->size * sizeof(int));

    printf("How many Elements Do You want to Add: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        int t;
        printf("Enter Element at %d : ", i + 1);
        scanf("%d", &t);
        push(s, t);
    }

    printf("Do You Want to Print Your List?(y/n): ");
    fflush(stdin);
    scanf("%c", &ch);

    if (ch == 'y')
    {
        printStack(s);
    }
    printf("Do You Want To Reverse List?(y/n): ");
    for (int i = 0; i <= s->top; i++)
    {
        printf("Enter Element at %d : %d\n", i, pop(s));
        push(temp, pop(s));
    }
    printStack(s);
    return 0;
}