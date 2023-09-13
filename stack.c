#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
struct stack{
int top;
unsigned size;
int* array;
};
struct stack* createstack(unsigned size)
{
 struct stack* stack=(struct stack*)malloc(sizeof(struct stack));
 stack->size=size;
 stack->top=-1;
 stack->array=(int*)malloc(stack->size*sizeof(int));
 return stack;
 }
 int isFull(struct stack* stack)
 {
 return stack->top==stack->size-1;
 }
 int isEmpty(struct stack* stack)
 {
 return stack->top==-1;
 }
 void push(struct stack* stack,int item)
 {
 if(isFull(stack))
 return;
 stack->array[++stack->top]=item;
 printf("%d pushed stack\n",item);}
 int pop(struct stack* stack)
 {
 if(isEmpty(stack))
 return INT_MIN;
 return stack->array[stack->top--];
 }
 int peek(struct stack* stack)
 {
 if(isEmpty(stack))
 return INT_MIN;
 return stack->array[stack->top];
 }
 int main()
 {
 struct stack* stack=createstack(100);
 push(stack,10);
 push(stack,20);
 push(stack,30);
 printf("%d popped from stack\n",pop(stack));
 return 0;
 }
 
 

