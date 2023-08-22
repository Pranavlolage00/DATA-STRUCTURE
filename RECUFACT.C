#include<stdio.h>
#include<conio.h>
int fact(int n)
{
  if(n==0)
      return 1;
  else
   return n*fact(n-1);

}
int main()
{
   int ans,n;
   clrscr();
   printf("enter number:");
   scanf("%d",&n);
   ans=fact(n);
   printf("factorial of number=%d",ans);
   getch();
    return 0;
}
