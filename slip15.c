#include<stdio.h>
#include<string.h>
void sort(char a[][50],int n)
{
   char temp[20];
   int i,pass;
   for(pass=1; pass<n; pass++)
   {
     for(i=0; i<n-pass; i++)
     {
       if(strcmp(a[i],a[i+1])>0)
       {
         strcpy(temp,a[i]);
         strcpy(a[i],a[i+1]);
         strcpy(a[i+1],temp);
       }
     }
   }
   for(i=0; i<n; i++)
   {
     printf("%s\t",a[i]);
   }
}
int main()
{
  char a[50][50];
  int n,i;
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter n names in an array:");
  for(i=0; i<n; i++)
  {
    scanf("%s",a[i]);
  }
  printf("\nsorted names=\n");
  sort(a,n);
}




