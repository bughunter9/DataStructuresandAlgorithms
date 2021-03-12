#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{

	int currentSum=0;
	int maxe=INT_MIN;
	for(int i=0;i<n;i++)
	{
		currentSum+=arr[i];
		if(currentSum<0)
		{
			currentSum=0;
		}
		maxe=max(maxe,currentSum);
	}
	return maxe;
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

	int wrapsum;
	int nonwrapsum=kadane(a,n);
	int totalsum=0;
	for(int i=0;i<n;i++)
	{
		totalsum+=a[i];
		a[i]=-a[i];
	}
	wrapsum = totalsum + kadane(a,n);
	cout<<max(wrapsum,nonwrapsum)<<endl;

	return 0;
}
// max subarray sum= total sum of array - sum of non contributing elements 

// to find sum of non contributing elements
// reverse the sign of all the elements in the array, and then apply kadanes algorithm on it
// whatever output kadane gives , reverse the sign of it 
