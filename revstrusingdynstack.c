#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top;
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
void push(char ch)
{
   struct stack *newnode;
   newnode=(struct stack*)malloc(sizeof(struct stack));
   newnode->data=ch;
   newnode->next=top;
   top=newnode;
}
char pop()
{
  struct stack *temp;
   char val;
   if(isempty())
   {
      printf("stack is empty:");
      return 0;
   }
   else
   {
      val=top->data;
      temp=top;
      top=top->next;
      free(temp);
      return val; 
   }
}
int main()
{
  char s1[100],ch;
  int i;
  printf("\nenter string to reverse:");
  scanf("%s",&s1);
  for(i=0; s1[i]!='\0'; i++)
  {
    push(s1[i]);
  } 
  printf("\noringnal string=%s",s1);
  printf("\nreverse string=...");
  for(i=0; s1[i]!='\0'; i++)
  {
    printf("%c\t",pop());
  }
}
