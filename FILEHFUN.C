#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void search(int a[100],int n,int x)
{
 int i,mid,top,bottom,flag=0;
 top=0;
 bottom=n-1;
 while(top<=bottom)
  {
    mid=(top+bottom)/2;
    if(a[mid]==x)
    {
     flag=1;
     break;
    }
    if(x>a[mid])
     top=mid+1;
    else
     bottom=mid-1;
  }
   if(flag==1)
    printf("record is found");
   else
    printf("record not found..");
    getch();
}
  int main()
  {
    FILE *fp1;
    int a[100],i,n,x,num;
    clrscr();
    fp1=fopen("numbers.txt","r" );
    if(fp1==NULL)
    {
     printf("file not exist");
      exit(0);
    }
     while(!feof(fp1))
      {
	fscanf(fp1,"%d",&num);
	a[i++]=num;
      }
     n=i;
     printf("enter number to search:");
     scanf("%d",&x);
     search(a,n,x);

     return 0;
  }


