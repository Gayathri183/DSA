#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head,*temp;
void create();
void display();
void delete_pos();
int i,n;
void main()
{
create();
display();
delete_pos();
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
void delete_pos()
{
int p,c=1;
printf("delete position where u want:");
scanf("%d",&p);
temp=head;
if(p==1)
{
free(temp);
head=head->next;
}
else
{
for(c=1;c<p-1;c++)
{
temp=temp->next;
}
free(temp->next);
temp->next=temp->next->next;
printf("deleted list");
}
display();

}
