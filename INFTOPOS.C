#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define MAX 100
struct stack
{
  char a[MAX];
  int top;
}s;
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
void push(char x)
{
  if(isfull())
  printf("stack is full don't push:-");
  else
  {
     s.top++;
     s.a[s.top]=x;
  }
}
char pop()
{
char ch;
  if(isempty())
  return -1;
  else
  {
  ch=s.a[s.top];
  s.top--;
  return ch;
 }
}
int priority(char x)
{
   if(x=='(')
     return 0;
   if(x=='+'||x=='-')
   return 1;
    if(x=='*'||x=='/')
   return 2;
    if(x=='$'|| x=='^')
    return 3;

 return 0;
}
int main()
{
  char exp[100];
  char *e,x;
  init();
  clrscr();
  printf("enter expression:-");
  scanf("%s",exp);
  printf("\n");
  e=exp;
  while(*e!='\0')
  {
    if(isalnum(*e))
    printf("%c",*e);
    else if(*e=='(')
    push(*e);
    else if(*e==')')
    {
       while(x=pop()!='(')
	 printf("%c",x);

       push(*e);
    }
    else
    {
       while(priority(s.a[s.top])>=priority(*e))
	 printf("%c",pop());

	 push(*e);
    }
    e++;
  }
  while(!isempty())
  {
     printf("%c",pop());
  }
  getch();
  return 0;
}







