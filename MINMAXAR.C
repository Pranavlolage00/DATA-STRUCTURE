#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n,max,min;
    clrscr();
    printf("enter limit of array:");
    scanf("%d",&n);
    printf("\n enter elements of array:");
    for(i=0; i<n; i++)
    {
	scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(i=0; i<n; i++)
    {
	if(a[i]>max)
	{
	 max=a[i];
	}
	if(a[i]<min)
	{
	  min=a[i];
	}
    }
    printf("\n	11maximum elements=%d",max);
    printf("\nminimum elements=%d",min);
    getch();
    return 0;
}


