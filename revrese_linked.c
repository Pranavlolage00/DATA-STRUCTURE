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
     temp->next=NULL;
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
  for(temp=list; temp->next!=NULL; temp=temp->next)
  {
     printf("%d",temp->data);
  }
}
struct node* reverse(struct node *list)
{
   struct node *temp1=NULL,*temp2=NULL,*temp3=NULL;
   temp1=list;
   while(temp1!=NULL)
   {
      temp3=temp2;
      temp2=temp1;
      temp1=temp1->next;
      temp2->next=temp3;
   }
   list=temp2;
   return list;
}

int main()
{
   struct node *list=NULL;
   list=create(list);
   disp(list);
   printf("\n");
   list=reverse(list);
   disp(list);
}


