#include<stdio.h>
#include<conio.h>
struct emp 
{
	int eno;
	char ename[20];
	float sal;
}e1[100];
int main()
{
	void disp(struct emp e1[100],int n);
	int i,n;
	clrscr();
	printf("enter limit :");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter eno ename salary...:");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);	
	}
  disp(e1,n)
  getch();
}      
  void disp(struct emp s1[100],int n)
  {
  	int i,n;
  	for(i=0; i<n; i++)
  	{
  		if(e1[i].sal>=10000)
  		{
  			printf("eno=%d",e1[i].eno);
  			prinft("ename=%s",e1[i].ename);
  			printf("salary=%f",e1[i].sal);
		  }
	  }
  }
