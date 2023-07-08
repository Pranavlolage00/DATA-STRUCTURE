#include<conio.h>
#include<stdio.h>
#include<string.h>
#define MAX 100
struct stack
{
  char a[MAX];
  int top;
}s1;
void init()
{
  s1.top=-1;
}
int isempty()
{
  if(s1.top==-1)
  return 1;
  else
  return 0;

}
int isfull()
{
   if(s1.top==MAX-1)
   return 1;
   else
   return 0;
}
void push(char ch)
{
  if(isfull())
  printf("stack is full don't push");
  else
  {
     s1.top++;
     s1.a[s1.top]=ch;

  }

}
char pop()
{
  char ch;
  if(isfull())
  printf("stack is full don't pop:");
  else
  {
     ch=s1.a[s1.top];
      s1.top--;
      return ch;
  }

}
int main()
{
   char s[20];
   int i;
   init();
   clrscr();
   printf("enter string:-");
   scanf("%s",s);
   for(i=0; s[i]!='\0'; i++)
   {
      push(s[i]);
   }
 for(i=0; s[i]!='\0'; i++)
 {
   if(s[i]!=pop())
   {
     break;

    }
 }
   if(isempty())
   printf("string is palindrome..");
   else
   printf("string is not palindrome..");
 getch();
 return 0;
}