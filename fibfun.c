#include<stdio.h>
void printfibonacci(int);
int main()
{
	int range;
	scanf("%d",&range);
	printfibonacci(range);
	return 0;
}
void printfibonacci(int n)
{
	int a=0,b=1,c;
	printf("%d %d ",a,b);
	c=a+b;
	while(c<=n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}
