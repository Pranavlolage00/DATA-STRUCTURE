#include<stdio.h>
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
      temp=list=newnode;
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

   
int search(struct node *list,int num)
{
  struct node *temp;
 for(temp=list; temp!=NULL; temp=temp->next)
     {
         if(temp->data==num)
         return 1;
     }
   return 0;
}
struct node* insertend(struct node *list,int num)
{
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=NULL;
   for(temp=list; temp->next!=NULL; temp=temp->next);
   temp->next=newnode;
   return list;
}
int main()
{
  struct node *list=NULL;
  int num,ch;
  do
  {
    printf("\n 1-create \n 2-display \n 3-search\n 4-insert end \n 5-exit \n");
    printf("enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:  list=create(list);
               break;
      case 2:  disp(list);
               break;
      case 3:  printf("enter number to search");
               scanf("%d",&num);
               if(search(list,num))
               {
               printf("number is found");
               }
               else
               printf("number not found");
               break;
      case 4:  printf("enter value:");
               scanf("%d",&num);
               list=insertend(list,num);
               printf("insert succesfully..");
               break;
    }
  }while(ch<5);
}
