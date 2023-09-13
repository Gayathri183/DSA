#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head=NULL,*temp,*n,*tail;
void create_cll();
void display();
void insert_h();
void main()
{
create_cll();
display();
insert_h();
}
void create_cll()
{
int n,i;
printf("Enter no of nodes ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
nn=(struct node*)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&nn->data);
nn->next=NULL;
if(head==NULL)
{
head=nn;
temp=head;}
else
{
temp->next=nn;
temp=temp->next;
}
tail=temp;
tail->next=head;

}}
void display()
{
printf("%d",head->data);
temp=head->next;
while(temp!=head)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void insert_h()
{
nn=(struct node*)malloc(sizeof(struct node));
printf("insert head");
scanf("%d",&nn->data);
nn->next=head;
head=nn;
tail->next=head;
display();
}


