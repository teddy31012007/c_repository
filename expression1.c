#include<stdio.h>
#include<math.h>
int main ()
{
	int i,x,n;
	int sum=1;
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(int)pow(x,i);
	}
	printf("sum = %d",sum);
	return 0;
}
