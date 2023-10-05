#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
   int data;
   struct stack *next;
}NODE;
NODE *top;
void init()
{
  top=NULL;
}
int isempty()
{
  if(top==NULL)
  return 1;
  else
  return 0;
}
void push(int num)
{
  NODE *newnode;
  newnode=(NODE*)malloc(sizeof(NODE));
  newnode->data=num;
  newnode->next=top;
  top=newnode;
  printf("push succesfull=%d",num);
}
int pop()
{
    NODE *temp=top;
  int val;
  if(isempty())
  {
     printf("stack is empty don't pop");
     return 0;
  }
  else
  {
     val=temp->data;
     top=top->next;
     free(temp);
     return val;
  }
  
}
void disp()
{
   NODE *temp,*next;
   for(temp=top; temp!=NULL; temp=temp->next)
   {
     printf("%d\t",temp->data);
   }
}
int peek()
{
  return (top->data);
}
int main()
{
   int ch,num;
   init();
   do{
    printf("\n 1-push \n 2-pop \n 3-display \n 4-peek \n");
    printf("enter choice :");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("enter number:");
             scanf("%d",&num);
             push(num);
             break;
      case 2:printf("poped value=%d",pop());
             break;
      case 3:disp();
             break;
      case 4:printf("peeked value=%d",peek());
            break;    
    }
   
    }while(ch<5);
}

