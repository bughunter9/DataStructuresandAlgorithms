#include<bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int low, int high, int n)
{
	int mid=(low + high)/2;

	if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid]  >= arr[mid+1]))
	{
		return arr[mid];
	}
	else if (mid > 0 && arr[mid-1] > arr[mid])
	{
		return findPeak(arr,low,mid-1,n);
	}
	
	return findPeak(arr,mid+1,high,n);
	
}

int main()
{
	int arr[]={0,6,8,5,17,9};
	cout<<findPeak(arr,0,5,6)<<endl;
}