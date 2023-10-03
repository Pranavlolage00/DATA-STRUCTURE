#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   struct node *next; 
}node;
node *top;
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
   node* newnode;
   newnode=(node*)malloc(sizeof(node));
   newnode->data=num;
   newnode->next=top;
   top=newnode;
   printf("push successfully...");
}
int pop()
{
   int val;
   node *temp;
   if(isempty())
   {
      printf("stack is empty don't pop");
   }
   else
   {
     temp=top;
     val=temp->data;
     top=top->next;
     free(temp);
     return val;
   }
   
}
int peek()
{
  return (top->data);
}
void display()
{
  node *temp;
  for(temp=top; temp!=NULL; temp=temp->next)
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
     printf("\n 1-push \n 2-pop \n 3-peek \n 4-display \n ");
     printf("enter choice:");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:printf("enter number:");
                scanf("%d",&num);
                push(num);
                break;
        case 2:printf("poped value=%d",pop());
               break;
        case 3:printf("peek value=%d",peek());
                break;
        case 4:display();
               break;
     }
  }while(ch<5);
}
