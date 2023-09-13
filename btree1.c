#include<stdio.h>
#include<stdlib.h>
struct node{
int key;
struct node *left;
struct node *right;
};
struct node *nn;
struct node *root=NULL;
struct node *ins(struct node*root,int key){
nn=(struct node*)malloc(sizeof(struct node));
nn->key=key;
if(root==NULL)
root=nn;
else if(key<root->key)
root->left=ins(root->left,key);
else if(key>root->key)
root->right=ins(root->right,key);
return root;
}
int inorder(struct node* root){
if(root==NULL)
return 0;
inorder(root->left);
printf("%d\n",root->key);
inorder(root->right);
}
int preorder(struct node* root){
if(root==NULL) 
return 0;
printf("%d\n"root->key);
preorder(root->left);
preorder(root->right);
}
int postorder(struct node*root){
if(root==NULL)
returnn 0;
post order(root->left);
post order(root->right);
printf("%d\n",&n);
for(i=0;i<n;i++){
printf("enter key:\n");
scanf("%d",&key);
root=ins(root,key);
}
printf("inorder traversal\n");
inorder(root);
printf("preorder traversal\n");
preorder(root);
printf("post order traversal \n");
post order(root);
}
