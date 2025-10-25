#include<stdio.h>
int main()
{
	FILE*fp1;
	fp1=fopen("dhanimma.txt","w+");
	if(fp1==NULL)
	{
		printf("file connection failed");
		return 1;
	}
	char ch;
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='@')
		break;
		fputc(ch,fp1);
	}
	fclose(fp1);
	return 0;
}
