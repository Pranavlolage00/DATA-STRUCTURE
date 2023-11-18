#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  int i,n,ans=0,x,a[100];
  printf("enter order of polinomial:");
  scanf("%d",&n);
  for(i=n-1; i>=0; i--)
  {
     printf("enter co-eficiant of x[%d] term:",i);
     scanf("%d",&a[i]);
  }
  printf("entered polinomial:");
  for(i=n-1; i>=0; i--)
  {
      if(a[i]>=0)
      {
         printf("+%dx^%d",a[i],i);
      }
  }
  printf("enter value of x:");
  scanf("%d",&x);
  for(i=n-1; i>=0; i++)
  {
    ans=ans+a[i]*(pow(x,i));
  }
  printf("evalueted value=%d",ans);
}
