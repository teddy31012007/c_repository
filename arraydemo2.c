#include<stdio.h>
int main()
{
	int marks[6]={89,78,90,45,78,56};
	printf("%d\n",marks[0]);
	printf("%d\n",marks[1]);
	printf("%d\n",marks[2]);
	printf("%d\n",marks[3]);
	printf("%d\n",marks[4]);
	printf("%d\n",marks[5]);
	int total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
	printf("%d",total);
	return 0;
}
