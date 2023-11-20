#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
  int data;
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
   char val;
   struct node *temp=top;
  if(isempty())
  {
    printf("stack is empty don't push()");
  }
  else
  {
     val=top->data;
     top=top->next;
     free(temp);
     return val;
  }
}
int pri(char ch)
{
  if(ch=='(')
  return 0;
  if(ch=='+'||ch=='-')
  return 1;
  if(ch=='*'||ch=='/')
  return 2;
  if(ch=='$'||ch=='^')
  return 3;
}
int main()
{
   char s1[50],ch;
   int i;
   printf("enter infix expression:");
   scanf("%s",s1);
   for(i=0; s1[i]!='\0'; i++)
   {
      if(isalpha(s1[i]))
      {
         printf("%c\t",s1[i]);
      }
      else if(s1[i]=='(')
      {
             push(s1[i]);
      }
      else if(ch==')')
      {
          while((ch=pop())!='(')
          {
            printf("%c\t",ch);
          }
      }
      else
      {
          while(pri(top->data)>=pri(s1[i]))
          {
            printf("%c",pop());
          }
          push(s1[i]);
      }
   }
   while(!isempty())
   {
     printf("%c\t",pop());
   }
}
