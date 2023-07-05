#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *newnode;
 struct node *tail;
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

void insertatbeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}

/*void insertatend()
{
    int pos;
    int i=l;
    printf("enter possition:");
    scanf("%d",&pos);
    if(pos<1 || pos>l)
    {
        printf("invalid position");
    }
    else if (pos==1)
    {
        insertatbeg();
    }
    else
    {
        struct node *newnode,*tail;
        tail=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        while(i<pos-1)
        {
            tail=tail->next;
            i++;
        }

    }
    newnode=tail->next;
    newnode->prev=tail;
    tail->next=newnode;
    newnode->next=tail->next;
    
}*/

void main()
{
    create();
    insertatend();
    display();
}