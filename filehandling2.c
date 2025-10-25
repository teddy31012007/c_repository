#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("crickterTeam.txt","r");
	if(fp1==NULL)
	{
		printf("File connection failed\n");
		return 1;
	}
	int char_count=0,words_count=0,lines_count=0;
	char ch;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		break;
		printf("%c",ch);
		char_count++;
		if(ch==' '||ch=='\n')
		words_count++;
		if(ch=='\n')
		lines_count++;
	}
	printf("\ncharacters count = %d\n",char_count);
	printf("words count = %d\n",words_count);
	printf("lines count = %d\n",lines_count);
	fclose(fp1);
	return 0;
}
