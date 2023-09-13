#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node*front=0;
struct node*rear=0;
struct node*temp;
void main(){
enqueue(2);
 enqueue(1);
 enqueue(8);
 display(); 
 dequeue();
 peek();
}
void enqueue(int x)
{
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=x;
nn->next=NULL;
if(front==0 && rear==0)
{
rear=front=nn;
}
else
{
rear->next=nn;
rear=nn;
}
}
void display()
{
temp=front;
if(front==0 && rear==0)
printf("empty");
else
{
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
}
void dequeue()
{
temp=front;
if(front==0 && rear==0)
printf("empty");
else{
printf("dequeue element:%d\n",front->data);
front=front->next;
free(temp);
}
}
void peek()
{
if(front==0 && rear==0)
printf("empty");
else
printf("peek element:%d\n",front->data);
}
