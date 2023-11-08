#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* append(struct node *list,int num)
{
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=NULL;
   if(list==NULL)
   {
     list=newnode;
     temp=newnode;
   }
   temp->next=newnode;
   temp=newnode;
   return list;
}
void disp(struct node *list)
{
  struct node *temp;
  for(temp=list; temp!=NULL; temp=temp->next)
  {
      printf("%d\t",temp->data);
  }
}
void check(int a[],int n,struct node *list1,struct node *list2)
{
   int i;
   for(i=0; i<n; i++)
   {
      if(a[i]<0)
      {
        list1=append(list1,a[i]);
      }
      else
      {
        list2=append(list2,a[i]);
      }
   }
   printf("\npositive list=");      
   disp(list2);
   printf("\n");
   printf("\nnegative list=");
   disp(list1);
}
int main()
{
  int a[100],i,n;
  struct node *list1=NULL,*list2=NULL;
  printf("\n accept numbers and dispaly +ve or -ve lists..\n");
  printf("\n enter limit:\n");
  scanf("%d",&n);
  printf("\n enter n numbers :\n");
  for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
   }
  check(a,n,list1,list2);
}




