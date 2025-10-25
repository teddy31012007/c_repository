#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("VIRAT KOHLI.jpg","rb");
	fp2=fopen("virat.jpg","wb+");
	if(fp1==NULL||fp2==NULL)
	{
		printf("File connection failed\n");
		return 2;
	}

	char buffer[2048];
	unsigned int bytesread;
	while(1)
	{
		bytesread=fread(buffer,1,sizeof(buffer),fp1);
		if(bytesread==0)
		break;
	
		fwrite(buffer,1,sizeof(buffer),fp2);
	}
	printf("image copied successfully");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
