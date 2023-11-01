#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *right,*left;
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
void leafdisp(struct node *root)
{
    if(root!=NULL)
    {
       leafdisp(root->left);
      if(root->left==NULL && root->right==NULL)
          printf("%d\t",root->data);
        leafdisp(root->right);
    }    
}
int main()
{
   int i,n,num;
   printf("enter limit:");
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
      printf("enter number:");
      scanf("%d",&num);
      root=insert(root,num);
   }
   printf("leaf node in tree...");
   leafdisp(root);
}
