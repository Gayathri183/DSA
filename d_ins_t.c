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
void ins_t();
int main()
{
create();
display();
ins_t();
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
void ins_t()
{
nn=(struct node*)malloc(sizeof(struct node));
printf("insert tail ");
scanf("%d",&nn->data);
nn->next=NULL;
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
nn->prev=temp;
temp->next=nn;
display();
}
