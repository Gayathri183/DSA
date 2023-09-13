#include<stdio.h>
void main()
{

int i,k,f=0,n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter searching elements");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
f=1;
printf("element found at %d index",i);
break;
}
}
if(f==0)
printf("element not found");

}
