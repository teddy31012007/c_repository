#include<stdio.h>
int main()
{
	int n,i,min,max;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("elements are:\n");
	for(i=1;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
	min=arr[0];
	for(i=1;i<n;i++)
	if(min>arr[i])
	min=arr[i];
	max=arr[0];
	for(i=1;i<n;i++)
	if(max<arr[i])
	max=arr[i];
	printf("%minimum array is:%d\n",min);
	printf("%maximum array is:%d\n",max);
	return 0;
}
