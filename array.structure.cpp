#include<stdio.h>
struct student{
	int rollno;
	float marks;
}s[5];
int main()
{
	int i;
	
	printf("Enter Records of 5 students:");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the rollno: ");
		scanf("%d",&s[i].rollno);
		
		printf("Enter the marks: ");
		scanf("%f",&s[i].marks);
	}
	
	printf("Entered Details of 5 students are:\n");
	
	for(i=0;i<5;i++){
		printf("%d %f\n",s[i].rollno,s[i].marks);
	}
	return 0;
}
