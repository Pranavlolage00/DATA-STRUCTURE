#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n,a[100],num,flag=0;
   clrscr();
   printf("enter limit");
   scanf("%d",&n);
   printf("enter n numbers :");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter number to search the record:");
   scanf("%d",&num);
   for(i=0; i<n; i++)
   {  if(a[i]==num)
     {
	flag=1;
	break;
     }
   }
   if(flag==1)
     printf("number is found");
   else
      printf("number is not found");

      getch();
      return 0;

}