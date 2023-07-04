#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],i,n,j,min,t,index;
  clrscr();
  printf("enter limit:-");
  scanf("%d",&n);
  printf("enter n numbers in an array:-");
  for(i=0; i<n; i++)
  {
     scanf("%d",&a[i]);
  }
  for(i=0; i<n; i++)
    {
       min=a[i];
       index=i;
       for(j=i; j<n; j++)
	{
	   if(a[j]<min)
	   {
	     min=a[j];
	     index=j;
	   }
	}
       t=a[i];
       a[i]=a[index];
       a[index]=t;
	}
	printf("sorted array=");
	for(i=0; i<n; i++)
	  {
	     printf("%d\t",a[i]);
	  }
	getch();
	return 0;
}