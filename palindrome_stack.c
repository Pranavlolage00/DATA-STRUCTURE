#include<stdio.h>
#include<stdlib.h>
#define MAX 50
 struct stack
 {
   char data[MAX];
   int  top;
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
 int isempty()
 {
    if(s.top==-1)
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
 char pop()
 {
    char val;
   if(isempty())
   {
   printf("stack is empty don't pop");
   }
   else
   {
      val=s.data[s.top];
      s.top--;
      return val;
   }
 }
 int main()
 {
    char s1[50];
    int i;
    init();
    printf("enter string:");
    scanf("%s",&s1);
    for(i=0; s1[i]!='\0'; i++)
    {
       push(s1[i]);
    }
    for(i=0; s1[i]!='\0'; i++)
    {
       if(s1[i]!=pop())
       {
          break;
       }
    }
       if(isempty())
       {
          printf("string is palindrome");
       }
       else
       {
         printf("string is not palindrome");
       }
    
}
 
 
