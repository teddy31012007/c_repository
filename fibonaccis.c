#include <stdio.h> 
int main()  
{ 
int n, i; 
int t1 = 0, t2 = 1, nextTerm; 
// Input from user 
printf("Enter number of terms: "); 
scanf("%d", &n); 
printf("Fibonacci Series (Iterative): "); 
for (i = 0; i < n; i++)  
{ 
printf("%d ", t1); 
nextTerm = t1 + t2; 
t1 = t2; 
t2 = nextTerm; 
} 
return 0; 
} 

