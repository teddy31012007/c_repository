#include<stdio.h>
int main()
{
	char a[25]={0};
	char b[25]={0};
	int i;
	char str[100];
	printf("enter any string\n");
	gets(str);
	printf("before uppercase conversion: %s\n",str);
	strupr(str);
	printf("after uppercase conversion: %s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		a[str[i]-65]++;
		b[str[i]-65]++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0 && b[i]!=0)
		{
			printf("%c -> %d\n",(char)i+65,a[i]);
			printf("%c -> %d\n",(char)i+65,b[i]);
		}
	}
	return 0;
}
