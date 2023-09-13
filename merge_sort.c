#include<stdio.h>
void merge(int a[],int low,int mid ,int high);
void mergesort(int a[],int low,int high);

// function to merge the sub-arrays
void merge(int a[],int low,int mid ,int high)
{
	int b[20]; //same size of a[]
	int i,j,k;
	i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		    b[k++]=a[i++];
		else
		   b[k++]=a[j++]; //copying the elements 
	}
	while (i<=mid)
		b[k++]=a[i++];
	while 
		(j<=high) b[k++]=a[j++];
		for (k=low;k<=high;k++)
	        a[k]=b[k];
}

// merge sort function
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	 {
	mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
	}
}
int main()
{
    int a[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	mergesort(a,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
	return 0;
}
 

