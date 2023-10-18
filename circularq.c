#include<stdio.h>
#define MAX 5
struct Queue
{
  int data[MAX];
  int rear,front;
}*q;
void init()
{
q->front=-1;
q->rear=-1;
}
int isfull()
{
   if((q->front==0 && q->rear==MAX-1)||(q->rear==q->front-1))
    return 1;
    else
    return 0;
}
int isempty()
{
  if(q->front==-1)
    return 1;
  else
  return 0;
}
void insert(int num)
{
   if(isfull())
   {
     printf("queue is overflow...");
   }
   else
   {
      if(q->front==-1)
      {
       q->front=0;
      }
      
      q->rear=q->rear+1%MAX;
      q->data[q->rear]=num;
      printf("insert successfully..");
      
   }
}
void del()
{
    int val;
    if(isempty())
    {
      printf("queue is underflow..");
    }
    else
    {
       val=q->data[q->front];
       if(q->front==q->rear)
       {
         q->rear=-1;
         q->front=-1;
       }
       q->front=q->front+1%MAX;
       printf("deleted value=%d",val);
       
    }
  }

void disp()
{
   int i;
   if(isempty())
   {
      printf("queue is underflow:");
   }
   else
   {
     for(i=q->front; i<=q->rear; i=i+1%MAX)
     {
        printf("%d",q->data[i]);
     }
     printf("%d",q->data[i]);
   }

}

int main()
{
   int ch,num;
   init();
   
   do
   {
     printf("\n 1-insert \n 2-delete \n 3-diaplay \n 4-exit \n");
     printf("enter choice:");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:printf("enter number:");
              scanf("%d",&num);
              insert(num);
              break;
       case 2:del();
              break;
       case 3:disp();
              break;
     }
   
   }while(ch<4);
}


