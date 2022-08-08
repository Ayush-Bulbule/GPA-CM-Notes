//Write C program to perform PUSH and POP operations on stack using array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int push(struct stack *s, int value)
{

    if (s->top == s->size)
    {
        printf("Stack Full!!");
        return 0;
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
        s->size=s->size-1;
        return value;
    }
}
int main()
{
    int i;
    struct stack *s;

    s->top = -1;
    s->size = 10;
    s->arr = (int *)malloc(s->size * sizeof(int));

    for (int i = 0; i < s->size; i++)
    {
        push(s, i);
    }
    for (int i = 0; i < s->size; i++)
    {
        printf("%d ", s->arr[i]);
    }

    printf("\nPopped Value");
    int val = pop(s);
    printf("\n%d ", val);


    return 0;
}