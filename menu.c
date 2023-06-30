#include<stdio.h>
#include<string.h>
struct student{
    int rno;
    char name[20];
    float per;
}s1[100];
int i,n;
void accept()
{
     printf("\nEnter Limit=");
     scanf("%d",&n);
     printf("\nEnter Student Roll_number ,name ,percentage=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
    }
}
void disp()
{
   for(i=0;i<n;i++)
   {
       printf("\n Roll no=%d",s1[i].rno);
       printf("\n Name=%s",s1[i].name);
       printf("\n Per=%f",s1[i].per);  
   }  
}
void disp_number(int rnum)
{

        for(i=0;i<n;i++)
            {
                if(s1[i].rno==rnum)
                    {
                        printf("\n%s\t%f\n",s1[i].name,s1[i].per);
                    }
            }
}
void disp_name(char sname[30])
{
     for(i=0;i<n;i++)
        {
          if(strcmp(s1[i].name,sname)==0)
              {
                  printf("\n\t%d\t%f\n",s1[i].rno,s1[i].per);
              }
        }
}
void disp_max()
{
    int max1,index;
    max1=s1[0].per;
    index=0;
    for(i=0;i<n;i++)
    {
        if(s1[i].per>max1)
        {
            max1=s1[i].per;
            index=i;
        }
    }
     printf("\n%d\t",s1[index].rno);
     printf("%s\t",s1[index].name);
     printf("%f",s1[index].per);
}
disp_avg()
{
    int sum=0;
    float percentage1;
    for(i=0;i<n;i++)
    {
        sum=sum+s1[i].per;
    }
    percentage1=(float)sum/n;
    printf("\nAverage Marks of All Student=%.2f\n",percentage1);
}        
int main()
{
    int rnum,ch;
    float percentage1;
    char sname[30]; 
    do{
        printf("MENU=");
        printf("\n1-accept Student Rollno,name,per\n");
        printf("2-Display All Student Records\n");
        printf("3-Search By Roll number\n");
        printf("4-Search By Student Name\n");
        printf("5-Max Percentage Student\n");
        printf("6-Average Of All Student Percentage\n");
        printf("Enter Your Choice=\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :accept();
                    break;
            case 2 :disp();
                    break;
            case 3 : printf("\nEnter Roll Number To Search Records=");
                     scanf("%d",&rnum);
                     disp_number(rnum);
                     break;
            case 4 : printf("\nEnter Name To Search Records=");
                     scanf("%s",sname);
                     disp_name(sname);
                     break;
            case 5 : disp_max();
                     break;
            case 6 : disp_avg();
                     break;
            default : printf("\nInvalid Choice.......!");
        }
    }while(ch<7);
}