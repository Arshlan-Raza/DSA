#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,*ptr3;
    int arr= {1,2,3,4,5};
    ptr1 = arr;
    ptr2 = arr+2;
    // ptr3=ptr2-ptr1;
    printf(" %d",ptr2-ptr1);
    return 0;
}