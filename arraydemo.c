#include<stdio.h>
int main()
{
	int marks[6]={78,89,39,94,90,76};
	printf("%d\n",marks[0]);
	printf("%d\n",marks[1]);
	printf("%d\n",marks[2]);
	printf("%d\n",marks[3]);
	printf("%d\n",marks[4]);
	printf("%d\n",marks[5]);
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d ",marks[i]);
	}
	return 0;
}
