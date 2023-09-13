#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};	
struct node *nn,*next,*head,*temp,*prev;
void create();
void display();
void insert_bf();
int main()
{
create();
display();
insert_bf();
}
void create(int data)
{
int n,i;
printf("Enter no of nodes ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
nn=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&nn->data);
nn->next=NULL;
nn->prev=NULL;
if(head==NULL)
{
head=nn;
}
else
{
temp->next=nn;
nn->prev=temp;
}
temp=nn;
}
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
void insert()
{
temp=head;
head->prev=nn;
nn->next=head;
nn->prev=NULL;
head=nn;
display();
}
void insert_bf()
{
int value;
printf("enter data to node:");
nn=(struct node*)malloc(sizeof(struct node));
scanf("%d",&nn->data);
temp=head;
printf("enter data wr u want to insert before:");
scanf("%d",&value);
while(temp)
{
if(temp->next->data=value);
{
nn->prev=temp;
nn->next=temp->next;
temp->next->prev=nn;
temp->next=nn;
}
printf("inserted list:-");
display();
}
}

