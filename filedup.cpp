#include <stdio.h>

int main() {
    FILE *fp1;
    fp1=fopen("crickterTeam.txt","r");
    if (fp1==NULL)
	{
        printf("File connection failed\n");
        return 1;
    }
    int count=0;
    char ch;
    while (1)
	{
        ch=fgetc(fp1);
        if(ch==EOF)
        break;
        printf("%c",ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        count++;
    }
    printf("count vowel -> %d",count);
    fclose(fp1);
    return 0;
}
