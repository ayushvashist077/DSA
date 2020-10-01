#include<stdio.h>
void swap(const int* p, const int*q);
int main()
{
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("Before Swapping: ");
    printf("%d %d",a,b);
    return 0;
}
void swap(const int*p, const int*q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    printf("After Swapping: ");
    printf("%d  %d",*p,*q);

}
