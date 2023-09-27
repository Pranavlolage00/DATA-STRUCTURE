#include<stdio.h>
#include<stdlib.h>
#define MAX 50
struct stack
{
  char data[MAX];
  int top;
}s;
void init()
{
   s.top=-1;
}
 int isfull()
 {
   if(s.top==MAX-1)
    return 1;
    else
    return 0;
 }
 void push(char c)
 {
   if(isfull())
   {
      printf("stack is full don't push");
   }
   else
   {
      s.top++;
      s.data[s.top]=c;
   }
 }
 void disp()
 {
    int i;
    for(i=s.top; i>=0; i--)
    {
       printf("%c",s.data[i]);
    }
 }
 int main()
 {
  char s1[20];
  int i;
  init();
  printf("enter string :");
  scanf("%s",&s1);
  for(i=0; s1[i]!='\0'; i++)
  {
    push(s1[i]);
  }
  printf("revrese string =");
  disp();
 
 }
 
