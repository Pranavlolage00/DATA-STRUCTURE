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
 void inorder(struct node *root)
 {
    if(root!=NULL)
    {
  inorder(root->left);
   inorder(root->right);
   printf("%d\t",root->data);
   }
 }
 void preorder(struct node *root)
 {
    if(root!=NULL)
    {
   printf("%d",root->data);
   preorder(root->left);
   preorder(root->right);
  }
 }
 int main()
 {
    int num,n,i,ch;
    root=NULL;
    do
    {
       printf("\n1-insert \n2-inorder  \n4-preorder");
       printf("\nenter choice:");
       scanf("%d",&ch);
       switch(ch)
       {
         case 1:printf("enter limit:");
                scanf("%d",&n);
                for(i=0; i<n; i++)
                {
                  printf("enter number:");+
                  scanf("%d",&num);
                   insert(root,num);
                }
                break;
          case 2:inorder(root);
                 break;
          case 4:preorder(root);
                 break;
       }
       
    }while(ch<5);
 }

 
