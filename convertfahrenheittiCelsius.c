#include<stdio.h>
int main()
{
	int Fahrenheit;
	float celsius;
	 printf("Enter Fahrenheit\n");
	 scanf("%d",&Fahrenheit);
	 
	 celsius = 9/5*(Fahrenheit-32);
	 printf("Fahrenheit = %d\n",Fahrenheit);
	 printf("celsius = %f",celsius);
	 return 0;
}
