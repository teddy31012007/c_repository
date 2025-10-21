#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
	int i,j;
    for ( i = 0; i < n - 1; i++) 
	{
        int swapped = 0; 			// Optimization to stop early if no swaps occur.
        for ( j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                // Swap arr[j] and arr[j+1].
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) 
		    break; 					// Break if no swaps occurred in this pass.
    }
}

void printArray(int arr[], int n) 
{
	int i;
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int i,n;
	printf("Enter the Size of the Array\n");
	scanf("%d",&n);
	int arr[n];
	
	//Read the Array Elements
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);

    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

