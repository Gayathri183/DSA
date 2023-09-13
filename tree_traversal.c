#include<stdio.h>
#include<stdlib.h>
struct node{
int key;
struct node *lft;
struct node *rgt;
};
struct node *nn;
struct node *root=NULL;
struct node *ins(struct node *root,int key)
{
nn=(struct node*)malloc(sizeof(struct node));
nn->key=key;
if(root==NULL)
root=nn;
else if(key<root->key)
root->lft=ins(root->lft,key);
else if(key>root->key)
root->rgt=ins(root->rgt,key);
return root;
}
int inorder(struct node *root)
{
if(root==NULL)
return 0;
inorder(root->lft);
printf("%d:",root->key);
inorder(root->rgt);
}
int preorder(struct node *root){
if(root==NULL)
return 0;
printf("%d",root->key);
preorder(root->lft);
preorder(root->rgt);
}
int postorder(struct node *root)
{
if(root==NULL)
return 0;
postorder(root->lft);
postorder(root->rgt);
printf("%d",root->key);
}
struct node *del(root,int key){
if(root==NULL)
{
return root;
else if(key<root->key)
root->lch=del(root->lch,key);
else if(key>root->key)
root->rch=del(root->rch,key);
}
else
{
if(root->rgt && root->lft)
{
struct node *suc;
suc=root->rgt;
while(suc->rgt!=NULL)
suc=suc->lft;
root->key=suc->lft;
root->rgt=del(root->lft,suc->key);
}
else
{
if(root->rgt)
return root->rgt;
}
else
{
return root->lft;
free(root);
}}
return root;
}
int main(){
int n,i,key;
printf("no fo nodes");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("nter key");
scanf("%d",&key);
root=ins(root,key);
}
printf("inorder traversal \n");
inorder(root);
printf("preorder traversal \n");
preorder(root);
printf("postorder traversal \n");
postorder(root);
}

