//Binary search with Recursive without Recursive
#include<stdio.h>
int BinarySearch_Wrec(int a[],int n,int search)
{
   int i=0,j=n-1,mid;
 while(i<=j)
 {
   mid=(i+j)/2;
   if(a[mid]==search)
     return 1;
   else if(search>a[mid])
         i=mid;
      else
       j=mid;
 
  } 
 return 0;
}
void Binary_rec(int a[],int low,int high ,int k)
{
  int mid;
  mid=(low+high)/2;
  if(a[mid]==k)
   {
   printf("Found at %d index ",mid);
   
   }
   else if(k>a[mid])
     Binary_rec(a,mid,high,k);
   else
      Binary_rec(a,low,mid+1,k);
 }
void main()
{
  int n,t,res,k,i,j;
  printf("size of an array");
  scanf("%d",&n);
    int a[n];
  printf("Enter elements to an arrray\n");
  for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
       if(a[i]>a[j])
        {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
          }
      }
  }
  printf("Array in sorted Order is as folows\n");
     for(int i=0;i<n;i++)
       printf("%d ",a[i]);
  printf("Enter Searching Key");
  scanf("%d",&k);
  res=BinarySearch_Wrec(a,n,k);
  printf("Without recurrsive\n");
  if(res==1)
     printf("Found");
  else
    printf("NOt Found");
    printf("\nWith recurrsive\n");
    Binary_rec(a,0,n-1,k);
 }
    
