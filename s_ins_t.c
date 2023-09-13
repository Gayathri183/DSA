#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head,*temp;
void create();
void display();
void insert_e();
int i,n;
void main()
{
create();
display();
insert_e();
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
void insert_e()
{
nn=(struct node*)malloc(sizeof(struct node));
printf("enter data u want to insert:");
scanf("%d",&nn->data);
nn->next=NULL;
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=nn;
display();
}

