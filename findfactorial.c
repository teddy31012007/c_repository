#include<stdio.h>
int findFactors(int);
int main()
{
	int n;
	scanf("%d",&n);
	int fact_count=findFactors(n);
	printf("factors of given number %d is:%d\n",n,fact_count);
	 if(fact_count==2)
	{
		printf("given number of %d is prime number",n);
	}
	else
	{
       printf(" given number of %d is not a prime number",n);	
	}
	return 0;
}
int findFactors(int m)
{
	int count=2,i;
	printf("1");
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			printf(" %d ",i);
			count++;
	    } 
	}
	printf("%d\n",m);
	return count;
}
