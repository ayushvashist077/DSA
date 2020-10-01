#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int eno;
    char ename[20];
    float empsal;

};
int main()
{
    struct employee *emp;
    int n,i;
    printf("Enter the no of records to be stored: ");
    scanf("%d",&n);
    emp=(struct employee *)malloc(n*sizeof(struct employee));
    if(emp==NULL)
    printf("error insufficient memory");
    else
    printf("Memory allocated successfully \n");
    //( taking inputs)//
    for(i=0; i<n; i++)
    {
     printf("Enter the employee number: \n");
     scanf("%d",&(emp+i)->eno);
     printf("Enter the name of the employee: \n");
     scanf("%s",(emp+i)->ename);
     printf("Enter the salary of the employee: \n");
     scanf("%d",&(emp+i)->empsal);
    }
    //(printing the info of the employees)//
    for(i=0; i<n;i++)
    {
     printf("The name of the employee is= %s \n The employee no is= %d \n The salary of the employee is: %d\n",(emp+i)->ename,(emp+i)->eno,(emp+i)->empsal);
    }
    return (0);
        

}
