#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node *nn;
struct node *rear=0;
struct node *front=0;
struct node *temp=0;

void enqueue(int x)
{
nn=(struct node*)malloc(sizeof(struct node));
nn->data=x;
nn->next=0;
if(rear==0)
{
front=rear=nn;
rear->next=front;
}
else
{
rear->next=nn;
rear=nn;
rear->next=front;
}
//display();
}
void dequeue()
{
temp=front;
if(front==0 && rear==0)
{
printf("empty");
}
else if(front==rear){
front=rear=0;
free(temp);
}
else{
front=front->next;
rear->next=front;
free(temp);
}
display();
}
void display()
{
temp=front;
if(front==0 && rear==0 )
printf("empty");
else
{
while(temp->next!=front)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
int main(){
enqueue(5);
enqueue(6);
enqueue(7);
enqueue(8);
dequeue();
display();
return 0;
}



