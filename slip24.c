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
struct node* oprat(struct node *list)
{
  struct node *temp,*temp1;
  for(temp=list; temp->next!=NULL; temp=temp->next);
  for(temp1=list; temp1->next!=temp; temp1=temp1->next);
  temp->next=list;
  list=temp;
  temp1->next=NULL;
  
  return list;
}
int main()
{
  struct node *list=NULL;
  list=create(list);
  printf("\ndisplay\n");
  disp(list);
  printf("\nremove last and add first\n");
  list=oprat(list);
  disp(list);
}

