#include<stdio.h>
#include<conio.h>
  int sum_of_digit(int n)
  {
     if(n==0)
     return 0;
     else
       return ((n%10)+sum_of_digit(n/10));

  }
  int main()
  {
    int ans,n;
    clrscr();
    printf("enter number:");
    scanf("%d",&n);
    ans=sum_of_digit(n);
    printf("sum of digit=%d",ans);
    getch();
    return 0;
  }