#include<stdio.h>
int main ()
{
	int n;
	printf("enter a months name\n");
	scanf("%d",&n);
	
	if (n==1)
	{
		printf("jan\n");
	}
	else if (n==2)
	{
		printf("feb\n");
	}
	else if (n==3)
	{
		printf("mar\n");
	}
	else if (n==4)
	{
		printf("apr\n");
	}
	else if (n==5)
	{
		printf("may\n");
	}
	else if (n==6)
	{
		printf("jun\n");
	}
	else if (n==7)
	{
		printf("jul\n");
	}
	else if (n==8)
	{
	    printf("aug\n");
	}
	else if (n==9)
	{
		printf("sep\n");
	}
	else if (n==10)
	{
		printf("oct\n");
	}
	else if (n==11)
	{
		printf("nov\n");
	}
	else if (n==12)
	{
		printf("dec\n");
	}
	else
	{
		printf("enter a month name (1 - 12 only\n)");
	}
	return 0;
}
