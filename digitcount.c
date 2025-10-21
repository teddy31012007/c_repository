#include<stdio.h>
int finddigitcount(int);
int finddigitcount(int n)
{
	int digits=0;
	while(n>0)
	{
		int rem=n%10;
		digits++;
		n=n/10;
	}
	return digits;
}
int main()
{
	int n;
	scanf("%d",&n);
	int count=finddigitcount(n);
	printf("no of digits of the given number %d is:%d",n,count); 
	return 0;
}
