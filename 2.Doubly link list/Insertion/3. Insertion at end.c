#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *newnode ,*tail;
void create()
{
    head=0;
    int choice=1;
    struct node *tail;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("Do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
}


void insertatend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;

 /*   head->prev=newnode;
    newnode->next=head;
    head=newnode;*/
}

void display()
{
    struct node *tail;
    tail=head;
    while(tail!=0)
    {
        printf("%d\t",tail->data);
        tail=tail->next;
    }
}
void main()
{
    create();
    insertatend();
    display();
}
