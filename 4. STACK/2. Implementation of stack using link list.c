//  Implementation of stack using link list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("list is empty");
    }
    else
    {
        while (temp!=0)
        {    
            printf("display is %d \n", temp->data);
            temp = temp->next;
        }
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("underflow");
    }
    else
    {
        printf("pop is %d \t \n", top->data);
        free(temp);
    }
}

void peek()
{
    if (top == 0)
    {
        printf("stack is empty");
    }
    else
    {
        printf("top element is %d \n \t", top->data);
    }
}

void main()
{
    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();
}