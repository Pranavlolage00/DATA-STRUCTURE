#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[50],i,j,n,num,temp;
  printf("enter limit:");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    a[i]=(rand()%100);
  }
  for(i=1; i<n; i++)
  {
     num=a[i];  
    for(j=i-1; j>=0&&num<a[j]; j--)
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
  }
  printf("sorted elements:");
  for(i=0; i<n; i++)
  {
    printf("%d\t",a[i]);
  }
}
