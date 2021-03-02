#include <bits/stdc++.h>
using namespace std;


void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}


void waveSort(int arr[],int n)
{
// Every alternate element to be checked 
	for(int i=1;i<n-1;i+=2)
	{
		if(arr[i]>arr[i-1])
		{
			swap(arr,i,i-1);
		}
		if(arr[i]>arr[i+1] && i<=n-2)
		{
			swap(arr,i,i+1);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


void merge(int arr[],int start,int mid,int end)
{
	int x=mid-start+1;
	int y=end-mid;

	int a[x];
	int b[y];

	for(int i=0;i<x;i++)
	{
		a[i]=arr[start+i];
	}
	for(int i=0;i<y;i++)
	{
		b[i]=arr[mid+1+i];
	}

	int i=0,j=0,k=start;

	while(i<x && j<y)
	{
		if(a[i]<b[j])
		{
			arr[k]=a[i];
			k++;
			i++;
		}
		else
		{
			arr[k]=b[j];
			k++;
			j++;
		}
	}

	while(i<x)
	{
		arr[k]=a[i];
		k++;
		i++;
	}
	while(j<y)
	{
		arr[k]=b[j];
		k++;
		j++;
	}
}

void mergeSort(int arr[],int start, int end)
{
// Take 2 sorted mini arrays and then merge them together to get the final array
	int mid;
	if(start<end)
	{
		mid=(start + end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);

		merge(arr,start,mid,end);
	}
}


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
	mergeSort(a,0,n-1);
	waveSort(a,n);

	return 0;
}