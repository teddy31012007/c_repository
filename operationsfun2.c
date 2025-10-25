#include<stdio.h>
int add(int,int);
int subtract(int,int);
int product(int,int);
int divide(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int sum=add(x,y);
	int diff=subtract(x,y);
	int pro=product(x,y);
	int div=divide(x,y);
	printf("addition of %d and %d is: %d\n",x,y,sum);
    printf("difference of %d and %d is: %d\n",x,y,diff);
    printf("multiply of %d and %d is: %d\n",x,y,pro);
    printf("division of %d and %d is: %d\n",x,y,div);
    return 0;
}
int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a-b;
}
int product(int a,int b)
{
	return a*b;
}
int divide(int a,int b)
{
	return a/b;
}
