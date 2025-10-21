#include<stdio.h>
int binarysearching(int[],int,int);
int binarysearching(int arr[],int size,int target)
{
	int low=0,high=size-1,mid;
	while(low<=high)
	{
	
	mid=(low+high)/2;
	if(arr[mid]==target)
	return mid;
	if(arr[mid]<target)
	return low=mid+1;
	else
	return high=mid-1;
}
return -1;
}
int main()
{
	int i,n,key;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the key\n");
	scanf("%d",&key);
	int index=binarysearching(arr,n,key);
	if(index==-1)
	printf("%d is not found\n",key);
	else
	printf("%d is found at tha %d index position",key,index);
	return 0;	
}
