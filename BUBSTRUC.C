#include<stdio.h>
#include<conio.h>
struct student
{
  int rno;
  char sname[20];
  int per;
}s1[100],temp;
int main()
{
 int i,n,pass;
 clrscr();
 printf("enter limit:-");
 scanf("%d",&n);
 printf("\n------------ accept n student info--------------");
 for(i=0; i<n; i++)
 {
    printf("\n enter rno sname per:-");
    scanf("%d%s%d",&s1[i].rno,&s1[i].sname,&s1[i].per);
 }
 for(pass=0; pass<n; pass++)
 {
    for(i=0; i<n-pass; i++)
    {
       if(s1[i].per<s1[i+1].per)
       {
       temp=s1[i];
       s1[i]=s1[i+1];
       s1[i+1]=temp;
       }
    }

 }
   printf("\n------------------ display soarted info-----------------");
   for(i=0; i<n; i++)
   {
      printf("\n roll number=%d",s1[i].rno);
      printf("\n student name=%s",s1[i].sname);
      printf("\n percentage=%d",s1[i].per);
   }
   getch();
   return 0;
}