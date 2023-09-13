#include<stdio.h>//wrong
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn,*next,*head,*temp,*n;
void create_cll();
void display();
void del_h();
void main()
{
create_cll();
display();
del_h();
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
void del_h()
{
temp=head;
while(temp->next!=head)
{
 temp=temp->next;
 }
 temp->next=head->next;
free(temp);
printf("deletion list::");
display();
}

