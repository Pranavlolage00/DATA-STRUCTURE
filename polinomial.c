#include <stdio.h>
#include <math.h>

int evaluate (int arr[],int limit,int x)
{
    int sum =0, count;
    
    for (count=limit; count>=0; count--)
    {
        sum=sum+arr[count]*pow (x, count);
    }
    return sum;
}

int main ()
{
    int array[30], degree, x, count, result, i;
    
    printf("\n Enter the Degree of polynomial :");
    scanf("%d",&degree);
    
    printf("\n Enter the Co-efficient of polynomial:");
    for(count=degree;count>=0;count--)
    {
        printf("\n Co-efficient of count :" );
        scanf("%d",&array[count]);
    }
    
    printf("\n The Polynomial :");
    for(i=degree ;i>0; i--)
    {
        if (array[i] !=0) 
        {
            printf("%d^%d+",array[i],i);
        }
    }
    printf("%d",array[count]);
    
    printf("\n Enter the value of x :");
    scanf("%d",&x);
    
    result = evaluate (array, degree, x);
    printf("\n Evaluate of polynomial :%d",result);
    return 0;
}
