#include<stdio.h>
int main()
{
   int n,i,a[10],b[20],z=0,n1,j;
   printf("enter limit:");
   scanf("%d",&n);
   printf("enter n chocolates:");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
 for(i=0; i<n; i++)
 {
     if(a[i]>0)
     {
        b[j++]=a[i];
     }
 }
    n1=j;  
    for(i=n1; i<=n; i++)
    {
      b[i++]=0; 
    }
    printf("\n display sorted packets=");   
    for(i=0; i<n; i++)
    {
      printf("%d  ",b[i]);
    }
} 
