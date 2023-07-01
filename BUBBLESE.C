#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],i,n,pass,temp;
  clrscr();
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n numbers in an array");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  for(pass=1; pass<n; pass++)
  {
     for(i=0; i<n-pass; i++)
     {
	 if(a[i]>a[i+1])
	 {
	    temp=a[i];
	    a[i]=a[i+1];
	    a[i+1]=temp;

	 }
     }
  }
  printf("\nsoarted array=");
   for(i=0; i<n; i++)
   {
      printf("%d\t",a[i]);
   }
    getch();
    return 0;
}