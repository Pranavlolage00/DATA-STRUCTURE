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
   struct node *temp=list;
   printf("%d\t",temp->data);
   for(temp=list->next->next; temp!=NULL; temp=temp->next->next)
   {
      printf("%d\t",temp->data);
   }
}
int main()
{
  struct node *list=NULL; 
  list=create(list);
  printf("\ndisplay alternate nodes..\n");
  disp(list);
}
