#include<stdio.h>
int main()
{
   int g[20][20],i,j,n,s;
   printf("\nenter vertices of graph:");
   scanf("%d",&n);
   printf("\nenter graph is as matrix:");
   for(i=1; i<=n; i++)
      {
         for(j=1; j<=n; j++)
            {
                scanf("%d",&g[i][j]);
            }
      }
    printf("\ndisplay outorder:\n");
       for(i=1; i<=n; i++)
         {
            s=0;
           for(j=1; j<=n; j++)
           {
               s=s+g[i][j];
           }
           printf("\n outdegree of %d=%d",i,s);
         }
}

