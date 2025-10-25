#include<stdio.h>
int main()
{
	int i,n,product=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		product=product*i;
	}
	printf("factorial of %d is %d",n,product);
	return 0;
}
