#include<stdio.h>
int main()
{
	int i,key,found=0,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the key \n");
	scanf("%d3",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("%d the key element is found\n",key);
	}
	else
	{
		printf("%d the key element is not found",key);
	}
    
	
	return 0;
}
