#include<stdio.h>
int binarysearching(int [],int,int);
int binarysearching(int x[],int size,int target)
{
	int low=0,high=size-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x[mid]==target)
		return mid;
		if(x[mid]<target)
		return low=mid+1;
		else
		return high=mid-1;
	}
	return -1;
}
int main()
{
	int n,key,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&key);
	int index;
	index=binarysearching(arr,n,key);
	if(index==-1)
	{
		printf("element is not found\n");
	}
	else
	{
		printf("element %d is found at %d index position\n",key,index);
	}
	return 0;
}

