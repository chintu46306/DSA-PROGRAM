#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
struct node *nextnode;

void create()
{
    head = 0;
    //   struct node *temp;
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
        printf("do you want to cantinue(0,1)\n");
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
void deletefromspecificposition()
{
    int pos, i=1;
    temp=head;
    printf("enter position to delete\n");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    nextnode->next;
    temp->next=nextnode->next;
    free(nextnode);
}
int main()
{
    create();
    deletefromspecificposition();
    display();
    return 0;
}