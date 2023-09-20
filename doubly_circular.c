#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node*)malloc(sizeof(struct node));
 typedef struct node
{
    int data;
    struct node *next,*prev;
}node;
node* create(node *list)
{
   int i,n;
   node *newnode,*temp;
   printf("enter limit:");
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
      newnode=NODEALLOC;
      printf("enter value:");
      scanf("%d",&newnode->data);
      
      if(list==NULL)
      {
         temp=list=newnode;
         newnode->next=list;
         list->prev=temp;
      }
      else
      {
         temp->next=newnode;
         newnode->prev=temp;
         temp=newnode;
         temp->next=list;
         list->prev=temp;
      }
   }
   return list;
}
void disp(node *list)
{
   node *temp=list;
   do
   {
     printf("%d \t",temp->data);
     temp=temp->next;    
   }while(temp!=list);
   
}
 node* insertbig(node *list,int num)
 {
    node *temp,*newnode;
    newnode=NODEALLOC;
    newnode->data=num;
    for(temp=list; temp->next!=list; temp=temp->next);
    newnode->next=list;
    list->prev=newnode;
    list=newnode;
    temp->next=list;
    list->prev=temp;
    
    return list;
 }
int main()
{
    node *list=NULL;
    int ch,num;
    do
    {
      printf("\n 1- create \n 2- display \n  3- insert bigining \n");
      printf("enter choice:");
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
               break;
      }
    }while(ch<4);
}
