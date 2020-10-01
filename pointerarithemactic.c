//program to find sum of array using pointer arithematic
#include<stdio.h>
void sum(int *ptr,int x);
void search(int *ptr, int y,int n);
void main(void)
{
    int n,x;
    printf("\nenter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the number of the elements to be entered\n ");
    scanf("%d",&x);
    printf("\nenter %d numbers\n",x);
    for(int i=0;i<x; i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr,x);
    int y;
    printf("\n enter the number to be searched in the array");
    scanf("%d",&y);
    search(arr,y,n);
}
void sum(int *ptr,int x)
{
    int s=0;
    int *const ptrend=ptr+x;
    for(;ptr<ptrend;ptr++)
    {
        s+=*ptr;
        
    }
    printf("the sum of the array is= %d",s);
}
void search(int *ptr, int y,int n)
{
   int  *ptrend,count=0;;
    ptrend=ptr+n;
    for(;ptr<ptrend;ptr++)
    {
        if(*ptr==y)
        count++;
    }
    if(count>0)
    {
        printf("\nthe element is %d is present in the array %d times\n",y,count);
    }
    else
    {
        printf("\nelement %d is not present in the array\n");
    }
    
}


