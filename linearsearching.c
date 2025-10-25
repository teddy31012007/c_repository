#include <stdio.h>

int linearSearch(int arr[], int n, int target) 
{
	int i;
    for( i = 0; i < n; i++) 
	{
        if (arr[i] == target) 
		{
            return i; // Return the index of the found element.
        }
    }
    return -1; // Element not found.
}

int main() 
{
    int i,key,n;
	printf("Enter the Size of the Array\n");
	scanf("%d",&n);
	int arr[n];
	
	//Read the Array Elements
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
		
	printf("Enter the Key Element to search in the given array\n");
	scanf("%d",&key);
	
	int index=linearSearch(arr,n,key);
	
	if(index==-1)
		printf("%d is not found in the given array",key);
	else
		printf("%d is found at %d index in the given array",key,index);
	
	return 0;
}

