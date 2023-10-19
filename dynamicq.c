#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front,*rear;
void initq()
{
  front=NULL;
  rear=NULL;
}
void insertq(int num)
{
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=NULL;
  if(front==NULL)
  {
    front=rear=newnode;
  }
  else
  {
    rear->next=newnode;
    rear=newnode;
  }
}
int isempty()
{
  if(front==NULL)
  return 1;
  else
  return 0;
}
void deleteq()
{
  int val;
  struct node *temp;
  if(isempty())
  {
    printf("queue is underflow..");
  }
  else
  {
    val=front->data;
    temp=front;
    front=front->next;
    free(temp);
    printf("deleted value=%d",val);
  }
}
 void disp()
 {
    struct node *temp;
    for(temp=front; temp!=NULL; temp=temp->next)
    {
       printf("%d\t",temp->data);
    }
 }
 int main()
 {
   int ch,num;
   initq();
   do
   {
     printf("\n 1-insert \n 2-delete \n 3-display \n 4-exit \n");
     printf("enter choice:");
     scanf("%d",&ch);
     
     switch(ch)
     {
        case 1:printf("enter number:");
               scanf("%d",&num);
               insertq(num);
               break;
        case 2:deleteq();
               break;
        case 3:disp();
               break;
     }
   }while(ch<4);
 }
