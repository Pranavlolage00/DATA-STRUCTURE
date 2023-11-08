#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct stack
{
   int a[MAX];
   int top;
}STACK;
void init(STACK *s)
{
   s->top=-1;
}
int isempty(STACK *s)
{
  if(s->top==-1)
    return 1;
  else
   return 0;
}
int isfull(STACK *s)
{
   if(s->top==MAX-1)
      return 1;
   else
    return 0;
}
void push(STACK *s,int num)
{
  if(isfull(s))
  {
     printf("stack is full don't push");
  }
  else
  {
     s->top++;
     s->a[s->top]=num;
     printf("insert successfully..");
  }
}
  int pop(STACK *s)
  { 
      int val;
     if(isempty(s))
     {
      printf("stack is empty don't pop:");
     }
     else
     {
      val=s->a[s->top];
      s->top--;  
      return val;
      }
  }
  int check(STACK *s1,STACK *s2)
  {
      int cnt=0;
     while(!isempty(s1) && !isempty(s2))
     {
          if(pop(s1)==pop(s2))
          {
              cnt++;
          }  
     }
      return cnt;
   }
  int main()
  {
     int num1,num2,n1,n2,i;
     STACK s1,s2;
     init(&s1);
     init(&s2);
     printf(" \n enter limit of first stack:\n");
     scanf("%d",&n1);
     for(i=0; i<n1; i++)
     {
        printf("\nenter number:");
        scanf("%d",&num1);
        push(&s1,num1);
     } 
     printf("\nenter limit of second stack:");
     scanf("%d",&n2);
     for(i=0; i<n2; i++)
     {
        printf("\nenter number:");
        scanf("%d",&num2);
        push(&s2,num2);
     }  
     if(n1!=n2)
     {
       printf("enter same size of stack..");
       return 0;
     }
     
     if(check(&s1,&s2)==n1)
       printf("\nstack is identical");
    else
      printf("\nstack is doni't identical");
      
  }
