#include<stdio.h>
int main()
{
    int n,i,data,low,high,mid;
    printf("enter the number of element :");
    scanf("%d",&n);
    int array[n];
    printf("enter the element in a sorted manner: \n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("enter the value to find : ");
    scanf("%d",&data);
    low=0;
    high=n-1;
    mid=(low+high)/2;

   while(low<=high)
    {
        if(array[mid]<data)
          low=mid+1;
        else if(array[mid]==data)
        {
            printf("%d found at the location %d",data,mid+1);
            break;
        }
        else
        high=mid-1;
        mid=(low+high)/2;
    }


 /*while(low<high)
 {
    mid=(low+high)/2;
    if(a==array[mid])
    return mid;
    else if (a<array[mid])
    high=mid-1;
    else
    low=mid+1;
 } */
 if(low>high)
 printf("%d is not present in the array.",data);
    return 0;
}