#include<stdio.h>
#include<conio.h>
int main()
{
  int n,a[100],i,num,flag=0;
  clrscr();
  printf("enter limit :-");
  scanf("%d",&n);
    printf("enter n numbers:-");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter number to search:-");
  scanf("%d",&num);
  for(i=0; i<n; i++)
  {
     if(a[i]==num)
     {
       flag==1;
       break;
     }
  }
  if(flag==0)
     printf("number is found...");
  else
  printf("number is not found ");
  getch();
  return 0;
  }