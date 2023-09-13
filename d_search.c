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
void search();
int main()
{
create();
display();
search();
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
printf("is linked list");
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


