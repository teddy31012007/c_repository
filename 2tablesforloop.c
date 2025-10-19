#include<stdio.h>
int main()
{
	int i,m,n,a;
	scanf("%d %d %d",&m,&n,&a);
	for(i=1;i<=n;i++)
	{
		printf("%d x %d =%d %d x %d = %d \n",m,i,(m*i),a,(a*i));
	}
	return 0;
}
