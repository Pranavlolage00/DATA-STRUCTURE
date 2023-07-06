#include<stdio.h>
#include<conio.h>
#define MAX 5
struct stack
{
   int a[max];
   int top;
}s1;
void init()
{
    s1.top=-1;
}
void isempty()
{
   if(s1.top==-1)
   return 1;
   else 
   return 0;
}
void ifull()
{
  if(s1.top==MAX-1)
  return 1;
  else
  return 0;
}
void push(int num)
{
  if(isfull())
     printf("stack is full don't Push");
else
   s1.top++;
   s1.a[s1.top]=num;
   printf("push succsesfully...");
}
void pop()
{
   int val
  if(isempty())
  {
   printf("stack is empty don't PoP");
  }
  else
  {
     val=s1.a[s1.top];
     s1.top--;
     printf(" \n popped value=%d",val);
  }

}
void disp()
{
  int i;
  for(i=s1.top; i>=0; i--)
  {
printf("%d\n",s1.a[i]);
  }
}
int main()
{
   int ch,num;
   clrscr();
   init();
   do
   {
     printf("\n 1-push \n 2-pop \n 3=disp");
     printf("enter your choice");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:printf("enter number to push value:");
              scanf("%d",&num);
              push(num);
              break;
       case 2:pop();
         break;
      case 3:disp();
             break;
      default :printf("\ninvalid choice..");
     }
   }while(ch<4);
getch();
}