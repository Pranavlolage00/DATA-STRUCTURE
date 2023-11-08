#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node* create(struct node *list)
{
   struct node *newnode,*temp;
   int i,n;
   printf("enter limit:");
   scanf("%d",&n);
   for(i=0; i<n; i++)
  {
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter value:");
   scanf("%d",&newnode->data);
   if(list==NULL)
   {
     temp=list=newnode;
     newnode->next=list;
   }
   else
   {
      temp->next=newnode;
      temp=newnode;
      newnode->next=list;
   }
  } 
   return list;
}
void disp(struct node *list)
{
  struct node *temp=list;
  do
  {
    printf("%d->",temp->data);
    temp=temp->next;
  }while(temp!=list);
}
int main()
{
   struct node *list=NULL;
   list=create(list);
    disp(list);
}
