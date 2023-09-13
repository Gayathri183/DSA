#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head,*temp;
void create();
void display();
void insert_af();
int i,n;
void main()
{
create();
display();
insert_af();
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
void insert_af()
{
int value;
printf("enter data to node:");
nn=(struct node*)malloc(sizeof(struct node));
scanf("%d",&nn->data);
temp=head;
printf("enter data wr u want to insert after:");
scanf("%d",&value);
while(temp!=NULL && temp->data!=value)
{
temp=temp->next;
}
nn->next=temp->next;
temp->next=nn;
printf("after insertiion list");
display();
}
