#include<stdio.h>
int main()
{
	int n,i,rev=0,sum=0,rem=0;
	scanf("%d",&n);
	printf("enter the value\n");
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("array element are:\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	printf("reverse : %d",sum);
	
	return 0;
}
