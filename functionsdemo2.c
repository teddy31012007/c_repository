#include<stdio.h>
void addition(int,int);
int substraction(int,int);
int product(int,int);
int division(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	addition (x,y);
	printf("control comes from addition function ");
	int res=subtraction(x,y);
	printf("subtraction = %d",res);
	return 0;
}
int subtraction(int m,int n)
{
	int diff=m-n;
	return diff;
}
void addition(int m,int n)
{
	int sum=m+n;
	printf("sum=%d",sum);
	return addition;
}
