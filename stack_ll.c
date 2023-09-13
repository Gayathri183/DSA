#include<stdio.h>//wrong
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void main()
{
int ch;
//clrses();
do
{
printf("enter 1:push 2:pop 3:peek 4:display");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
default:("invalid");
}
}
while(ch!=0);
}
void push();
void push();
void push();
void peek();
void pop();
void display();
//void main()
//{
//push(2);
//push(3);
//push(4);
//display();
//peek();
//pop();
//display();
//}

void push(int x)
{
int n;
printf("enter data");
scanf("%d",&n);
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=x;
nn->next=top;
top=nn;
}
void display()
{
struct node*temp;
temp=top;
if(top==NULL)
printf("empty");
else
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
void peek()
{
if(top==NULL)
printf("top is empty");
else
{
printf("\ntop element %d",top->data);
}
}
void pop()
{
struct node*temp;
temp=top;
if(top==NULL)
printf("empty");
else
{
printf("\npop%d",top->data);
top=top->next;
free(temp);
}
}

