#include<stdio.h>
int main()
{
	int month_num;
	scanf("%d",&month_num);
	switch(month_num)
	{
		case 3:
		case 4:
		case 5:
			printf("summer");
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			printf("rainy");
			break;
		case 10:
		case 11:
		case 12:
		case 1:
		case 2:
			printf("winter");
			break;
		default:
			printf("enter a valid month number");
			break;
	}
	return 0;
}
