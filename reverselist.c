#include<stdio.h>

#include<malloc.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create (struct node * head)
{
   int i,n;
   struct node *newnode,*temp;
   printf("enter limit:-");
   scanf("%d",&n);
   for(i=0;i<n; i++)
   {
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("enter value");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
	if(head==NULL)
	{
	   head=newnode;
	   temp=newnode;
	}
	else
	{
	  temp->next=newnode;
	  temp=newnode;
	}
      }
      return head;

   }
void disp( struct node *head)
{
   struct node *temp;
   for(temp=head; temp!=NULL; temp=temp->next)
   {
      printf("%d   ",temp->data);

   }
}
void dispr(struct node *head)
{
  int a[100],k=0,i;
  struct node *temp;
  for(temp=head;temp!=NULL;temp=temp->next)
   {
      a[k++]=temp->data;
   }
   int n=k;
   for(i=n-1;i>=0;i--)
   printf("%d->",a[i]);
  
}
 int main()
 {
   struct node *head=NULL;
     head=create(head);
     disp(head);
     printf("\n\n");
     dispr(head);
   }


