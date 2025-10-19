#include<stdio.h>
#include<math.h>
int findarmstrongcalculation(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=findarmstrongcalculation(n);
	if(n==res)
	   printf("given number %d is armstrong number\n",n);
	else
	   printf("given number %d is not a armstrong number\n",n);
	   return 0;   
}
int findarmstrongcalculation(int n)
{
	int digits=(int)log10(n)+1;
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(int)pow(rem,digits);
		n=n/10;
	}
	printf("%d\n",sum);
	return sum;
}

