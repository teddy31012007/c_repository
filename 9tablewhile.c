#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	int i=1;
	while(i<=10)
	{
		a=i*n;
		printf("%d x %d = %d\n",n,i,a);
		i++;
	}
	return 0;
}
