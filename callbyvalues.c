#include<stdio.h>
void swap(int *,int *);
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	printf("enter any two values\n");
	scanf("%d%d",&a,&b);
	printf("before swapping a and b values\n");
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("after swapping of a and b values\n");
	printf("%d %d\n",a,b);
	return 0;
}
