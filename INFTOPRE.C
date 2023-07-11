#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
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
int priority(char ch)
{
   if(ch=='(')
     return 0;
   if(ch=='+'||ch=='-')
   return 1;
    if(ch=='*'||ch=='/')
   return 2;
    if(ch=='$'|| ch=='^')
    return 3;

 return 0;
}
int main()
{
  char s1[100],s2[100],ch;
  int i,j=0;
  clrscr();
  printf("enter infix expression :-");
  gets(s1);
  strrev(s1);
  init();
  for(i=0; s1[i]!='\0'; i++)
   {
      if(s1[i]=='(')
	s1[j++]=')';
      else if(s1[i]==')')
	s1[j++]='(';
   }
   init();
  for(i=0; s1[i]!='\0'; i++)
    {
       if(isalpha(s1[i]))
	 s2[j++]=s1[i];
       else if(s1[i]=='(')
	push(s1[i]);
       else if(s1[i]==')')
       {
	 while(ch==pop()!='(')
	 {
	  s2[j++]=ch;
	 }

      }
      else
      {
	while(priority(s.a[s.top])>=priority(s1[i]))
	{
	  s2[j++]=pop();
	}
	push(s1[i]);

      }
      while(!isempty())
      {
	s2[j++]=pop();
      }
      s2[j]='\0';
      strrev(s2);
       }
      printf("string=%s",s2);
     getch();
     return 0;
    }






