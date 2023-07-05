#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
        printf("enqueue: %d\n",x);
    }
    else
    {
        rear++;
        queue[rear] = x;
        printf("enqueue: %d\n",x);
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow condiion");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("dequeue: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("print queue \n");
        for (i = front; i < rear + 1; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("peek(current): %d\n", queue[front]);
    }
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
    return 0;
}