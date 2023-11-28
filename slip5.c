#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create(struct node *list)
{
   int num,d,rev=0,n=0;
   struct node *newnode,*temp;
   printf("enter number:");
   scanf("%d",&num);
   while(num>0)
   {
     d=num%10;
     rev=rev*10+d;
     num=num/10;
   }
   while(rev>0)
   {
     n=rev%10;
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=n;
     newnode->next=NULL;
      if(list==NULL)
   {
     list=temp=newnode;
   }
   else
   {
    temp->next=newnode;
    temp=newnode;
   }
   rev=rev/10;  
 }
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
int main()
{
  struct node *list=NULL;
  list=create(list);
  disp(list);
}




