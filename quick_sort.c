#include<stdio.h>
void qs(int a[],int low,int high);
int main()
{
int i,n;
printf("enter the size of array:\n");
scanf("%d",&n);
int a[n];
printf("enter ele\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);}
qs(a,0,n-1);
printf("after applying quicksort");
for(i=0;i<n;i++){
printf("%d",a[i]);
}

}
void qs(int a[],int low,int high){
int i,j,pivot,t;
if(low<high)
{
i=low;j=high;
pivot=low;
while(i<j){
while(a[i]<=a[pivot])
{
i++;
}
while(a[j]>a[pivot])    
j--;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}
t=a[j];
a[j]=a[pivot];
a[pivot]=t;
qs(a,low,j-1);
qs(a,j+1,high);
}
}


