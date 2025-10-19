#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age<=0 && age>=2)
	{
		printf("infant");
	}
	else if(age<=3 && age>=12)
	{
		printf("child");
	}
	else if(age<=13 && age>=19)
	{
		printf("teen");
	}
	else if(age<=20 && age>=64)
	{
		printf("adult");
	}
	else
	{
		printf("senior");
	}
	return 0;
}
