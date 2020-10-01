#include<stdio.h>

int main()
{
    int a[]={1,2,3,4};
    int i;
    int *ptr;
    ptr=a;
    printf("p= %d\n",*ptr);
    printf("\nptr++= %d",++*ptr);
    ++ptr;
    printf("\n++ptr= %d",*ptr);
    return (0);

}