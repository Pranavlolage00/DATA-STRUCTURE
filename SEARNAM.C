#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{  char s1[100][100],cname[20];
  int i,n,flag=0,top,mid,bottom;
 clrscr();

  printf("enter limit:-");
  scanf("%d",&n);
  printf("ente n city name in soarted order :-");
  for(i=0; i<n; i++)
  {
    scanf("%s",&s1[i]);
  }
  printf("enter name to search :-");
  scanf("%s",&cname);
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
    mid=(top+bottom)/2;
    if(strcmp(cname,s1[mid])==0)
    {
      flag=1;
      break;
    }
    if(cname>s1[mid])
     top=mid+1;
    else
     bottom=mid-1;
    }
  if(flag==1)
    printf("name is found");
  else
    printf("name is not found");

      getch();
return 0;
  }
