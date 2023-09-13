#include<stdio.h>
int main()
{
int i,j,min,n,t;
int a[5];
printf("enter array ele");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<4;i++)  //n-1=5-1=4
{
min=i;
for(j=i+1;j<5;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
printf("sorted ele \n");;
for(i=0;i<5;i++)
{
printf("%d \n",a[i]);
}
}


