#include<stdio.h>
#define max 10
int stack[10];
int top=-1;
int po(char po_exp[]){
int a,b,result;
int i;
for(i=0;po_exp[i]!='0';i++)
{
if(isdigit(po_exp[i]))
{
push(po_exp[i]-'0');
}
else
{
a=pop();
b=pop();
switch(po_exp[i]){
case'+':result=b+a;break;
case'-':result=b-a;break;
case'*':result=b*a;break;
case'/':result=b/a;break;
}
push(result);
}
return pop();
}
void push(int element)
{
if(top>=max-1){
printf("overflow");}
stack[++top]=element;
}
int pop()
{
if(top<=0){
printf("underfloe");}
return stack[--top];
}
int main(){
char po_exp[10];
int res;
printf("enter expression");
scanf("%s",po_exp);
res=po(po_exp);
printf("%d\n",res);
return 0;
}

