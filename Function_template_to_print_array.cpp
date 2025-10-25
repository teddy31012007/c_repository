#include<iostream>
using namespace std;
template<typename T>
void bubbleSort(T arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				T temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}template<typename T>
void printArray(T arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
	int arrInt[n];
	cout<<"Enter "<<n<<" integer elements:\n";
	for(int i=0;i<n;i++)
	cin>>arrInt[i];
	cout<<"Original integer array: ";
	printArray(arrInt, n);
	bubbleSort(arrInt, n);
	cout<<"Sorted integer array: ";
	printArray(arrInt, n);
}
