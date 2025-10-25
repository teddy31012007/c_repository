#include<stdio.h>
int main()
{
	int n,i,arr[10],pos,ele;
	printf("enter number of the elements (1 to 9)\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the position of an element to insert\n");
	scanf("%d",&pos);
	printf("enter the element to insert\n");
	scanf("%d",&ele);
	printf("before element insertion in an array\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
	for(i=n;i>pos-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;
	n++;
	printf("after element insertion in an array\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
