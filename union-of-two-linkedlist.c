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
struct node* concat(struct node *list1,struct node *list2)
{
   struct node *temp1;
   for(temp1=list1; temp1->next!=NULL; temp1=temp1->next);
   temp1->next=list2;
    return list1;
}
struct node* sort(struct node *list)
{
   struct node *pass,*i;
   int temp;
   for(pass=list; pass!=NULL; pass=pass->next)
   {
     for(i=list; i!=pass; i=i->next)
     {
       if(pass->data>i->data)
       {
         temp=pass->data;
         pass->data=i->data;
         i->data=temp;
       }
     }
   }
  return list;
}
void union1(struct node *list)
{
   struct node *temp;
   
      for(temp=list; temp->next!=NULL; temp=temp->next)
      {
        if(temp->data!=temp->next->data)
          {
             printf("%d\t",temp->data);
          }     
      }
}
int main()
{
   struct node *list1=NULL,*list2=NULL;
   printf("\n create 1st list:\n");
   list1=create(list1);
   disp(list1);
    printf("\ncreate 2nd list:\n");
   list2=create(list2);
   disp(list2);
   list1=concat(list1,list2);
   printf("\n concat list...\n");
   disp(list1);
  list1=sort(list1);
   printf("\n union of two linked list \n");
   union1(list1);  
}
