#include<stdio.h>
#include<conio.h>
int sum(int n)
{
  if(n==0)
     return 0;
  else
  return n+sum(n-1);

}
int main()
{
   int n,ans;
   clrscr();
   printf("enter number:");
   scanf("%d",&n);
   ans=sum(n);
   printf("sum of number=%d",ans);
   getch();
   return 0;
}