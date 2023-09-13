#include<stdio.h>
int stack[5];
int top=-1;
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
//getch();
}

void push()
{
int max;
printf("enter data");
scanf("%d",&max);
if(top==max-1)
{
printf("overflow");
}
else
{
top++;
stack[top]=max;
}
printf("%d push element\n",max);
}
void pop()
{
int item;
if(top==-1)
{
printf("under flow");
}
else
{
item=stack[top];
top--;
printf("%d pop element\n",item);
}
}
void peek()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("%d peek element\n",stack[top]);
}

}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
}


