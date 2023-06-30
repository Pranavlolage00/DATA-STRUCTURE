#include<stdio.h>
#include<conio.h>
 struct emp
 {
    int eno;
    char ename[50];
    int sal;
 }e1[100];
 int main()
 {
    int i,n,flag=0,num,top,mid,bottom;
    clrscr();
    printf("\n enter limit:-");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
      printf("enter eno ename sal:-");
      scanf("%d%s%d",&e1[i].eno,&e1[i].ename,&e1[i].sal);
    }
    printf("\nenter eno number to search record:-");
    scanf("%d",&num);
    top=0;
    bottom=n-1;
    while(top<=bottom)
    {
       mid=(top+bottom)/2;
       if(e1[mid].eno==num)
       {
	  flag=1;
	  break;
       }
    if(e1[mid].eno>num)
    {
       top=mid+1;
    }
 else
     bottom=mid-1;
 }
  if(flag==1)
  {
     printf("\nemployee name=%s",e1[mid].ename);
     printf("\nsalary=%d",e1[mid].sal);
 }
  getch();
  return 0;
  }

