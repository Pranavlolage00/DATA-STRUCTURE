#include<stdio.h>
#include<conio.h>
struct stud
{
  int rno;
  char name[20];
  float  per;
}s1[100];
void search( struct stud s1[100],int n,int num)
{
  int i;
  for(i=0; i<n; i++)
   {
     if(s1[i].rno==num)
     {
       printf("\n record found..");
       printf("\n student name=%s",s1[i].name);
       printf("\n student percentage=%d",s1[i].per);
       break;
     }
   }
  if(i==n)
  printf("\n record not found");
   getch();
}
  int main()
  {
     int i,n,num;
     clrscr();
     printf("enter limit:-");
     scanf("%d",&n);
     for(i=0; i<n; i++)
      {
       printf("enter roll no name per:-");
       scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
      }

     printf("enter rno to search:-");
     scanf("%d",&num);
     search(s1,n,num);
     return 0;
  }
