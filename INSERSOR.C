#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],i,j,t,num,n;
   clrscr();
   printf("enter limit :-");
   scanf("%d",&n);
   printf("enter n numbers in an array :-");
   for(i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1; i<n; i++)
     {
       num=a[i];
	for(j=i-1; j>=0&&num<a[j]; j--)
	{
	    t=a[j+1];
	    a[j+1]=a[j];
	    a[j]=t;
	}
       }
     printf("\n sorted nos=");
     for(i=0; i<n; i++)
       {
	  printf(" %d\t",a[i]);
       }

     getch();
     return 0;
}
