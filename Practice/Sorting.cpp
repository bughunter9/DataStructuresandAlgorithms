#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n)
{
// Insert an element from unsorted array to correct position in sorted array
	for(int i=0;i<n;i++)
	{
		int current=arr[i];
		int j=i-1;
		while( arr[j]>current && j>=0 )
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}

void bubbleSort(int arr[], int n)
{
// Repeatedly swap 2 numbers if they are in the wrong order
	int counter=1;
	int temp;
	while(counter<n)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void selectionSort(int arr[],int n)
{
// Find the minimum element in unsorted array and then swap it with element in beginning
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selectionSort(a,n);
	bubbleSort(a,n);
	insertionSort(a,n);

	return 0;
}