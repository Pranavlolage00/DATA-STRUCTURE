#include<stdio.h>
#include<stdlib.h>
struct node
{
  char data;
  struct node *next;
};
struct node *top;
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
void push(char c)
{
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=c;
   newnode->next=top;
   top=newnode;
}
char pop()
{
  if(isempty())
  {
    printf("stack is empty don't pop()");
  }
  else
  {
   struct node *temp=top;
   char val;
   val=top->data;
   top=top->next;
   free(temp);
   return val;
  }
}
int main()
{
  char s1[20];
  int i;
  init();
  printf("\n enter string to reverse:");
  scanf("%s",&s1);
  for(i=0; s1[i]!='\0'; i++)
  {
    push(s1[i]);
  }
  printf("\ndisplay reverse string:\n");
  for(i=0; s1[i]!='\0'; i++)
  {
    printf("%c\t",pop());
  }
}

