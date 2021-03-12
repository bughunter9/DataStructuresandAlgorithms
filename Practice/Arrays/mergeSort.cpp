#include <bits/stdc++.h>
using namespace std;


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



int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}