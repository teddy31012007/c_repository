#include<stdio.h>
int main()
{
	wish();
	printf("control comes from wish function\n");
	wish();
	return 0;
}
void wish()
{
	printf("hello world\n");
} 
