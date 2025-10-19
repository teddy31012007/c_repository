#include<stdio.h>
int main()
{
	int size,i,sum=0;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(i%2==0 && arr[i]%2==0)
		{
			sum=sum+arr[i];
		}
	}
	printf("sum of all the even elements at even index position: %d",sum);
	return 0;
	
}
