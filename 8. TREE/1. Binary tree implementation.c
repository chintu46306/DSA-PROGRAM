#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 struct node *create()
 {
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data(-1 for no node):");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d:",x);
    newnode->left=create();
    printf("Enter right child of %d:",x);
    newnode->right=create();
    return newnode;
 }

 void main()
 {
    struct node *root;
    root=0;
    root=create();
 }
