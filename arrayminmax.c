#include<stdio.h>
int main()
{
	int i,n,min,max;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	//find the minimum
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	//find the maximum
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("minimum element in the array is:%d\n",min);
	printf("maximum element in the array is:%d",max);
	
	
	return 0;
}
