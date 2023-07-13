#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
struct stack
{
  int a[MAX];
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
void push(int num)
{
   if(isfull())
   printf("stack is  full don't pushh");
   else
   {
     s.top++;
     s.a[s.top]=num;
   }

}
int pop()
{
   int num;
  if(isempty())
  printf("stack is empty don't pop");
  else
  {
     num=s.a[s.top];
      s.top--;
      return num;

  }
  return 0;
}
int main()
{
  char s1[100];
  int p,q,r,s,i,val1,val2,res,num;
  clrscr();
  printf("enter postfix expression :");
  scanf("%s",&s1);
  printf("enter values of P Q R S:-");
  scanf("%d%d%d%d",&p,&q,&r,&s);
  init();
  for(i=0; s1[i]!='\0'; i++)
  {
     if(isalpha(s1[i]))
     {
	switch(s1[i])
	{
	  case 'P':push(p);
	       break;
	  case 'Q':push(q);
		break;
	  case 'R':push(r);
		  break;
	  case 'S':push(s);
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
    case '-':res=val2-val1;
	      break;
    case '*':res=val2*val1;
	     break;
    case '/':res=val2/val1;

    }
    push(res);
  }

  }
  printf("result=%d",pop());
    getch();
    return 0;

}




