#include<stdio.h>
#include<conio.h>
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
  printf("record found..");

  getch();
}
int main()
{
  int a[100],i,n,num;
  clrscr();
  printf("enter limit:-");
  scanf("%d",&n);
  printf("enter n numbers:-");
  for(i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
  printf("enter number to search:");
  scanf("%d",&num);

  search(a,n,num);
   return 0;
}