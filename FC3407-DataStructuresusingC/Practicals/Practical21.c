//Write C program to find out largest nodes in a Binary Search Tree
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Represent a node of binary tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

//Represent the root of binary tree
struct node *root = NULL;

//createNode() will create a new node
struct node *createNode(int data)
{
    //Create a new node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    //Assign data to newNode, set left and right children to NULL
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

//largestElement() will find out the largest node in the binary tree
int largestElement(struct node *temp)
{
    //Check whether tree is empty
    if (root == NULL)
    {
        printf("Tree is empty\n");
        return 0;
    }
    else
    {
        int leftMax, rightMax;
        //Max will store temp's data
        int max = temp->data;
        //It will find largest element in left subtree
        if (temp->left != NULL)
        {
            leftMax = largestElement(temp->left);
            //Compare max with leftMax and store greater value into max
            max = (max > leftMax) ? max : leftMax;
        }

        //It will find largest element in right subtree
        if (temp->right != NULL)
        {
            rightMax = largestElement(temp->right);
            //Compare max with rightMax and store greater value into max
            max = (max > rightMax) ? max : rightMax;
        }
        return max;
    }
}

int main()
{
    //Add nodes to the binary tree
    root = createNode(15);
    root->left = createNode(20);
    root->right = createNode(35);
    root->left->left = createNode(74);
    root->right->left = createNode(55);
    root->right->right = createNode(6);

    //Display largest node in the binary tree
    printf("Largest element in the binary tree: %d", largestElement(root));
    return 0;
}