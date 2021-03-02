#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i+1;
		}
	}
	return -1;
}

int binarySearch(int arr[],int n,int key)
{
	int low=arr[0];
	int high=arr[n-1];
	int mid;

	while(low < high)
	{
		mid=(low + high)/2;
		if(arr[mid]==key)
		{
			return mid+1;
		}
		else if(arr[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n,key;
	cin>>n>>key;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<linearSearch(a,n,key)<<endl;
	cout<<binarySearch(a,n,key)<<endl;

	return 0;
}