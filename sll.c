#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *temp;
};
void create();
void len();
void create(int x){
int n,int l;
struct node *temp,*head,*next,*nn;
void struct create{
printf("enter no.of nodes");
nn=(struct node*)malloc(sizeof)(struct node));
scanf("%d",&nn);
nn->data=x;
nn->next=NULL;
if(head==NULL)
head=nn;
else
{
temp=temp->next;
temp=nn;
}
}
void len(int len){
if(len%2==0)
printf("even");
else
printf("odd");
}
void main(){
create();
len();
}
