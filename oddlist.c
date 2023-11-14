#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next,*prev;
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
      newnode->prev=temp;
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
    if(temp->data%2==1)
    {
      printf("%d\t",temp->data);
    }
  }
}
int main()
{
  struct node *list=NULL;
   printf("create list....");
   list=create(list);
   printf("\nodd list\n");
   disp(list);
}
