#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left,*right;
}*root;
struct node* insert(struct node *root,int num)
{
   if(root==NULL)
   {
      root=(struct node*)malloc(sizeof(struct node));
      root->data=num;
      root->left=NULL;
      root->right=NULL;
      return root;
   }
   if(num>root->data)
   {
     root->right=insert(root->right,num);
     return root;
   }
   if(num<root->data)
   {
       root->left=insert(root->left,num);
       return root;
   }
}
struct node* search(struct node *root,int key)
{
   struct node *temp=root;
   while(temp!=NULL && temp->data!=key)
   {
        if(key>temp->data)
        {
           temp=temp->right;
        }
        else
        temp=temp->left;
   }
   return temp;
}
int main()
{
  int i,n,num,key,ch;
  root=NULL;
  do
  {
     printf("\n1-insert \n2-search");
     printf("\n enter choice:");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:printf("enter limit:");
              scanf("%d",&n);
              for(i=0; i<n; i++)
              {
                printf("enter number:");
                scanf("%d",&num);
                root=insert(root,num);
              }
              break;
       case 2:printf("enter key to search:");
              scanf("%d",&key);
              if(search(root,key)==NULL)
                printf("number is not found:");
              else
                printf("number is found");
            break;
     }
  }while(ch<3);

}

