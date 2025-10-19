#include<stdio.h>
int main()
{
	int r;
	float a;
	printf("Enter radius\n");
	scanf("%d",&r);
	a=3.142*r*r;
	printf("r = %d\n",r);
	printf("area = %f",a);
	return 0;
}
