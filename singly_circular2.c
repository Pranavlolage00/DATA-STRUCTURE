#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create(struct node *list)
{
  struct node *temp,*newnode;
  int i,n;
  printf("enter limit:");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value:");
    scanf("%d",&newnode->data);
    if(list==NULL)
    {
       temp=list=newnode;
       temp->next=list;
    }
    else
    {
       temp->next=newnode;
       newnode->next=list;
       temp=newnode;    
    }
  }
  return list;
}
void display(struct node *list)
{
   struct node *temp;
   temp=list;
  do
  {
    printf("%d \t",temp->data);
    temp=temp->next;
    
  }while(temp!=list);
}
struct node * insertbig(struct node *list ,int num)
{
   struct node *temp,*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  for(temp=list; temp->next!=list; temp=temp->next);
  newnode->next=list;
  list=newnode;
  temp->next=list;
  
   return list;
}
struct node* insertmid(struct node *list, int num, int pos)
{
  struct node *temp,*newnode;
  int i;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  for(i=1,temp=list; i<pos-1&&temp->next!=list; i++,temp=temp->next);
  newnode->next=temp->next;
  temp->next=newnode;
  
  return list;
}
struct node* insertend(struct node *list,int num)
{
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   for(temp=list; temp->next!=list; temp=temp->next);
   temp->next=newnode;
   newnode->next=list;
   
   return list;
}
struct node* deletebig(struct node *list)
{
   struct node *temp,*temp1;
   for(temp=list; temp->next!=list; temp=temp->next);
   temp1=list;
   list=list->next;
   temp->next=list;
   free(temp1);
   
   return list;
}
int main()
{
 struct node *list=NULL;
 int ch,num,pos;
 do{
   printf("\n 1-create \n 2-display \n 3-insert begining\n 4-insert position \n 5-insert end\n 6-delete binging\n");
   printf("enter choice:");
   scanf("%d",&ch);
  switch(ch)
  {
    case 1:list=create(list);
            break;
    case 2:display(list);
           break;
    case 3:printf("enter number:");
           scanf("%d",&num);
           list=insertbig(list,num);
           break;
    case 4:printf("enter position:");
           scanf("%d",&pos);
           printf("enter number:");
           scanf("%d",&num);
           list=insertmid(list,num,pos);
           break;
    case 5:printf("enter number:");   
           scanf("%d",&num);    
           list=insertend(list,num);
           break;
    case 6:list=deletebig(list);
            break;      
  }
 }while(ch<7);
}