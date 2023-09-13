#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};	
struct node *nn,*next,*head,*temp,*cur,*prev;
void create();
void display();
struct node *reverse();
int i,n;
void main()
{
create();
display();
head=reverse();
printf("\n");
display();
}
void create()
{
printf("Enter no of nodes ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
nn=(struct node*)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&nn->data);
nn->next=NULL;
if(head==NULL)
head=nn;
else
{
temp->next=nn;
}
temp=nn;
}}

void display()
{
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
struct node* reverse()
{
prev=NULL;
cur=head;
while(cur!=NULL)
{
temp=cur->next;
cur->next=prev;
prev=cur;
cur=temp;
}
printf("reverse linked list\n");
return prev;
}
