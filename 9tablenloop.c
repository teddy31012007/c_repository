#include<stdio.h>
int main()
{
	int i,m,n;
	scanf("%d %d",&m,&n);
	for(i=1;i<=n;i++)
	{
		printf("%d x %d = %d\n",m,i,(m*i));
	}
	return 0;
}
