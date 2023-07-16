#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node* create(struct node *head)
{
  struct node *newnode,*temp;
  int i,n;
  printf("enter limit:-");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter value:-");
  scanf("%d",&newnode->data);
  newnode->next=NULL;

  if(head==NULL)
  {
      head=temp=newnode;
      temp=newnode;
  }
     return head;
  }

}
void disp(struct node *head)
{
  struct node *temp=head;
  while(temp!=NULL)
  {
    printf("%d\t",&temp->data);
    temp=temp->next;

  }

}
struct node* insertbeg(struct node *head,int num)
{
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=head;
  head=newnode;

  return head;

}
struct node* insertend(struct node *head,int num)
{
  struct node *newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=NULL;
  for(temp=head; temp->next!=NULL; temp=temp->next);
  temp->next=newnode;

  return head;

}
int main()
{
  struct node  *head=NULL;
  int ch,num;
  clrscr();
  do
  {
    printf("\n 1-create \n 2-disp \n 3-insertbeg \n 4- insertend\n");
    printf("enter chice:-");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: head=create(head);
	     break;
      case 2:disp(head);
	   break;
      case 3:printf("enter number :-");
	    scanf("%d",&num);
	    head=insertbeg(head, num);
	     break;
      case 4:printf("enter number:-");
	     scanf("%d",&num);
	     head=insertend(head,num);
	     break;
      default:printf("invalid choice:-");
    }


  }while(ch<5);
  getch();
  return  0;

}







































