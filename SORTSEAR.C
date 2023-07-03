#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],i,n,pass,temp,num;
  clrscr();
  printf("enter limit:-");
  scanf("%d",&n);
  printf("enter n numbers in an array:-");
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
  printf("\nsoarted array= ");
   for(i=0; i<n; i++)
   {
      printf("%d\t",a[i]);
   }
  printf("/n enter number to search record");
  scanf("%d",&num);
  top=0;
  bottom=n-1;
while(top<bottom)
{
  mid=(top+bottom)/2
   if(a[mid]==num)
  {
     flag=1;
   break;
 }
   if(num>a[i])
 top=mid+1;
  else
 bottom=mid-1;
}
 if(flag==1)
  printf("record is found")
 else
  printf("record is not found");
  getch();
 retrun 0;
}
