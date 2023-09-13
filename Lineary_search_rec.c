//Linear search with recursive Without Recursive
#include<stdio.h>
void LinearSearch(int a[],int n,int key)
{
   if(a[n]==key)
     printf("Found at %d index",n);
   else
    LinearSearch(a,n-1,key);
}
void linear_search(int a[],int n,int key)
{
   int c,flag=0;
    for(int i=0;i<n;i++)
       {
         if(a[i]==key)
           {
            flag=1;
            c=i;
           }
        }
      if(flag==1)
        printf("Found at %d position",c);
      else
        printf("Not Found");
   }
void main()
{
 int n,key;
printf("size of an array");
  scanf("%d",&n);
    int a[n];
  printf("Enter elements to an arrray\n");
  for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("Enter Key to search:");
     scanf("%d",&key); 
     printf("With Recursssion\n");
     LinearSearch(a,n,key);
     printf("\n Without Recurrsive\n");
     linear_search(a,n,key);
     
}

