//Write C program to perform the operations (Insert, Delete, Traverse, and Search) on
//Circular Singly Linked List.Part – I
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node *insertAtBegining(struct Node *head, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head->next;
    ptr->data = data;

    while (p->next != head)
    {
        p = p->next;
    }
    //Now p is pointing the last list element
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
struct Node *insertAfter(struct Node *head, int data, struct Node *prevNode)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head->next;
    ptr->data = data;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;

    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    //Allocate Memory to the linked list of nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 16;
    second->next = third;

    third->data = 22;
    third->next = forth;

    forth->data = 48;
    forth->next = head;

    printf(" Circular Linked List Befor insertion:  \n");
    linkedListTraversal(head);
    head = insertAtBegining(head, 8);
    head = insertAfter(head, 37, third);
    head = insertAtEnd(head, 20);
    printf("\n Circular Linked List After insertion:  \n");
    linkedListTraversal(head);
    return 0;
}