#include<stdio.h>
 void push(int arr[],int n);
 void pop(int arr[]);
 void disp(int arr[],int n);
 int top=-1;
 int main()
 {   int n,x,n1=1;
     printf("Enter the size of the stack: ");
     scanf("%d",&n);
     int arr[n];
     while(n1!=0)
     {    printf("\n1->PUSH AN ELEMENT\n2->POP AN ELEMENT\n3->DISPLAY STACK");
          scanf("%d",&x);
         switch(x)
         {
             case 1:
             push(arr,n);
             break;
             case 2:
             pop(arr);
             break;
             case 3:
             disp(arr,n);
             break;
         }
         n1=x;
     }
     printf("%d",top);


 }
 void push(int arr[],int n)
 { int data;
     if(top==n-1)
     {
         printf("stack overflow");
     }
     else
     {
         printf("enter the data to be entered");
         scanf("%d",&data);
         top=top+1;
         arr[top]=data;
    }
     
 }
 void pop(int arr[])
 {   int data1;
     if(top==-1)
     printf("stack is empty (enderflow)");
     else
     {
         data1=arr[top];
         top=top-1;
    }
    printf("element %d removed from the stack",data1);
     
 }
 void disp(int arr[],int n)
 {
     int i;
     for(int i=top; i>-1; i--)
     {
         printf("%d ",arr[i]);
     }
 }
 
