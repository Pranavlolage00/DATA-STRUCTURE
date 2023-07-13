#define max 100
struct stack
{
 int a[max];
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
 if(s.top==max-1)
 return 1;
 else
 return 0;
}

void push(int num)
{
 if(isfull())
 printf("stack is full don't push...");
 else
 {
  s.top++;
  s.a[s.top]=num;
 }
}

void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	printf("%c",s.a[i]);
         printf("\t");
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char s1[100];
  int i;
  init();
  clrscr();
  printf("enter string:-");
  gets(s1);
  for(i=0; s1[i]!='\0'; i++)
  {
    if(s1[i]==' ')
    {
      disp();
      init();
    }
    else
    push(s1[i]);
  }
   disp();
   getch();
   return 0;

}