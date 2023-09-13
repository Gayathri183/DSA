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
int main()
{
create();
display();

}
void create(int data)
{
int n=5,i;
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
int c=0;
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
c++;
}
printf("count is %d",c);
}




