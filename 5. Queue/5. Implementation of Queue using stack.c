#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N],s2[N];
int top1=-1;
int top2=-1;
int count=0;
void enqueue(int x)
{
    push1(x);
    count++;
}

void push1(int data)
{
    if(top!==N-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        s1[top1]=data;
    }
}

void dequeue()
if(top1==-1 && top2==-1)
{
    printf("queue is empty")
}
else
{
    for(i=0;i<count,i++)
    {
        a=pop1();
        push2(a);
        b=pop2();
        prontf("%d",b);
        count--;
        for(i=0;i<count;i++)
        {
            a=pop2();
            push(a);
        }
    }
}

int pop()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}

void display()
{
    int i;
    for(i=0;i<=top1;i++)
    {
        printf("%d",s1[i]);
    }
}

void main()
{
    enqueue(5);
       enqueue(2);
          enqueue(-1);
               dequeue();
                  dequeue(7);
                  display();
}