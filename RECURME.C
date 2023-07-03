#include<stdio.h>
void merge(int a[], int top, int mid, int bottom)
{
  int i, j, k;
  int n1 = mid - top + 1;
  int n2 = bottom - mid;

  int  b[n2],c[n1+n2];
  
  /* Copy data to temp arrays L[] and R[] */
  for (i = 0; i < n1; i++)
    a[i] = a[top + i];
  for (j = 0; j < n2; j++)
    b[j] = a[mid + 1 + j];
 
   i=j=k=0; 
  while (i < n1 && j < n2)
  {
    if (a[i] <b[j])
      c[k++] = a[i++];
    else
      c[k++] = b[j++];
   }

  while (i < n1)
    c[k++] = a[i++];
   
  while (j < n2)
    c[k++] = b[j++];
    printf("\n Soretd Array=\n");
       for(i=0;i<n1+n2;i++)
          printf("%d\t",c[i]);
}
void mergeSort(int a[], int top, int bottom)
{
  if (top < bottom)
 {
    int mid = top + (bottom - top) / 2;

    mergeSort(a, top, mid);
    mergeSort(a, mid + 1, bottom);

    merge(a, top, mid, bottom);
  }
}

int main()
{
   int a[100],i,n;
   printf("Enter limit:");
   scanf("%d",&n);
    printf("Enter n numbers:");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]); 
   mergeSort(a, 0, n);
}