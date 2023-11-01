#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create (struct node *list)
{
   int i,n,num;
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
void rev(struct node *list)
{
  struct node *temp;
  int i,cnt=0;
  for(temp=list; temp!=NULL; temp=temp->next)
  {
     cnt++;
  }
  while(cnt>0)
  {
    for(i=1,temp=list; i<cnt; i++)
    {
        temp=temp->next;
    }
  }
  printf("%d\t",temp->data);
  cnt--;
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
   printf("\n display org linked-list \n");
   disp(list);
   printf("\n revrese linked-list \n");
   rev(list);
}

