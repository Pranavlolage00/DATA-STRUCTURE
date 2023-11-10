#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node* create(struct node *list,int n)
{
   struct node *newnode,*temp;
   int i;
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
void disp(struct node *list,int n)
{
   struct node *temp;
   int i;
   for(temp=list,i=1; temp!=NULL&&i<=n; temp=temp->next,i++)
   {
        if(i%2==1)
        {
           printf("%d\t",temp->data);
        }
   }
}
int main()
{
  struct node *list=NULL; 
  int n;
  printf("enter limit:");
   scanf("%d",&n);
  list=create(list,n);
  printf("\ndisplay alternate nodes..\n");
  disp(list,n);
}
