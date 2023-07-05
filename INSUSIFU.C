#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],i,n;
 void insertion( int a[100],int n);
  clrscr();
  printf("enter limit :-");
  scanf("%d",&n);                           //decleration
  printf("enter n numbers in an array");
  for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
  insertion(a,n);		     // calling

  getch();
  return 0;
 }
 void insertion(int a[100],int n)
 {
    int i,j,num;
    for(i=1; i<n; i++)
     {
       num=a[i];                            // defination
       for(j=i-1; j>=0&&num<=a[j]; j--)
	{
	a[j+1]=a[j];
	a[j]=num;
	}
     }
     printf("\n sorted nos=");
     for(i=0; i<n; i++)
      {
	printf("%d\t",a[i]);

      }
}