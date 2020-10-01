#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first,*last;

 void create()
{   
  int n;
  printf("Enter the first element into the node ");
  scanf("%d",&n);
  first=(struct node*)malloc(sizeof(struct node));
  if(first==NULL){printf("\n**Memory not allocated, please try again**");}
  first->data=n;
  first->next=NULL;
  last=first;
} 
void insert(struct node *newn)
{    int n1;
  printf("\n Enter the data to be entered in the L.L ");
  scanf("%d",&n1);
  newn=(struct node *)malloc(sizeof(struct node));
  newn->data=n1;
  newn->next=NULL;
  last->next=newn;
  last=newn;
}

 void insertpos(struct node *prev)
    {   
      struct node *pos;
      int n2,n3;
      printf("\nEnter the position for entry");
      scanf("%d",&n2);
      printf("\nEnter the element to be entered in the %d position",n2);
      scanf("%d",&n3);
      pos=(struct node*)malloc(sizeof(struct node));
      pos->data=n3;
      for(int i=1; i<(n2-1); i++)
      {  
           prev=prev->next;
      }
      pos->next=prev->next;
      prev->next=pos;
       if(pos->next==NULL)
       {
           last=pos;
       }
    } 
    void insert_beg()
    {   int n;
        printf("Enter the data");
        scanf("%d",&n);
        struct node *beg;
        beg=(struct node*)malloc(sizeof(struct node));
        beg->data=n;
        beg->next=first;
        first=beg;

    }
    
    void display(struct node *t)
    {    printf("\n The elements in the linked are:  ");
    
        while(t!=NULL)
        {
            printf("%d ",t->data);
            t=t->next;
        }
    }
   


int main()
{  int n4=1,n;
    while(n4!=6)
    {
        printf("\n***CHOOSE ANY ONE***");
        printf("\n1->CREATE LINKED LIST\n2->INSERT\n3->INSERT AT POS\n4->DISPLAY\n5->INSERT AT BEGINNING\n6->EXIT\n");
        scanf("%d",&n);
        
        switch(n)
        {
        case 1:
        create();
        break;
        case 2:
        insert(first);
        break;
        case 3:
        insertpos(first);
        break;
        case 4:
        display(first);
        break;
        case 5:
        insert_beg();
        break;
        }
        n4=n;
       
        
    }
    
    
    printf("\n***THANK YOU***");
}