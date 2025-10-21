#include<stdio.h>
int main()
{
	char arr[30];
	int i,digit_count[10]={0};
	printf("enter any string\n");
	gets(arr);
    for(i=0;arr[i]!='\0';i++)
     {
     	digit_count[arr[i]-'0']++;
	 }
	printf("digit_count:\n");
	for(i=0;i<10;i++)
	{
		if(digit_count[i]!=0)
		printf("%d ->%d\n",i,digit_count[i]);
	 } 
	return 0;
}
