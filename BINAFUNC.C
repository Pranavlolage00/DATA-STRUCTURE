#include<stdio.h>
#include<conio.h>
 void binary(int a[100],int num,int n)
 {
    int mid,top,bottom,flag=0;
    top=0;
    bottom=n-1;
     while(top<=bottom)
     {
       mid=(top+bottom)/2;
	if(a[mid]==num)
	{
	  flag=1;
	  break;
	}
       if(num>a[mid])
       {
	 top=mid+1;
	}
       else
	bottom=mid-1;
     }
     if(flag==1)
       printf("record found");
     else
      printf("record not found ...");
     getch();
 }
 int main()
 {
  int a[100],n,num,i;
  clrscr();
  printf("enter limit:-");
  scanf("%d",&n);
  printf("enter n numbers in an array:");
  for(i=0; i<n; i++)
   {
    scanf("%d",&a[i]);

   }
   printf("enter number to seaerch :");
   scanf("%d",&num);
   binary(a,num,n);
   return 0;
 }