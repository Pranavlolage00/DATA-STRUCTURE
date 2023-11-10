#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
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
void push(int num)
{
   struct stack *newnode;
   newnode=(struct stack*)malloc(sizeof(struct stack));
   newnode->data=num;
   newnode->next=top;
   top=newnode;
  
}
int pop()
{
    struct stack *temp=top;
    int val;
  if(isempty())
  {
     printf("stack is empty...");
  }
  else
  {
     val=temp->data;
     top=top->next;
     free(temp);
     return val;
  }
}
int main()
{
   int a,b,c,d,e,i,val1,val2,res;
   char s1[30];
   printf("enter postfix string :");
   scanf("%s",&s1);
   printf("enter value of A:");
   scanf("%d",&a);
   printf("enter value of B:");
   scanf("%d",&b);
   printf("enter value of C:");
   scanf("%d",&c);
   printf("enter value of D:");
   scanf("%d",&d);
   printf("enter value of E:");
   scanf("%d",&e);
   for(i=0; s1[i]!='\0'; i++)
   {
      if(isalpha(s1[i]))
     {
       switch(s1[i])
       {
          case 'a':push(a);
                  break;
          case 'b':push(b);
                  break;
          case 'c':push(c);
                  break;
          case 'd': push(d);
                  break;
          case 'e':push(e);
                  break;
       }
    }
    else
    {
      val1=pop();
      val2=pop();
        switch(s1[i])
        {
           case '+':res=val2+val1;             
                   break;
           case '-':res=val2=val1;
                    break;
           case '/':res=val2/val1;           
                    break;
           case '*':res=val2*val1;
                    break;
        }
        push(res);
    }
  }
  printf("result=%d",pop());
}
