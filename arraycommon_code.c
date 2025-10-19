 #include<stdio.h>
 int main()
 {
 	int n,i;
 	scanf("%d",&n);
 	printf("enter the value\n");
 	int arr[n];
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	}
	printf("array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 }
