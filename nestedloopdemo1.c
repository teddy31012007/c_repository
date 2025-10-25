#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d-%d\n",i,j);
		}
		printf("next %d\n",i);
	}
	
	return 0;
}
