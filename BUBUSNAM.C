#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  int i,n,pass;
  char s1[50][50],temp[50];
  clrscr();
  printf("enter limit:-");
  scanf("%d",&n);
  printf("enter n names in an array:-");
  for(i=0; i<n; i++)
  {
    scanf("%s",&s1[i]);
  }
  for(pass=1; pass<n; pass++)
  {
     for(i=0; i<n-pass; i++)
     {
	 if(strcmp(s1[i],s1[i+1])>0)
	 {
	    strcpy(temp,s1[i]);
	   strcpy(s1[i],s1[i+1]);
	   strcpy(s1[i+1],temp);

	 }
     }
  }
  printf("\nsoarted array= ");
   for(i=0; i<n; i++)
   {
      printf("%s\t",s1[i]);
   }
   getch();
   return 0;
  }