#include<stdio.h>
#include<conio.h>
int search(int a[100],int num,int  n)
{
 int i;
 for(i=0; i<n; i++)
 {
   if(a[i]==num)
   {
      return i;
   }
 }
   return i;
}
  int main()
  {
   int a[100],n,i,num;
   clrscr();
   printf("enter limit:-");
   scanf("%d",&n);
   printf("enter n numbers in an array:-");
   for(i=0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter number to search:-");
    scanf("%d",&num);

    if(search(a,num,n)==n)
    printf("record not found..");
    else
   {
    printf("record is found...");
   }
    getch();
    return 0;
  }