#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*left,*right;};
struct node *getnn(struct node*root,int data)
{
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node*);
nn->data=data;
nn->left=nn->right=NULL;
return nn;
}
struct node* insert(struct node*root,int data){
if(root==NULL)
printf("tree mty");
root=getnn(data);
return root; 
else if(data<=root->data)
{
root->left=insert(root->left,data);
}
else
{
root->right=insert(root->right,data);
}
return root;
}
struct node* search(struct node*root,int data){
if(root==NULL)
{
return false;
}
else if(root->data==data)
return true;
else if(data<=root->data)
return search(root->left,data);
else
return search(root->right,data);
}
int main()
{
struct node*root;
root=insert(root,15);
root=insert(root,10);
root=insert(root,20);
root=insert(root,25);
root=insert(root,8);
root=insert(root,12);
int number;
printf("enter no be searched");
scanf("%d",&number);
if(search(root,number)==true)
{
printf("found\n");
}
else
{
printf("not found");
}
}


