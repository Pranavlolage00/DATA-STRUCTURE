#include<stdio.h>
#include<string.h>
int main()
{
   char s1[20][20],temp[20];
   int n,i,pass;
   printf("enter how many names:");
   scanf("%d",&n);
   printf("enter n names:");
   for(i=0; i<n; i++)
   {
     scanf("%s",&s1[i]);
   }
   printf("\nsorted names= ");
   for(pass=1; pass<n; pass++)
     {
       for(i=0; i<n-pass; i++)
       {
         if(strcmp(s1[i],s1[i+1])>0)
         {
            strcpy(temp,s1[i]);
            strcpy(s1[i],s1[i+1]);
            strcpy(s1[i+1],temp);
         }
       }
     }
    for(i=0; i<n; i++)
    {
       printf("%s\t",s1[i]);
    }
}
