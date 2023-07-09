#include <stdio.h>
#include <stdlib.h>


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

 
 
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

void main()
{
    struct node *root;
    root=0;
    root=create();
    printf("preorder is:\n");
    preorder(root);
    printf("\n");
    printf(" inorder is:\n");
    inorder(root);
    printf("\n");
    printf(" postorder is:\n");
    postorder(root);
}