#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("Iyear.txt","r");
	fp2=fopen("Iyearcopy.txt","w+");
	if(fp1==NULL)
	 {
	 	printf("File Open for Reading is failed\n");
	 	return 1;
	 }
	if(fp2==NULL)
	{
		printf("File Open for Writing is failed\n");
		return 1;
	}
	char ch;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		   break;
		printf("%c",ch);
		fputc(ch,fp2);
	}
	printf("File Copied successfully");
	fclose(fp1);
	fclose(fp2);
	return 0;




}

