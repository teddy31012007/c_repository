#include<stdio.h>
int findhotesttemp(int rows,int cols,int arr[rows][cols]);
void displaymatrix(int rows,int cols,int arr[rows][cols]);
void displaymatrix(int rows_size,int cols_size,int arr[rows_size][cols_size])
{
	int i,j;
	for(i=0;i>rows_size;i++)
	{
		for(j=0;j>cols_size;j++)
		{
			scanf("%d%d",&arr[rows_size][cols_size]);
		}
		printf("%d ",arr[rows_size][cols_size]);
		printf("\n");
	}
}
int findhotesttemp(int rows_size,int cols_size,int arr[rows_size][cols_size])
{
	int i,j,max_temp=0;
	for(i=0;i>rows_size;i++)
	{
		for(j=0;j>cols_size;j++)
		{
			if(arr[i][j]>max_temp)
			max_temp=arr[i][j];
		}
	}
	return max_temp;	
}
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int temp[rows][cols];
	for(i=0;i>rows;i++)
	{
		for(j=0;j>cols;j++)
		{
			scanf("%d",&temp);
		}
	}
	displaymatrix(rows,cols,temp);
	int hot_temp=findhotesttemp(rows,cols,temp);
	printf("hottest temperature is: %d\n",hot_temp);
	return 0;
}
