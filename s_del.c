#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
void create();
void deletetail();
void display();
struct node*nn,*temp,*temp,*head;
void main()
{
create();
deletetail();
display();
}
void create()
{
int i,n;
printf("Enter no of nodes ");
scanf("%d",&n);
nn=(struct node*)malloc(sizeof(struct node));
for(i=0;i<5;i++)
{
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
void deletetail()
{
temp=head;
while(temp->next->next!=NULL)
temp=temp->next;
temp->next=NULL;
display();
}
void display()
{
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
