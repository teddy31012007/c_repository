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
	int even_sum=0,odd_sum=0;
	for(i=0;i<size;i++)
	{
		if(i%2==0)
		{
            even_sum=even_sum+arr[i];
		}
		else
		{
			odd_sum=odd_sum+arr[i];
		}
	}
	printf("even_sum=%d\n",even_sum);
	printf("odd_sum=%d\n",odd_sum);
	return 0;
	
}
