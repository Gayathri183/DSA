#include<stdio.h>
int s[max];
int top=-1;
int post(char po_exp){
int a,b res;
int i;
for(i=0;pos_exp[i]='\0';i++)
{
if(isdigit)po_exp[i])
push(po_exp[i]-'0');
else
{
a=pop();b=pop();
switch(po_exp[i]){
case '+':res=b+a;break;
case '-':res=b-a;break;
case '*':res=b*a;break;
case '/':res=b/a;break;
}
push(result);
}
}
void push(int ele)
{
if(top==max-1){
printf("ov");
return n;
}
stack[++top]=ele;
}
int pop()
{
if(top<0){
printf("uf");
return;
}
stack[top--];
}
int main(){
char po_exp[0];
int res;
printf("po_exp");
scanf("%s",po_exp);
res=eval_postfix(po_exp);
printf("%d",res);
return 0;
}
if(top>s[max])
printf("overflow");

