#include<stdio.h>
int main()
{
int i,j,k;
int a[5];
printf("enter array ele");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
k=a[i];
j=i-1;
while(j>=0 && a[j]>k)
{
a[j+1]=a[j];
j--;
}
a[j+1]=k;
}
printf("sorted list\n");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}
