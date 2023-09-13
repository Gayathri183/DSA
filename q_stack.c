#include<stdio.h>
#define N 5 
int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;

void push1(int data)
{
if(top1==N-1)
printf("overflow\n");
else
{
top1++;
s1[top1]=data;
}
}
void push2(int data)
{
if(top2==N-1){
printf("over flow\n");
}
else
{
top2++;
s2[top2]=data;
}
}
int pop1()
{
return s1[top1--];
}
int pop2()
{
return s2[top2--];
}
void dequeue()
{
for(int i=0;i<count;i++)
{
push2(pop1());
}
printf("deltd ele is %d \n",pop2());
count--;
for(int i=0;i<count;i++)
{
push1(pop2());}}
void enqueue(int x)
{
push1(x);
count++;
}
void display(){
int i;
if(top1==-1)
printf("mty\n");
for(i=0;i<=top1;i++)
{
printf("%d",s1[i]);
}
}
void main(){
enqueue(5);
enqueue(3);
enqueue(1);
dequeue();
enqueue(4);
display();
}


