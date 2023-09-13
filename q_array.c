#include<stdio.h>
int a[5];
int q[5];
int rear=-1;
int front=-1;

void display()
{ int i;
if(front==-1 && rear==-1)
printf("mty");
else
{
for(i=front;i<rear+1;i++)
{printf("%d",q[i]);
}
}
}


void enq(int x){
int N;
if(rear==N-1)
printf("overflow");
else if(front=-1 && rear==-1){ //(rear)+1%n==f 
front=rear=0;
q[rear]=x;
}
else{
rear++;//(r+1)%N
q[rear]=x;
}}
void deq(){
if(rear==-1 && front==-1)
printf("mty");
else if(front==rear)
front=rear=-1;
else{
printf("%d",q[front]);
front++;
}}
void main(){
	enq(5);
	enq(6);
    	enq(7);
	enq(8);
	enq(2);
	printf("dequeue ele  : ");
	deq();
	deq();
	deq();
	printf("\nremainnig q elements: \n");
	display();
}


