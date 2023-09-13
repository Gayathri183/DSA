#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head,*temp,*n;
void create();
void display();

void main()
{
create();
display();
}
void create()
{
int n,i;
printf("Enter  nodes ");
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
int c=0;
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
c++;
}
printf("count %d\n:",c);
}

