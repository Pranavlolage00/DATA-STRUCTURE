#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],b[100],i,n;
 clrscr();
 printf("enter limit");
 scanf("%d",&n);
 printf("enter  numbers in array");
 for(i=0; i<n; i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0; i<n; i++)
 {
   b[i]=a[i]*a[i];
 }
 printf("\n first array=");
 for(i=0; i<n; i++)
 {
   printf("%d\t",a[i]);
 }
 printf("\nsquare array=");
 for(i=0; i<n; i++)
 {
   printf("%d\t",b[i]);
 }
 getch();
 return 0;
}