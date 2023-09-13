#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;

}*temp,*pre,*nn,*last,*prev;	
struct node *head=NULL;
void create();
void display();
void rev();
int main()
{
create();
display();
rev();
}
void create()
{
int n,i;
printf("Enter no of nodes ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
nn=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&nn->data);
nn->prev=NULL;
nn->next=NULL;
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
last=nn;
}
}
void display()
{
temp=head;
while(temp)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
void rev()
{
pre=NULL;
temp=head;
while(temp!=NULL)
{
pre=temp->prev;
temp->prev=temp->next;
temp->next=pre;
temp=temp->prev;
}
pre=head;
head=last;
last=pre;
display();
}





