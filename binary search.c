#include<stdio.h>
void main()
{
int i,j,k,temp=0,n,flag=0;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("sorted list \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("searching element");
scanf("%d",&k);
for(i=0;i<n;i++)
if(a[i]==k)
{flag=1;
break;
}
if(flag==1)
printf("%d element is found ",k);
if(flag==0)
printf("element not found");
}
