#include<stdio.h>
#include<stdlib.h>

    
struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode; 

void create()
{
head=0;
struct node *temp;
int choice = 1;


while(choice)
  {
    newnode = (struct node*)malloc(sizeof(struct node));
    
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    
    newnode->next=0;
    
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("do you want to cantinue(0,1)");
    scanf("%d",&choice);
   }
}


void display()
  {
    
struct node *temp;
temp=head;
while(temp!=0)
    {
       printf("%d \t",temp->data);
       temp=temp->next;
    }
  }
 void insertend()
{
    struct node *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data u want to insert : ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
  int main(){
      create();
      insertend();
      display();
      return 0;
  }
