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
struct node* sort(struct node *list)
{
   struct node *pass,*i;
   int num;
   for(pass=list; pass!=NULL; pass=pass->next)
   {
      for(i=list; i!=pass; i=i->next)
      {
         if((pass->data)<(i->data))
         {
           num=pass->data;
          pass->data=i->data;
          i->data=num;
         }
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
int main()
{
   struct node *list=NULL;
   list=create(list);
   printf("\ndisplay unsorted list:\n");
   disp(list);
   printf("\nsorted list:\n");
   list=sort(list);
   disp(list);
}
