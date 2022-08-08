
// Write C program to implement a Circular Queue
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q)
{
    if ((q->f == q->r + 1) || (q->f == 0 && q->r == q->size - 1))
        return 1;
    return 0;
}
int isEmpty(struct queue *q)
{
    if (q->f == -1)
        return 1;
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("This q is Full!");
    }
    else
    {
        if (q->f == -1)
            q->f = 0;
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("\n Inserted -> %d", val);
    }
}
int dequeue(struct queue *q)
{
    int val;
    if (isEmpty(q))
    {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else
    {
        val = q->arr[q->f];
        if (q->f == q->r)
        {
            q->f = -1;
            q->r = -1;
        }
        // Q has only one val, so we reset the
        // queue after dequeing it. ?
        else
        {
            q->f = (q->f + 1) % q->size;
        }
        printf("\n Deleted val = %d \n", val);
        return (val);
    }
}
void printQueue(struct queue *q)
{
    int i;
    if (isEmpty(q))
        printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front = %d ", q->f);
        printf("\n Items = ");
        for (i = q->f; i != q->r; i = (i + 1) % q->size)
        {
            printf("%d ", q->arr[i]);
        }
        printf("%d ", q->arr[i]);
        printf("\n Rear= %d \n", q->r);
    }
}
int main()
{
    struct queue q;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    printf("Practical 12:Circular Queue Implementation\n");
    enqueue(&q, 34);
    enqueue(&q, 44);
    enqueue(&q, 54);
    enqueue(&q, 64);
    printQueue(&q);

    int val = dequeue(&q);
    printf("\n Dequeued val: %d\n", val);
    printQueue(&q);

    return 0;
}