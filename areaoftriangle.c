#include<stdio.h>
int main ()
{
	int b,h;
	float a;
	printf("Enter breadth and height\n");
	scanf("%d%d",&b,&h);
	
	a=1/2*b*h;
	printf("b = %d h = %d\n",b,h);
	printf("area = %f",a);
	return 0;
}
