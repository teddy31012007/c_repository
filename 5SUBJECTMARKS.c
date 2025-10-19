#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	double avrg;
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	avrg=(s1+s2+s3+s4+s5)/5;
	if(s1<=40 &&s2<=40 && s3<=40 && s4<=40 && s5<=40)
	{
		printf("pass\n");
	}
	else
	{
		printf("fail\n");
	}
	if(avrg<=80)
	{
		printf("grade A");
	}
	else if(avrg<=60)
	{
		printf("grade B");
	}
	else
	{
		printf("grade C");
	}
		return 0;
}
