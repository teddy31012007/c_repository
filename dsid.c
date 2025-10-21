#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[50];
	float marks;
};
int main()
    {
	    struct student s1={101,"Alice",89.5};
	    struct student s2;
	    s2=s1;
	    printf("student 2 details:\n");
	    printf("ID: %d\n",s2.id);
	    printf("Name :%s\n",s2.name);
	    printf("Marks :%.2f\n",s2.marks);
	    return 0;
	}

