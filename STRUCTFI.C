#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud
{
  int rno;
  char name[20];
  int per;
  char sclass[20];
}s1[100];
int main()
{
 int i,n;
 char s2[20];
 clrscr();
 printf("enter  limit:");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
   printf("enter rno name per class..:");
   scanf("%d%s%d%s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].sclass);
   printf("\n");
 }
 printf("\n enter class to display:");
 scanf("%s",&s2);
 for(i=0; i<n; i++)
 {
    if(strcmp(s1[i].sclass,s2)==0)
    {
      printf("\n recorrds is found..");
      printf("\n roll number=%d",s1[i].rno);
      printf("\n student name=%s",s1[i].name);
      printf("\n percentage=%d",s1[i].per);
    }
  }
  if(i==n)
  {
   printf("record not found..");
  }
  getch();
  return 0;
}