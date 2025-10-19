#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]%10==i)
		count++;
    }
	printf("their last digits are equal to its index value is %d",count);
	return 0;
}
