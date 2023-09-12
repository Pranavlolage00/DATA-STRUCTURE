#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create(struct node *list)
{
   int i,n;
   struct node *newnode,*temp;
   printf("enter limit:");
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter value:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(list==NULL)
      {
       temp=newnode;
       list=newnode;
      }
      else
      {
      temp->next=newnode;
      temp=newnode;
      }
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
struct node* insertbig(struct node *list,int num)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 newnode->next=list;
 list=newnode;
 return list;
}
struct node* insertend(struct node *list,int num)
{
 struct node *temp,*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 newnode->next=NULL;
 for(temp=list; temp->next!=NULL; temp=temp->next);
 temp->next=newnode;
 return list;
}
struct node* insertcom(struct node *list,int num,int pos)
{
  struct node *newnode,*temp;
  int i;

  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  if(pos==1)
  {
    newnode->next=list;
    list=newnode;
  }
  else
  {
    for(i=1,temp=list; i<pos-1&&temp->next!=NULL; i++,temp=temp->next);
     newnode->next=temp->next;
     temp->next=newnode;
  }

  return list;
}
int main()
  {
    int ch,num,pos;
    struct node *list=NULL;
   clrscr();
   printf("___________________________________");
   do
   {
    printf(" \n 1-create \n 2-display \n 3-insert begining \n 4-insert end \n 5-insert position \n6- exit\n");
    printf("----------------------------------");
    printf("\n enter choice :");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:list=create(list);
	     break;
       case 2:disp(list);
	     break;
       case 3:printf("enter number:");
	      scanf("%d",&num);
	      list=insertbig(list,num);
	      disp(list);
	      break;
       case 4:printf("enter number:");
	      scanf("%d",&num);
	      list=insertend(list,num);
	      disp(list);
	      break;
       case 5:printf("enter position:");
	      scanf("%d",&pos);
	      printf("enter number:");
	      scanf("%d",&num);
	      list=insertcom(list,num,pos);
	      disp(list);
	      break;
    }
   }while(ch<6);
   return 0;
  }