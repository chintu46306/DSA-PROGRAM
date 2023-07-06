#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("enqueue : %d \n", temp->data);
            temp = temp->next;
        }
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("empty queue");
    }
    else
    {
        printf("dequeue : %d \n", front->data);
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("empty queue");
    }
    else
    {
        printf("peek : %d \n", front->data);
    }
}
int main()
{
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
    peek();
    return 0;
}