#include<stdio.h>
#include<stdlib.h>
struct node 
{
  int data;
  struct node *next;
}*front,*rear,*newnode,*temp;
void init()
{
  front=rear=NULL;
}
int isempty()
{
  if(front==NULL)
  return 1;
  else
  return 0;
}
void insert(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
   if(isempty())
   {
      front=rear=newnode;
   }
   else
   {
      if(isempty())
      printf("queue is underflow");
      else
      {
        rear->next=newnode;
        rear=newnode;
        printf("insert successfully..");
      }
   }
}
void delq()
{
  int val;
   if(isempty())
   {
     printf("queue is underflow");
   }
   else
   {
     temp=front;
     val=front->data;
     front=front->next;
     free(temp);
     printf("deleted value=%d",val);
   }
}

void disp()
{
  for(temp=front; temp!=NULL; temp=temp->next)
  {
    printf("%d\t",temp->data);
  }
}

int main()
{
   int ch,num;
   init();
   do
   {
      printf("\n 1-insert \n 2-delete \n 3-display");
      printf("enter choice:");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:printf("enter number:");
               scanf("%d",&num);
               insert(num);
               break;
        case 2:delq();
               break;
        case 3:disp();
      }
   
   }while(ch<4);
}

