#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],n,i,num;
   void search(int a[100],int n, int num );
   clrscr();
   printf("enter limit:");
   scanf("%d",&n);
   printf("enter n numbers in an array:");
   for(i=0; i<n; i++)
     {
       scanf("%d",&a[i]);
     }
   printf("enter number to search record:");
   scanf("%d",&num);

   search(a,n,num);
   return 0;
}
 void search(int a[100],int n,int num)
 {
    int i;
    for(i=0; i<n; i++)
    {
       if(a[i]==num)
       {
	 break;
       }

    }
    if(i==n)
    printf("record not found..");
    else
    printf("record found ");
   getch();
 }
