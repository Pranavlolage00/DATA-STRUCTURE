#include<stdio.h>
#include<conio.h>
int main()
{
  char s1[100];
  int cnt1=0,cnt2=0,i;
  clrscr();
  printf("enter expression:-");
  scanf("%s",&s1);
  for(i=0; s1[i]!='\0'; i++)
    {
       if(s1[i]=='(')
	   cnt1++;
       else if(s1[i]==')')
	 cnt2++;
    }
  if(cnt1==cnt2)
    printf("expression is fully pranthisized");
  else
   printf("not parathized..");
   getch();
   return 0;

}