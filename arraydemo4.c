#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the element in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
