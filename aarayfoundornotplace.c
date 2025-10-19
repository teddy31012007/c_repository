#include<stdio.h>
int main()
{
	int i,key,found=0,pos=0,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the key \n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			found=1;
			pos=i;
			break;
		}
	}
	if(found==1)
	{
		printf("%d is found at %d index in the given array\n",key,i);
	}
	else
	{
		printf("%d is not found at %d index in the given array",key,i);
	}
    
	
	return 0;
}
