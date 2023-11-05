#include<stdio.h>
int main()
{
   int g[20][20],i,j,n,s1;
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
    printf("\ndisplay in or out degree of graph:\n");
       for(i=1; i<=n; i++)
         {
            s1=0;
            
           for(j=1; j<=n; j++)
           {
               s1=s1+g[j][i]+g[i][j];
               
           }
           printf("\ntotal degree of %d=%d",i,s1);

         }
}

