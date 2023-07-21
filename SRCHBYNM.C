#include<stdio.h>
#include<conio.h>
#include<string.h>
void search(char s1[100][100], char s2[100],int n)
{
   int i;
   for(i=0; i<n; i++)
   {
     if(strcmp(s1[i],s2)==0)
      {
	break;
      }
   }
   if(i==n)
   printf("record not found..");
   else
   printf("reecord is found..");
   getch();
}
int main()
{
 char s1[100][100],s2[100];
 int n,i;
 clrscr();
 printf("enter limit:-");
 scanf("%d",&n);
 printf("enter n city names:-");
 for(i=0; i<n; i++)
  {
    scanf("%s",&s1[i]);
  }
  printf("enter city name to search :-");
  scanf("%s",&s2);
  search(s1,s2,n);
   return 0;
}
