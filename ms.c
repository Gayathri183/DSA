#include<stdio.h>
int main(){
int a[10],n,i,j,j1,i1;
printf("enter size \n");
scanf("%d",&n);
printf("enter ele");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ms(a,0,n-1);
printf("sorted array");
for(i=0;i<n;i++){
printf("%d",a[i]);
}
}
void ms(int a[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
ms(a,mid+1,j);
ms(a,i,mid,mid+1,j);
}
}
void merge(int a[]){
int temp[20];
int i,j,k,j1,j2,i1,i2;
i=i1;
j=i2;
k=0;
while(i<=j1 && j<=j2)
{
if(a[i]<a[j])
temp[k++]=a[i++];
else
temp[k++]=a[i++];
}
while(i<=j1)
{
temp[k++]=a[i++];
}
while(j<=j2){
temp[k++]=a[j++];}
for(i=i1;j=0;i<=j2;i++;j++){
a[i]=temp[j];}
}
