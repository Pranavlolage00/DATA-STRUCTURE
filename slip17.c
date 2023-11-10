#include<stdio.h>
#include<string.h>
void check(char s1[50][50],char s2[20],int n)
{
   int i;
  for(i=0; i<n; i++)
  {
     if(strcmp(s1[i],s2)==0)
     break;
  }
  if(i==n)
    printf("not found:");
  else
    printf("found");
}
int main()
{
  int i,n;
  char s1[50][50],s2[20];
  printf("enter how many cites:");
  scanf("%d",&n);
  printf("enter n names:");
  for(i=0;i<n; i++)
  {
     scanf("%s",&s1[i]);
  }
  printf("enter name to search:");
  scanf("%s",&s2);
  check(s1,s2,n);
}
