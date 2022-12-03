#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
int count=0;

void create()
{
    head = 0;
    // struct node *temp;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("enter the data:\n");
        scanf("%d", &newnode->data);

        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        count++;
        printf("do you want to cantinue(0,1)");
        scanf("%d", &choice);
    }
}

void display()
{

    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
}

void insertatlocatio()
{
    int pos, i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the possition you want to enter ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("invaliod possition\n");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        } // newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

int main()
{
    create();
    insertatlocatio();
    display();
    return 0;
}