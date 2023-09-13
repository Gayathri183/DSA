#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head,*temp,*n;
void create_cll();
void display();
void ins_p();
void main()
{
create_cll();
display();
ins_p();
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
head=temp=nn;
else
{
temp->next=nn;
temp=nn;
}
temp->next=head;
temp=nn;
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
void ins_p()
{
int c=1;
nn=(struct node*)malloc(sizeof(struct node));
printf("enter data u want to insert");
scanf("%d",&nn->data);
nn->next=NULL;
temp=head;
while(c<2)
{
temp=temp->next;
c++;
}
nn->next=temp->next;
temp->next=nn;
printf("insrtion list");
display();
}



