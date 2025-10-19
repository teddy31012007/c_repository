#include<stdio.h>
int main()
{
	int a,n,d;
	float nth;
	printf("enter arithmetic sequence\n");
	scanf("%d%d%d",&a,&n,&d);
	
	nth= a+(n-1)*d;
	printf("a = %d\n n = %d\n d = %d\n",a,n,d);
	printf("arithmetic sequence = %f",nth);
	
	
	return 0;
}
