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
 node* insertcom(node *list,int num,int pos)
 {
    node *temp,*newnode;
    int i;
    newnode=NODEALLOC;
    newnode->data=num;
    if(pos==1)
    { 
       for(temp=list; temp->next!=list; temp=temp->next);
       newnode->next=list;
       list->prev=newnode;
       list=newnode;
       temp->next=list;
       list->prev=temp;  
    }
    else
    {
       for(i=1,temp=list;i<pos-1&&temp->next!=list; i++,temp=temp->next);
       newnode->next=temp->next;
       temp->next->prev=newnode;
       temp->next=newnode;
       newnode->prev=temp; 
    }
    return list;
 }
 node* deletebig(node *list)
 {
    node *temp,*temp1;
    for(temp=list; temp->next!=list; temp=temp->next);
    temp1=list;
    list=list->next;
    temp->next=list;
    list->prev=temp;
    free(temp1);
    return list;
 }
 node* deletecom(node *list,int pos)
 {
    node *temp,*temp1;
    int i;
    if(pos==1)
    {
    for(temp=list; temp->next!=list; temp=temp->next);
    temp1=list;
    list=list->next;
    temp->next=list;
    list->prev=temp;
    free(temp1);
    }
    else
    {
        for(i=1,temp=list; i<pos-1&&temp->next!=list; i++,temp=temp->next);
        temp1=temp->next;
        temp->next=temp1->next;
        temp1->next->prev=temp;
        free(temp1);
    }
    return list;
 }
int main()
{
    node *list=NULL;
    int ch,num,pos;
    do
    {
      printf("\n 1- create \n 2- display \n  3- insert bigining \n 4- insert position \n 5- delete bigining \n6- delete position \n");
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
        case 4:printf("enter position:");
               scanf("%d",&pos);
               printf("enter number:");
               scanf("%d",&num);
               list=insertcom(list,num,pos);
               break;
        case 5:list=deletebig(list);
               break;
        case 6:printf("enter position:");
               scanf("%d",&pos);
               list=deletecom(list,pos);
               break;
               
      }
    }while(ch<7);
}
