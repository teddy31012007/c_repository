#include<stdio.h>
int main()
{
	int rows,cols,i,j,sum=0;
	scanf("%d%d",&rows,&cols);
	int arr[rows][cols];
	printf("enter %d elements\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",arr[i][j]);
			if(i+j==rows-1)
			sum=sum+arr[i][j];
		}
		printf("\n");
	}
	printf("sum of all the elements of the 2D array is: %d\n",sum);
	return 0;
}
