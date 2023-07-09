#include <stdio.h>

int l, r, mid;
/* int array[5]={1,2,3,4,5}; */
 int BinarySearch(int array[],int n,int data)
{
    l = 0, r = n - 1;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (data == array[mid])
            return mid;
        else if (data < array[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}


