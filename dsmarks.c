#include<stdio.h>
struct student{
	char name[50];
	int marks;
};
int main()
{
	int i,n;
	struct student students[5];
	{
	for(i=0;i<5;i++)
	printf("enter the name of the student %d\n",i+1);
	scanf("%s",students[i].name);
	printf("enter the marks for %s\n",students[i].name);
	scanf("%d",&students[i].marks);
    }
int total=0;
for(i=0;i<5;i++)
{
	total+=students[i].marks;
}
float average=total/5;
printf("\nTotal marks : %d\n",total);
printf("Average marks : %.2f\n",average);
return 0;
}

