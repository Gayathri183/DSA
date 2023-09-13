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
void del_t();
int main()
{
create();
display();
del_t();
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
printf("is linked list");
}
void del_t()
{
nn=(struct node*)malloc(sizeof(struct node));
printf("delete tail:");
scanf("%d",&nn->data);
temp=head;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
display();
}




