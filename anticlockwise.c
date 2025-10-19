#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter element before circular rotation\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
	int temp=arr[0];
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
	printf("after element after circular rotations\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
