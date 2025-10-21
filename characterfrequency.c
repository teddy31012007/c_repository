#include<stdio.h>
int main()
{
	char arr[25]={0};
	int i;
	char str[50];
	printf("enter any string\n");
	gets(str);
	printf("before uppercase conversion: %s\n",str);
	strupr(str);
	printf("after uppercase conversion: %s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		arr[str[i]-65]++;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		{
			printf("%c -> %d\n",(char)i+65,arr[i]);
		}
	}
	return 0;
}
