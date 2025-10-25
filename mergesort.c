#include<stdio.h>
void mergesort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);
int main()
{
	int a[25],i,n;
	printf("enter the n value\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("Sort arrays:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void mergesort(int arr[],int low,int high)
{
	if(low < high)
	{
		int mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
void merge(int arr[],int low,int mid,int high)
{
	int b[10];
	int i=low,j=mid+1,k=0;
	
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=arr[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=arr[j];
		j++;
		k++;
	}
	for(i=low,k=0;i<=high;i++,k++)
	arr[i]=b[k];
	
}
