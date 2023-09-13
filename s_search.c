#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head,*temp,*index,*n,*cur;
void create();
void display();
void search();
void main()
{
create();
display();
search();
}
void create()
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
}
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
printf("%d\t",temp->data);
temp=temp->next;
}
}
void search()
{
int num;
printf("enter num");
scanf("%d",&num);
temp=head;
while(temp!=NULL)
{
if(temp->data==num)
{
printf("num found");
return;
}
else
{
temp=temp->next;
}
}
printf("num not found");

}

