//  Implementation of stack using Array
#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    printf("enter the data : \n");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d \n", item);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d \n", stack[top]);
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d \t", stack[i]);
    }
}

void main()
{
    int ch;

    do
    {
        printf("enter choice: \n 1:push \n 2:pop \n 3:peek \n 4:diplay \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("invalid choice");
        }
    } while (ch != 0);
}