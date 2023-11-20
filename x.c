#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node* create(struct node *list)
{
   int i,n;
   struct node *newnode,*temp;
   printf("enter limit:");
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter value:");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(list==NULL)
       {
          temp=list=newnode;
       }
       else
       {
         temp->next=newnode;
         temp=newnode;
       }
   }
   return list;
}
void disp(struct node *list)
{
  struct node *temp;
  for(temp=list; temp!=NULL; temp=temp->next)
  {
    printf("%d\t",temp->data);
  }
}
void union1(struct node *list1,struct node *list2)
{
int flag;
  struct node *temp1,*temp2;
  for(temp1=list1; temp1!=NULL; temp1=temp1->next)
  {flag=0;
     for(temp2=list2; temp2!=NULL;temp2=temp2->next)
     {
        if(temp1->data==temp2->data)
        {
          flag=1;
        }
     }  
     if(flag==0)
       printf("%d\t",temp1->data);
  }
}
int main()
{
  struct node *list1=NULL,*list2=NULL;
  printf("\ncreate 1st list\n");
  list1=create(list1);
  disp(list1);
  printf("\ncreate 2nd list\n");
  list2=create(list2);
  disp(list2);
  printf("\nunion of two linkedlist:\n");
  union1(list1,list2);
}
