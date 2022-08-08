// Write C program to perform the operations (Insert, Delete, Traverse, and Search) on
// Singly Linked List. Part – I
//Cases:--
/*
1.Insertion at Beggining of the list
2.Insertion in Between
3.Insertion at End
4.Insertion after a Node
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
//Traversal Code
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//case 1:
struct Node *insertAtBegging(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->next = head;
    ptr->data = data;
    return ptr;
}
//case 2:
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;
    struct Node *p = head;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//case 3:
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//case 4:
struct Node *insertAfter(struct Node *head, int data, struct Node *prevNode)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = prevNode;

    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
//case 1:
struct Node *deleteBeggining(struct Node *head)
{

    struct Node *ptr = head;

    head = head->next;

    free(ptr);

    return head;
}

//case 2:
struct Node *deleteAtIndex(struct Node *head, int index)
{

    struct Node *p = head;
    struct Node *q = p->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
}

// case 3:
struct Node *deleteEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = p->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;

    free(q);
    return head;
}

//case 4:Deleting a element with given value
struct Node *deleteValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = p->next;

    while (q->data != value && q->next != NULL)
    {

        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    //Linking HEad
    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 25;
    third->next = forth;

    forth->data = 21;
    forth->next = NULL;

    printf("Linked List Before Insertion: \n");
    //Before Inserting
    linkedListTraversal(head);

    // head = insertBegging(head, 56);
    // head = insertAtIndex(head, 56,2);
    // head = insertAtEnd(head, 56);
    head = insertAfter(head, 56, third);

    printf("Linked List After Insertion: \n");
    //After inserting at Beggining
    linkedListTraversal(head);

    return 0;
}
