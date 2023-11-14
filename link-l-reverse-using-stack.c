#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct stack
{
  int data[MAX];
  int top;
}s;
struct node
{
  int data;
  struct node *next;
};
void init()
{
  s.top=-1;
}
int isempty()
{
   if(s.top==-1)
   return 1;
   else
   return 0;
}
int isfull()
{
  if(s.top==MAX-1)
  return 1;
  else
  return 0;
}
void push(int num)
{
  if(isfull())
  {
    printf("stack is full..");
  }
  else
  {
     s.top++;
     s.data[s.top]=num;
  }
}
int pop()
{
   int val;
  if(isempty())
  {
     printf("stack is empty...");
  }
  else
  {
     val=s.data[s.top];
     s.top--;
     return val;
  }
}
void displinkl(struct node *list)
{
  struct node *temp;
  for(temp=list; temp!=NULL; temp=temp->next)
  {
     printf("%d\t",temp->data);
  }
}
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
        list=temp=newnode;
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
   for(temp=list; temp!=NULL; temp=temp->next)
   {
      push(temp->data);
   }
}
void disp()
{
  int i;
  for(i=s.top; i>=0; i--)
  {
    printf("%d\t",pop());
  }
}
int main()
{
  struct node *list=NULL;
  init();
  printf("\n create list \n");
  list=create(list);
  printf("\n display orignal linked-list \n");
  displinkl(list);
  printf("\n");
  rev(list);
  printf("\n display reverse using stack\n"); 
  disp();
}

