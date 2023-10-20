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
struct node* opration(struct node *list,int pos)
{
  struct node *temp,*temp1,*temp2;
  int i;
  temp1=list;
  for(i=1,temp2=list; i<pos&&temp2!=NULL; i++,temp2=temp2->next);
  list=temp2->next;
  for(temp=list; temp->next!=NULL; temp=temp->next);
  temp->next=temp1;
  temp2->next=NULL;
  return list;
}
int main()
{
  struct node *list=NULL;
  int ch,pos;
  do
  {
  printf("\n 1-create \n 2-display \n 3-opreation\n");
  printf("enter choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:list=create(list);
           break;
    case 2:disp(list);
            break;
    case 3:printf("enter position to perform following task:");
           scanf("%d",&pos);
          list=opration(list,pos);
          disp(list);
          break;
  }
  }while(ch<4);
}

