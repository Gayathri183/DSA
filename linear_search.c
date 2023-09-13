#include<stdio.h>
void main(){
int n,i,j,k,f=0;
int a[5];
printf("enter array ele");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
printf("enter searching key");
scanf("%d",&k);
for(i=0;i<5;i++)
{
{
if(k==a[i])
{
f=1;
printf("ele found at %d\n",a[i]);
break;
}
if(f==0)
printf("ele not found\n");
}
}
}


